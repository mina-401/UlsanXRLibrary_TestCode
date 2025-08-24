// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include "Components/Button.h"
#include <Components/EditableTextBox.h>
#include <Components/TextBlock.h>
#include "TitleRobby.generated.h"
/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UTitleRobby : public UTitleUserWidget
{
	GENERATED_BODY()

	

	
public:

	virtual void NativeConstruct() override;




	void CheckServer(const FString& IP, const FString& Port);


	void CheckInput(const FString& _IP);

	void Connect() override;



protected:
	//void StartOnlineServer() override;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_OpenRoom;

private:

	//UFUNCTION()
	//void OnOpenRoomClicked();

	bool IsOnceClicked = false;


	bool bIPIsValid = false;
	bool bIsServerAlive = false;
	bool bConnecting = false;
	float ConnectElapsed = 0.f;
	float ConnectTimeout = 10.0f;

	FSocket* Socket;

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* IPIsNotValid;

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* RoomIsNotValid;


};
