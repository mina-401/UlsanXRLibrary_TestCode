// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Title/UI/TitleOpenServer.h"
#include <Net/UnrealNetwork.h>
#include <Sockets.h>
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include <Interfaces/IPv4/IPv4Address.h>
#include <Kismet/GameplayStatics.h>


void UTitleOpenServer::NativeConstruct()
{
	Super::NativeConstruct();

	//SetCanEverTick(true);
	//bCanEverTick = true;
}

void UTitleOpenServer::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	//if (!bConnecting || Socket == nullptr) return;


	//ConnectElapsed += InDeltaTime;

	//if (Socket->GetConnectionState() == SCS_Connected)
	//{
	//	bConnecting = false;
	//	Socket->Close();
	//	ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket); // 府家胶 秦力
	//	Socket = nullptr;

	//	bIsServerAlive = true;

	//	Super::Connect();


	//}

	//if (ConnectElapsed >= ConnectTimeout)
	//{
	//	bConnecting = false;
	//	Socket->Close();
	//	ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket); // 府家胶 秦力
	//	Socket = nullptr;

	//	bIsServerAlive = false;
	//}

	//if (false == bIsServerAlive)
	//{
	//	CurPlayAnim = RoomIsNotValid;
	//	PlayAnim(EUMGSequencePlayMode::Forward);
	//}
	//if (false == bIPIsValid)
	//{
	//	CurPlayAnim = IPIsNotValid;
	//	PlayAnim(EUMGSequencePlayMode::Forward);
	//	return;
	//}
}

void UTitleOpenServer::CheckServer(const FString& _IP, const FString& _Port)
{


	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (!SocketSubsystem) return;

	TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
	bool bIsValid;
	Addr->SetIp(*_IP, bIsValid);

	int32 PortNum = FCString::Atoi(*_Port);
	Addr->SetPort(PortNum);

	if (!bIsValid) return;

	Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("TestSocket"), false);
	if (Socket)
	{
		Socket->SetNonBlocking(true);

		bConnecting = true;
		ConnectElapsed = 0.0f;
		Socket->Connect(*Addr);

		//SocketSubsystem->DestroySocket(Socket);
	}
}


void UTitleOpenServer::CheckInput(const FString& _IP)
{

	// 林家 积己
	TSharedRef<FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	FSocket* TestSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("Test"), false);

	// IP 蜡瓤己 八荤
	bool ValidIP = false;
	Addr->SetIp(*_IP, ValidIP);

	// Port 蜡瓤己 八荤
	int32 PortNum = FCString::Atoi(*Port);
	Addr->SetPort(PortNum);

	if (!ValidIP || !Port.IsNumeric() || PortNum <= 0 || PortNum > 65535)
	{
		bIPIsValid = false;


		return;
	}

	bIPIsValid = true;

}

void UTitleOpenServer::Connect()
{	
	Super::Connect();
	
}

void UTitleOpenServer::StartServer()
{
	CheckInput(IP);

	if (false == bIPIsValid)
	{
		CurPlayAnim = IPIsNotValid;
		PlayAnim(EUMGSequencePlayMode::Forward);
		return;
	}

	else
	{
		CurPlayAnim = RoomIsNotValid;

		SetConnection();

		Super::StartServer();
	}
}

