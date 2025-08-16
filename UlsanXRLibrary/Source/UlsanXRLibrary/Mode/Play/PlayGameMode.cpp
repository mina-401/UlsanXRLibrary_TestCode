// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayGameMode.h"
#include "GameFramework/GameStateBase.h"
#include "Global/BaseGameInstance.h"
#include "Global/ULXRConst.h"

void APlayGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	AGameStateBase* PlayGameState = GetGameState<AGameStateBase>();
	int CurrentPlayers = PlayGameState != nullptr ? PlayGameState->PlayerArray.Num() : 0;

	if (UULXRConst::Title::MaxPlayer <= CurrentPlayers)
	{
		ErrorMessage = TEXT("ServerFull");
	}
}