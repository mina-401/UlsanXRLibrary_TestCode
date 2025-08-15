// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UTitleUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct();

	void SetMainWidget(class UUserWidget* _MainWidget)
	{
		MainWidget = _MainWidget;
	}

	UFUNCTION(BlueprintCallable)
	UUserWidget* GetMainWidget()
	{
		return MainWidget;
	}

private:
	UPROPERTY(Category = "UI", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* MainWidget;
};
