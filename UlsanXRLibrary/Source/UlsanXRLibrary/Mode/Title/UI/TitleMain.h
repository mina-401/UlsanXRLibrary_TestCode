// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include "TitleMain.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UTitleMain : public UTitleUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct();

	UFUNCTION(BlueprintCallable)
	void MainWidgetInit();

	UFUNCTION(BlueprintCallable)
	void CreateChildWidget(TSubclassOf<UUserWidget> _Widget, bool _IsVisible);

	void SetCurWidget(class UTitleUserWidget* _CurWidget)
	{
		CurWidget = _CurWidget;
	}

	class UTitleUserWidget* GetCurWidget()
	{
		return CurWidget;
	}

private:
	class  UCanvasPanel* CanvasPanel;
	class UTitleUserWidget* CurWidget;
	//TMultiMap<ETitleUIType, UTitleUserWidget*> Widgets;
};
