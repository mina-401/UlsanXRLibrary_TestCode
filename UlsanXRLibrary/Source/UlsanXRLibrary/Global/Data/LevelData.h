// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelData.generated.h"



USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()
	FItemData() {}
	~FItemData() {}
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UStaticMesh* Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UMaterialInstance* MaterialInst = nullptr;
};

USTRUCT(BlueprintType)
struct FBookItemDataRow : public FTableRowBase
{
	GENERATED_BODY()

	FBookItemDataRow() {}
	~FBookItemDataRow() {}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FItemData ItemData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Name = TEXT("None");

	// 레벨
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSoftObjectPtr<UWorld> Level = nullptr;


};
USTRUCT(BlueprintType)
struct FLevelDataRow : public FTableRowBase
{
	GENERATED_BODY()

	FLevelDataRow() {}
	~FLevelDataRow() {}

public:

	// 레벨
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSoftObjectPtr<UWorld> Level = nullptr;

	// 레벨 이름
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Name = TEXT("");



};
UCLASS()
class ULSANXRLIBRARY_API ULevelData : public UObject
{
	GENERATED_BODY()
	
};
