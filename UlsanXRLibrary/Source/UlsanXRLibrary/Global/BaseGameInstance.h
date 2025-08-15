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

public:
	virtual void Init() override;

	// UBaseGameInstance.h
	void HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);

	UFUNCTION(BlueprintCallable)
	void StartServer(FString& _IP, FString& _Port);

	UFUNCTION(BlueprintCallable)
	void Connect(FString& _IP, FString& _Port);

	void SetCurWidget(class UTitleUserWidget* InWidget) { CurWidget = InWidget; }

private:
	class UTitleUserWidget* CurWidget = nullptr;
};
