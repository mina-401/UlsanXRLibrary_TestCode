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

void UBaseGameInstance::Init()
{
	Super::Init();
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
	FString OpenLevel;
	FString LevelPath = TEXT("");
	FString LevelName = UULXRConst::Level::PlayLevelName;


	UGlobalDataTable::GetLevelDataName(GetWorld(), LevelName);



	UULXRGlobal::AssetPackagePath(UWorld::StaticClass(), LevelName, LevelPath);
	OpenLevel = FString::Printf(TEXT(":%s%s"), *_Port, *LevelPath);

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
