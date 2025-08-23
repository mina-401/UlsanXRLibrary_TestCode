// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/NetDriver.h"

#include "BaseGameInstance.generated.h"

//namespace UE {
//	namespace Online {
//		class IOnlineServices;
//		using IOnlineServicesPtr = TSharedPtr<IOnlineServices>;
//		class IAuth;   using IAuthPtr = TSharedPtr<IAuth>;
//		class ILobbies; using ILobbiesPtr = TSharedPtr<ILobbies>;
//		struct FAccountId;
//	}
//}


UCLASS()
class ULSANXRLIBRARY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

	friend class UGlobalDataTable;
	friend class UFallGlobal;

public:
	virtual void OnStart() override;
	void StartLogin();
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable)
	void HostLobby(const FString& Addr);          // 버킷ID = Addr

	UFUNCTION(BlueprintCallable)
	void JoinLobbyByAddr(const FString& Addr);    // 버킷 검색 → 첫 결과 조인

private:
	// 로그인 완료 후 셋업
	void OnAuthLoginOk(const UE::Online::FAccountId& AccountId);

	// VoiceChat
	void InitAndConnectVoice();
	void LoginVoice(const UE::Online::FAccountId& AccountId);

private:
	// OSS v2
	//TWeakPtr<UE::Online::IOnlineServices> ServicesWeak;
	//TWeakPtr<UE::Online::IAuth>           AuthWeak;
	//TWeakPtr<UE::Online::ILobbies> LobbiesWeak;

	//// 내 계정(로그인 완료 시 저장)
	//UE::Online::FAccountId MyAccountId;

	//// 전역 보이스 핸들
	//class IVoiceChat* Voice = nullptr;

	//// 검색 후 폴링용 (간단 버전)
	//FTimerHandle SearchPollTimer;
	//FString PendingBucketId;



public:
	UPROPERTY()
	FString BaseSessionName = TEXT("UXLR");



	UFUNCTION(BlueprintCallable)
	FString GetPlayWorldLevel();

	//void CreateSession(FString roomName, int32 playerCount);


	//void OnCreateSessionComplete(FName sessionName, bool bWasSuccessful);
	//void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);
	//void OnFindSessionsComplete(bool bWasSuccessful);
	//void OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result);


public:
	UBaseGameInstance();
	virtual void Init() override;

	// UBaseGameInstance.h
	void HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);
	void HandleTravelFailure(UWorld* World, ETravelFailure::Type FailureType, const FString& Reason);

	void ShowJoinFailedPopup();
	void ShowJoinFailed();

	UFUNCTION(BlueprintCallable)
	void StartServer(FString& _IP, FString& _Port);



	UFUNCTION(BlueprintCallable)
	void ConnectBookTravel(const FString& _IP, const FString& _Port);

	UFUNCTION(BlueprintCallable)
	void StartBookTravel(const FString& _IP, const FString& _Port);

	void LeaderStartBookTravel(const FString& _URL);

	UFUNCTION(BlueprintCallable)
	void Connect(const FString& _IP, const FString& _Port);

	UFUNCTION(BlueprintCallable)
	void WorldServerTravel(UWorld* _World);



	UFUNCTION(BlueprintCallable)
	void WorldClientTravel(UWorld* _World);

	void SetCurWidget(class UTitleUserWidget* InWidget) { CurWidget = InWidget; }

	void SetIP(const FString& _IP)
	{
		IP = _IP;
	}

	void SetPort(const FString& _Port)
	{
		Port = _Port;
	}

	FString GetIP()
	{
		return IP;
	}

	FString GetPort()
	{
		return Port;
	}


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString IP = TEXT("127.0.0.1");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString Port = TEXT("30000");
private:
	class UTitleUserWidget* CurWidget = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Data")
	class UDataTable* DataTables = nullptr;
	class UDataTable* ResourceDataTable = nullptr;
	class UDataTable* LevelDataTable = nullptr;
	class UDataTable* BookItemDataTable = nullptr;
	class UDataTable* ActorDataTable = nullptr;


};
