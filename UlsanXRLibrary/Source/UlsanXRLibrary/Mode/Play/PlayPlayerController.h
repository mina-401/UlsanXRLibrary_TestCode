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

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class UWidgetInteractionComponent* WidgetInteraction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
