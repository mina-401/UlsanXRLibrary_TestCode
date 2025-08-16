// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Global/Data/LevelData.h"
#include "GobalDataTable.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

	FDataTableRow() {}
	~FDataTableRow() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UDataTable* Resources = nullptr;
};


UCLASS()
class ULSANXRLIBRARY_API UGobalDataTable : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static const FLevelDataRow* GetLevelData(UWorld* _World, const FString& _Name);
	static void GetLevelDataName(UWorld* _World, FString& _Name);
	static const FBookItemDataRow* GetBookItemData(UWorld* _World, const FString& _Name);

};
