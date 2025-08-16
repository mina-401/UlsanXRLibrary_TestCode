// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ULXREnum.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EPlayerAnimation : uint8
{
	Idle UMETA(DisplayName = "서있기"),
	Walk UMETA(DisplayName = "걷기"),
	MAX UMETA(DisplayName = "MAX"),
};

UENUM(BlueprintType)
enum class ETitleUIType : uint8
{
	TitleRoom UMETA(DisplayName = "방입장"),
	TitleMain UMETA(DisplayName = "메인화면"),
	TitleServer UMETA(DisplayName = "서버오픈"),
	
	MAX UMETA(DisplayName = "MAX"),
};


UCLASS()
class ULSANXRLIBRARY_API UULXREnum : public UObject
{
	GENERATED_BODY()
	
};
