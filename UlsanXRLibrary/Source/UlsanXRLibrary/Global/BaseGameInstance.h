// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/NetDriver.h"

#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "BaseGameInstance.generated.h"




/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

	friend class UGlobalDataTable;
	friend class UFallGlobal;

public:
	UPROPERTY()
	FString BaseSessionName = TEXT("UXLR");


	IOnlineSessionPtr SessionInterface;
	TSharedPtr<class FOnlineSessionSearch> SessionSearch;

	UFUNCTION(BlueprintCallable)
	FString GetPlayWorldLevel();

	void CreateSession(FString roomName, int32 playerCount);


	void OnCreateSessionComplete(FName sessionName, bool bWasSuccessful);
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);
	void OnFindSessionsComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result);


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
