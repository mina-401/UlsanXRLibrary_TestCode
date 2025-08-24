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
	Ready UMETA(DisplayName = "대기화면"),
	
	MAX UMETA(DisplayName = "MAX"),
};


UCLASS()
class ULSANXRLIBRARY_API UULXREnum : public UObject
{
	GENERATED_BODY()

public:
	// UClass와는 다른
	// UEnum이라는 객체를 미리 조사해서 만듭니다

	// 언리얼에서 블루프린트에서 템플릿은 사용이 불가능합니다.
	template<typename EnumType>
	static TArray<EnumType> GetAllEnum()
	{
		TArray<EnumType> Result;
		UEnum* Enum = StaticEnum<EnumType>();
		TArray<uint8> Values = GetAllValue(Enum);

		for (size_t i = 0; i < Values.Num(); i++)
		{
			Result.Add(static_cast<EnumType>(Values[i]));
		}
		return Result;
	}

	static TArray<uint8> GetAllValue(UEnum* _Enum);
};
