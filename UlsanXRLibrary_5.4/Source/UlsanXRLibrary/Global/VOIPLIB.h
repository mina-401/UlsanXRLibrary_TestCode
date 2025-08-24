// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "VOIPLIB.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UVOIPLIB : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//UFUNCTION()
	//void MyFunction();
	
	UFUNCTION(BlueprintCallable)
	static void ClearVoicePackets(UObject* _WorldContextObject);
};
