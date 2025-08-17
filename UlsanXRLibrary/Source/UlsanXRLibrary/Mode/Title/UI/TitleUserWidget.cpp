// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Title/UI/TitleUserWidget.h"
#include "Global/ULXREnum.h"
#include "Global/ULXRConst.h"
#include "Global/ULXRGlobal.h"

#include <Components/CanvasPanel.h>
#include <Components/CanvasPanelSlot.h>
#include "Global/ULXRGlobal.h"
#include <Kismet/GameplayStatics.h>
#include "Global/BaseGameInstance.h"


void UTitleUserWidget::NativeConstruct()
{
	Super::NativeConstruct();


	if (auto* GI = GetGameInstance<UBaseGameInstance>())
	{
		GI->SetCurWidget(this);
	}
}
void UTitleUserWidget::MainWidgetInit()
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

void UTitleUserWidget::CreateChildWidget(ETitleUIType _Type, TSubclassOf<UUserWidget> _Widget, int _ZOrder)
{
	UTitleUserWidget* Widget = CreateWidget<UTitleUserWidget>(CanvasPanel, _Widget);
	if (nullptr == Widget)
	{
		return;
	}

	FString WidgetName = Widget->GetClass()->GetName();

	// title user widget 을 메인 부모위젯으로 함
	Widget->SetMainWidget(this);

	//Widget->SetFocus();
	// 위젯 자식으로 둠
	CanvasPanel->AddChild(Widget);

	Wigets.Add(_Type, Widget);

	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Widget->Slot);
	if (nullptr != CanvasSlot)
	{
		CanvasSlot->SetAnchors(FAnchors(0.0f, 0.0f, 1.0f, 1.0f));
		CanvasSlot->SetOffsets(FMargin(0.0f, 0.0f, 0.0f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(0.0f, 0.0f));
		CanvasSlot->SetZOrder(_ZOrder);
	}
}

void UTitleUserWidget::SetZOrder(int _Order)
{
	UTitleUserWidget* Widget = MainWidget;
	if (nullptr == Widget)
	{
		return;
	}

	FString WidgetName = Widget->GetClass()->GetName();

	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Widget->Slot);
	if (nullptr != CanvasSlot)
	{
		CanvasSlot->SetZOrder(_Order);
	}
}

void UTitleUserWidget::VisibleChangeUI(ETitleUIType _Type, ESlateVisibility _Value)
{
	if (false == Wigets.Contains(_Type))
	{
		return;
	}

	Wigets[_Type]->SetVisibility(_Value);
}

void UTitleUserWidget::StartServer()
{
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->StartServer(IP, Port);
}

void UTitleUserWidget::Connect()
{
	
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->Connect(IP, Port);
}
void UTitleUserWidget::ServerTravelToWorld()
{
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->WorldServerTravel(GetWorld());
}
void UTitleUserWidget::ClientTravelToWorld()
{
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->WorldClientTravel(GetWorld());
}
void UTitleUserWidget::SetConnection()
{
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->SetIP(IP);
	GameInstance->SetPort(Port);
}
void UTitleUserWidget::PlayAnim(EUMGSequencePlayMode::Type _mode)
{
	StopAnimation(CurPlayAnim);
	PlayAnimation(CurPlayAnim, 0.f, 1, _mode, 1.f);
}
