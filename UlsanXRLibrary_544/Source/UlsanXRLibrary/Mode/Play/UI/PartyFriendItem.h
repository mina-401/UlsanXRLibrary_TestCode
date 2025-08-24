// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Components/Image.h"       // UImage
#include "Components/TextBlock.h"   // UTextBlock


#include "PartyFriendItem.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UPartyFriendItem : public UUserWidget, public IUserObjectListEntry

{
	GENERATED_BODY()
public:

	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

public:

	UPROPERTY(meta = (BindWidget),BlueprintReadWrite)
	TObjectPtr<UImage> Image_Name;
	UPROPERTY(meta = (BindWidget),BlueprintReadWrite)
	TObjectPtr<UTextBlock> TEXT_Name;




};
