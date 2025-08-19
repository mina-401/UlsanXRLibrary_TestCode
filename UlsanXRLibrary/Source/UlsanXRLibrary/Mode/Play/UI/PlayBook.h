// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include "PlayBook.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UPlayBook : public UTitleUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void VisibleChangeUIFromAllWidget(ETitleUIType _Type, ESlateVisibility _Value);


	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CreateFriendObject();

};
