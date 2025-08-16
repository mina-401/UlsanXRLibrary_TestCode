// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/NetDriver.h"
#include "BaseGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

	friend class UGobalDataTable;
	friend class UFallGlobal;

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
	void Connect(FString& _IP, FString& _Port);

	void SetCurWidget(class UTitleUserWidget* InWidget) { CurWidget = InWidget; }

private:
	class UTitleUserWidget* CurWidget = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Data")
	class UDataTable* DataTables = nullptr;
	class UDataTable* ResourceDataTable = nullptr;
	class UDataTable* LevelDataTable = nullptr;
};
