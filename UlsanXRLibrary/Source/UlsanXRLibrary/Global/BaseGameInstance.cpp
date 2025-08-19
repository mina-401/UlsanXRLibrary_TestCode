// Fill out your copyright notice in the Description page of Project Settings.

#include "Global/BaseGameInstance.h"
#include "Engine/Engine.h"             // GEngine 접근
#include "Engine/NetDriver.h"          // UNetDriver
#include "Engine/World.h"              // UWorld
#include "Engine/NetworkDelegates.h"   // FNetworkFailureSignature
#include <Kismet/GameplayStatics.h>

#include <ULXRConst.h>
#include <ULXRGlobal.h>
#include <Mode/Title/UI/TitleUserWidget.h>
#include <Mode/Title/UI/TitleRobby.h>
#include <Data/GlobalDataTable.h>
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
FString UBaseGameInstance::GetPlayWorldLevel()
{

	FString LevelPath = TEXT("");
	FString LevelName = UULXRConst::Level::PlayLevelName;


	UGlobalDataTable::GetLevelDataName(GetWorld(), LevelName);

	return LevelName;

}
void UBaseGameInstance::CreateSession(FString roomName, int32 playerCount)
{
	FOnlineSessionSettings sessionSettings;

	// 1. LAN 연결인지 DEDICATED 연결인지 설정한다.
	sessionSettings.bIsDedicated = false;
	//sessionSettings.bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == FName("NULL");
	sessionSettings.bIsLANMatch = false;

	// 2. 검색 가능한 방으로 설정한다.
	sessionSettings.bShouldAdvertise = true;

	// 3. 자기 정보를 전달될 수 있게 설정한다.
	sessionSettings.bUsesPresence = true;

	// 4. 다른 유저의 중간 입장을 허용한다.
	sessionSettings.bAllowJoinInProgress = true;
	sessionSettings.bAllowJoinViaPresence = true;

	// 5. 입장 가능 인원을 설정한다.
	sessionSettings.NumPublicConnections = playerCount;

	//// 6. 세션에 추가 설정을 넣는다.
	sessionSettings.Set(FName("ROOM_NAME"), roomName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	sessionSettings.Set(FName("HOST_NAME"), BaseSessionName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	bool isSuccess = SessionInterface->CreateSession(0, FName(roomName), sessionSettings);
	UE_LOG(LogTemp, Warning, TEXT("Session Create Result: %s"), isSuccess ? *FString("Success") : *FString("Failed..."));
}



UBaseGameInstance::UBaseGameInstance()
{


	{
		FString DataPath = UULXRConst::Path::GlobalDataTablePath;
		ConstructorHelpers::FObjectFinder<UDataTable> FinderDataTables(*DataPath);
		if (true == FinderDataTables.Succeeded())
		{
			DataTables = FinderDataTables.Object;
		}

		if (nullptr != DataTables)
		{
			LevelDataTable = DataTables->FindRow<FDataTableRow>("DT_LevelDataTable", nullptr)->Resources;
			if (nullptr == LevelDataTable)
			{
				//return;
			}
			BookItemDataTable = DataTables->FindRow<FDataTableRow>("DT_BookItemDataTable", nullptr)->Resources;
			if (nullptr == BookItemDataTable)
			{
				//return;
			}
			ActorDataTable = DataTables->FindRow<FDataTableRow>("DT_GlobalActorDataTable", nullptr)->Resources;
			if (nullptr == ActorDataTable)
			{
				//UE_LOG(GMLOG, Fatal, TEXT("%S(%u)> if (nullptr == ActorDataTable)"), __FUNCTION__, __LINE__);
			}
		}

		

	}
}
void UBaseGameInstance::OnCreateSessionComplete(FName sessionName, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		FString LevelPath = TEXT("");
		FString LevelName = UULXRConst::Level::PlayLevelName;


		UGlobalDataTable::GetLevelDataName(GetWorld(), LevelName);



		UULXRGlobal::AssetPackagePath(UWorld::StaticClass(), LevelName, LevelPath);

		FString OpenLevel = FString::Printf(TEXT("%s?Listen"), *LevelPath);
		bool result = GetWorld()->ServerTravel(OpenLevel, true);
		UE_LOG(LogTemp, Warning, TEXT("Travel Result: %s"), result ? *FString("Success") : *FString("Failed..."));
	}
}
void UBaseGameInstance::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	
}

void UBaseGameInstance::OnFindSessionsComplete(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		// 검색된 세션 목록을 가져온다.
		if (SessionSearch == nullptr) return;

		TArray<FOnlineSessionSearchResult> searchResults = SessionSearch->SearchResults;

		UE_LOG(LogTemp, Warning, TEXT("Find Sessions: %d"), searchResults.Num());

		for (int32 i = 0; i < searchResults.Num(); i++)
		{
			FString roomName;
			searchResults[i].Session.SessionSettings.Get(FName("ROOM_NAME"), roomName);
			FString hostName;
			searchResults[i].Session.SessionSettings.Get(FName("HOST_NAME"), hostName);
			int32 openNumber = searchResults[i].Session.NumOpenPublicConnections;
			int32 maxNumber = searchResults[i].Session.SessionSettings.NumPublicConnections;
			int32 pingSpeed = searchResults[i].PingInMs;

			UE_LOG(LogTemp, Warning, TEXT("Room Name: %s, HostName: %s, OpenNumber: %d, MaxNumber: %d, Ping Speed: %d"), *roomName, *hostName, openNumber, maxNumber, pingSpeed);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Session search failed..."));
	}
}

void UBaseGameInstance::OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result)
{
	switch (result)
	{
	case EOnJoinSessionCompleteResult::Success:
	{
		UE_LOG(LogTemp, Warning, TEXT("Success: %s"), *sessionName.ToString());

		APlayerController* playerCon = GetWorld()->GetFirstPlayerController();
		if (playerCon != nullptr)
		{
			// join된 세션 호스트의 ServerTravel 된 맵 주소를 받아온다.
			FString url;
			SessionInterface->GetResolvedConnectString(sessionName, url);
			UE_LOG(LogTemp, Warning, TEXT("Connection URL: %s"), *url);

			// 주소를 받았다면, 그 주소에 따라서 맵 이동한다.
			if (!url.IsEmpty())
			{
				playerCon->ClientTravel(url, ETravelType::TRAVEL_Absolute);
			}
		}
	}
	break;
	case EOnJoinSessionCompleteResult::SessionIsFull:
		UE_LOG(LogTemp, Warning, TEXT("SessionIsFull"));
		break;
	case EOnJoinSessionCompleteResult::SessionDoesNotExist:
		UE_LOG(LogTemp, Warning, TEXT("SessionDoesNotExist"));
		break;
	case EOnJoinSessionCompleteResult::CouldNotRetrieveAddress:
		UE_LOG(LogTemp, Warning, TEXT("CouldNotRetrieveAddress"));
		break;
	case EOnJoinSessionCompleteResult::AlreadyInSession:
		UE_LOG(LogTemp, Warning, TEXT("AlreadyInSession"));
		break;
	case EOnJoinSessionCompleteResult::UnknownError:
		UE_LOG(LogTemp, Warning, TEXT("UnknownError"));
		break;
	default:
		break;
	}
	//SessionInterface->JoinSession(0, FName(sessionName), SessionSearch->SearchResults[index]);
}

void UBaseGameInstance::Init()
{
	Super::Init();

	if (IOnlineSubsystem* subsys = IOnlineSubsystem::Get())
	{
		// Online Session Interface API 접근용 인스턴스 가져오기
		SessionInterface = subsys->GetSessionInterface();
		
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UBaseGameInstance::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UBaseGameInstance::OnDestroySessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UBaseGameInstance::OnFindSessionsComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UBaseGameInstance::OnJoinSessionComplete);

		
	}


	GEngine->OnNetworkFailure().AddUObject(this, &UBaseGameInstance::HandleNetworkFailure);
	GEngine->OnTravelFailure().AddUObject(this, &UBaseGameInstance::HandleTravelFailure);



}
void UBaseGameInstance::HandleTravelFailure(UWorld* World, ETravelFailure::Type FailureType, const FString& Reason)
{
	//if (Reason.Contains(TEXT("ServerFull")))
	//{
	//	ShowJoinFailedPopup();  // 애니메이션 UI 표시
	//}
}
void UBaseGameInstance::HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
{
	int a = 0;

	if (!World) return;


	ShowJoinFailedPopup();


	//UE_LOG(LogTemp, Error, TEXT("Network Failure: %s"), *ErrorString);
}
void UBaseGameInstance::ShowJoinFailedPopup()
{
	if (CurWidget->IsValidLowLevel())
	{
		CurWidget->PlayAnim(EUMGSequencePlayMode::Forward);
	}
}
void UBaseGameInstance::ShowJoinFailed()
{
	if (CurWidget->IsValidLowLevel())
	{
		CurWidget->VisibleChangeUI(ETitleUIType::TitleRoom, ESlateVisibility::Visible);

		//CurWidget->VisibleChangeUI(ETitleUIType::TitleServer, ESlateVisibility::Visible);
	}
}
void UBaseGameInstance::StartServer(FString& _IP, FString& _Port)
{

	FString LevelPath = TEXT("");
	FString LevelName = UULXRConst::Level::PlayLevelName;


	UGlobalDataTable::GetLevelDataName(GetWorld(), LevelName);



	UULXRGlobal::AssetPackagePath(UWorld::StaticClass(), LevelName, LevelPath);
	FString OpenLevel = FString::Printf(TEXT(":%s%s"), *_Port, *LevelPath);
	//FString URLString = FString::Printf(TEXT("%s:%s%s"), *_IP, *_Port,TEXT("listen"));

		
	UGameplayStatics::OpenLevel(GetWorld(), *OpenLevel, true, TEXT("listen"));

}
void UBaseGameInstance::Connect(FString& _IP, FString& _Port)
{
	/*SetIP(_IP);
	SetPort(_Port);
	*/
	

	FString ConnectLevelName = FString::Printf(TEXT("%s:%s"), *_IP, *_Port);
	// 127.0.0.1:30000
	UGameplayStatics::OpenLevel(GetWorld(), FName(*ConnectLevelName));
	//UGameplayStatics::OpenLevel(GetWorld(), TEXT("8.8.8.8:30000"));
}

void UBaseGameInstance::WorldServerTravel(UWorld* _World)
{

	if (nullptr == _World->GetAuthGameMode()) return;

	FString LevelPath = TEXT("");
	FString LevelName = UULXRConst::Level::EndLevelName;

	UULXRGlobal::AssetPackagePath(UWorld::StaticClass(), LevelName, LevelPath);



	_World->ServerTravel(LevelPath + TEXT("?listen"));


}

void UBaseGameInstance::WorldClientTravel(UWorld* _World)
{
	FString OpenLevel;
	FString LevelPath = TEXT("");
	FString LevelName = UULXRConst::Level::EndLevelName;

	UGlobalDataTable::GetLevelDataName(GetWorld(), LevelName);

	UULXRGlobal::AssetPackagePath(UWorld::StaticClass(), LevelName, LevelPath);
	//OpenLevel = FString::Printf(TEXT("%s:%s%s"),*IP, *Port, *LevelPath);
	OpenLevel = FString::Printf(TEXT("%s%s"),*Port, *LevelPath);


	_World->GetFirstPlayerController()->ClientTravel(OpenLevel, TRAVEL_Absolute);

}
