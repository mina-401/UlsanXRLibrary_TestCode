// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include "Ready.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UReady : public UTitleUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CreateFriendData(const FString& _Name);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DeleteFriendData(const FString& _Name);
	
};
