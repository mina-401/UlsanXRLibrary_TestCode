// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/BasePlayerController.h"
#include "PlayPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API APlayPlayerController : public ABasePlayerController
{
	GENERATED_BODY()

	APlayPlayerController();
	

public:
	//Voice Chat

	void JoinVoiceChat();

	void OnVoiceConnectComplete(const struct FVoiceChatResult& Result);

public:
	//UFUNCTION(Server, Reliable)
	//UFUNCTION(BlueprintCallable)
	///void PartyTravel(const FString& Host, int32 Port, const TArray<APlayerState*>& PartyMembers);
	UFUNCTION(Server, Reliable)
	void C2S_PartyTravel(const FString& _URL);
	void C2S_PartyTravel_Implementation(const FString& _URL);

	UFUNCTION(NetMulticast, Reliable)
	void S2C_PartyTravel(const FString& _URL);
	void S2C_PartyTravel_Implementation(const FString& _URL);

	UFUNCTION(Server, Reliable)
	void C2S_PartyMemberTravel(const FString& _URL);
	void C2S_PartyMemberTravel_Implementation(const FString& _URL);

	FString GetPlayerIP() const;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class UWidgetInteractionComponent* WidgetInteraction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ObjectRayCast();
};
