// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Title/UI/TitleMain.h"
#include "Global/ULXRConst.h"
#include <Components/CanvasPanel.h>

void UTitleMain::NativeConstruct()
{
	Super::NativeConstruct();
	
}
void UTitleMain::MainWidgetInit()
{
	UWidget* PanelWidget = GetWidgetFromName(UULXRConst::UI::TitleMainPanelName);
	CanvasPanel = Cast<UCanvasPanel>(PanelWidget);

	if (nullptr == CanvasPanel)
	{
		return;
	}

	if (false == CanvasPanel->IsValidLowLevel())
	{
		return;
	}
}

void UTitleMain::CreateChildWidget(TSubclassOf<UUserWidget> _Widget, bool _IsVisible)
{
	UTitleUserWidget* Widget = CreateWidget<UTitleUserWidget>(CanvasPanel, _Widget);
	if (nullptr == Widget)
	{
		return;
	}

	FString WidgetName = Widget->GetClass()->GetName();

	// title user widget 을 메인 부모위젯으로 함
	Widget->SetMainWidget(this);

	// 위젯 자식으로 둠
	CanvasPanel->AddChild(Widget);

	if (false == _IsVisible)
	{
		Widget->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		Widget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		CurWidget = Widget;
	}
}
