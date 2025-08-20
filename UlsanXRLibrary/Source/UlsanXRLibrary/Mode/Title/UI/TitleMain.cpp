// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Title/UI/TitleMain.h"
#include "Global/ULXRConst.h"
#include <Sockets.h>
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include <Interfaces/IPv4/IPv4Address.h>

void UTitleMain::NativeConstruct()
{
	Super::NativeConstruct();
	
}
void UTitleMain::CheckInput(const FString& _IP)
{

	Super::CheckInput(_IP);

	if (false == bIPIsValid)
	{
		CurPlayAnim = IPIsNotValid;
		PlayAnim(EUMGSequencePlayMode::Forward);
	}

	int a = 0;
}
