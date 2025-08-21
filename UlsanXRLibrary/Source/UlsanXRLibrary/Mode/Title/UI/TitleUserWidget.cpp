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
#include <Sockets.h>
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include <Interfaces/IPv4/IPv4Address.h>

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
bool UTitleUserWidget::IsChild(UTitleUserWidget* _Top)
{
	TArray<ETitleUIType> AllEnum = UULXREnum::GetAllEnum<ETitleUIType>();

	for (size_t i = 0; i < AllEnum.Num(); i++)
	{
		ETitleUIType Type = AllEnum[i];

		if (Wigets[Type] == _Top)
		{
			return true;
		}
	}
	return false;
}
void UTitleUserWidget::WidgetTopView(UTitleUserWidget* _Top)
{
	if (false == IsChild(_Top))
	{
		return;
	}

	TArray<ETitleUIType> AllEnum = UULXREnum::GetAllEnum<ETitleUIType>();

	for (size_t i = 0; i < AllEnum.Num(); i++)
	{
		ETitleUIType Type = AllEnum[i];

		if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Wigets[Type]->Slot))
		{
			CanvasSlot->SetZOrder(-1);
		}
	}

	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(_Top->Slot))
	{
		CanvasSlot->SetZOrder(100);
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

	int a = 0;
}
void UTitleUserWidget::StartBookTravel(const FString& _IP)
{



	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->StartBookTravel(_IP,Port);

}

void UTitleUserWidget::StartOnlineServer()
{
	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->CreateSession("ULXR", 99);
}
void UTitleUserWidget::ConnectBookTravel(const FString& _IP, const FString& _Port)
{

	class UBaseGameInstance* GameInstance = GetGameInstance<UBaseGameInstance>();

	if (GameInstance == nullptr) return;

	GameInstance->ConnectBookTravel(_IP, Port);
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
void UTitleUserWidget::OpenStreamingLevel()
{

}
void UTitleUserWidget::PlayAnim(EUMGSequencePlayMode::Type _mode)
{
	StopAnimation(CurPlayAnim);
	PlayAnimation(CurPlayAnim, 0.f, 1, _mode, 1.f);
}
//void UTitleUserWidget::CheckServer(const FString& _IP, const FString& _Port)
//{
//
//
//	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
//	if (!SocketSubsystem) return;
//
//	TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
//	bool bIsValid;
//	Addr->SetIp(*_IP, bIsValid);
//
//	int32 PortNum = FCString::Atoi(*_Port);
//	Addr->SetPort(PortNum);
//
//	if (!bIsValid) return;
//
//	Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("TestSocket"), false);
//	if (Socket)
//	{
//		Socket->SetNonBlocking(true);
//
//		//bConnecting = true;
//		//ConnectElapsed = 0.0f;
//		Socket->Connect(*Addr);
//
//		//SocketSubsystem->DestroySocket(Socket);
//	}
//}


void UTitleUserWidget::CheckInput(const FString& _IP)
{

	// 주소 생성
	TSharedRef<FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	FSocket* TestSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("Test"), false);

	// IP 유효성 검사
	bool ValidIP = false;
	Addr->SetIp(*_IP, ValidIP);

	// Port 유효성 검사
	int32 PortNum = FCString::Atoi(*Port);
	Addr->SetPort(PortNum);

	if (!ValidIP || !Port.IsNumeric() || PortNum <= 0 || PortNum > 65535)
	{
		bIPIsValid = false;


		return;
	}

	bIPIsValid = true;

	


	int a = 0;
}

void UTitleUserWidget::CreateServer()
{
	//CheckInput(IP);

	if (false == bIPIsValid)
	{
		int a = 0;
		//CurPlayAnim = IPIsNotValid;
		//PlayAnim(EUMGSequencePlayMode::Forward);
		return;
	}

	//else
	{
		//CurPlayAnim = RoomIsNotValid;

		//SetConnection();

		StartServer();
	}
}
