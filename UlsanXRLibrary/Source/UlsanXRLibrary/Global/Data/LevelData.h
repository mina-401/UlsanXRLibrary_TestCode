// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelData.generated.h"

USTRUCT(BlueprintType)
struct FLevelDataRow : public FTableRowBase
{
	GENERATED_BODY()

	FLevelDataRow() {}
	~FLevelDataRow() {}

public:

	// ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSoftObjectPtr<UWorld> Level = nullptr;

	// ���� �̸�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Name = TEXT("");



};
UCLASS()
class ULSANXRLIBRARY_API ULevelData : public UObject
{
	GENERATED_BODY()
	
};
