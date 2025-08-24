// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/BaseGameMode.h"
#include "PlayGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API APlayGameMode : public ABaseGameMode
{
	GENERATED_BODY()

public:
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

};
