// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Title/UI/TitleRobby.h"
#include <Net/UnrealNetwork.h>
#include <Sockets.h>
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include <Interfaces/IPv4/IPv4Address.h>
#include <Kismet/GameplayStatics.h>



void UTitleRobby::NativeConstruct()
{
	Super::NativeConstruct();

	//bCanEverTick = true;

	//SetCanEverTick(true);
}




void UTitleRobby::CheckServer(const FString& _IP, const FString& _Port)
{


	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (!SocketSubsystem) return ;

	TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
	bool bIsValid;
	Addr->SetIp(*_IP, bIsValid);

	int32 PortNum = FCString::Atoi(*_Port);
	Addr->SetPort(PortNum);

	if (!bIsValid) return ;

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


void UTitleRobby::CheckInput(const FString& _IP)
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

}

void UTitleRobby::Connect()
{
	CheckInput(IP);
	CheckServer(IP, Port);

	int a = 0;


	if (false == bIPIsValid)
	{
		CurPlayAnim = IPIsNotValid;
		PlayAnim(EUMGSequencePlayMode::Forward);
		return;
	}

	else if (false == bIsServerAlive)
	{
		CurPlayAnim = RoomIsNotValid;
		PlayAnim(EUMGSequencePlayMode::Forward);
		return;
	}
	else
	{
		//CurPlayAnim = RoomIsNotValid;
		Super::Connect();
	}
}





