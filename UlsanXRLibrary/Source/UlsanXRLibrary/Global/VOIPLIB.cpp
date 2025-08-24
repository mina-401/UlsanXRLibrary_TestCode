// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/VOIPLIB.h"

#include "Online.h"

#include "OnlineSubsystem.h"
#include "Interfaces/VoiceInterface.h"

void UVOIPLIB::ClearVoicePackets(UObject* _WorldContextObject)
{
	UWorld* const World = GEngine->GetWorldFromContextObject(_WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);

	if (!IsValid(World))
	{
		return;
	}
	IOnlineVoicePtr VoiceInterface = Online::GetVoiceInterface(World->GetFName());

	if (!VoiceInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Clear voice packets couldnt get the voice interfaced!"));
	}
	VoiceInterface->ClearVoicePackets();

	

}
