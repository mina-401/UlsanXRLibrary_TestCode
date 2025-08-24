// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemInterface.generated.h"

/**
 * 
 */
UINTERFACE()
class ULSANXRLIBRARY_API UItemInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
	
};

class IItemInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	virtual void InterectUpdate(class AItem* _Item, float _DeltaTime);
	virtual void InterectStart(class AItem* _Item);
	virtual void InterectEnd(class AItem* _Item);
};