// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ULXRConst.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UULXRConst : public UObject
{
	GENERATED_BODY()
public:
	class UI
	{
	public:
		static FName TitleMainPanelName;
		static FName PlayMainPanelName;
	};
};
