// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include "TitleOpenServer.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UTitleOpenServer : public UTitleUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	void CheckServer(const FString& IP, const FString& Port);
	void CheckInput(const FString& _IP);

	void Connect() override;



private:
	bool bIPIsValid = false;
	//bool bIsServerAlive = false;
	bool bConnecting = false;
	float ConnectElapsed = 0.f;
	float ConnectTimeout = 5.0f;

	FSocket* Socket;

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* IPIsNotValid;

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* RoomIsNotValid;

};
