// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

ABasePlayerController::ABasePlayerController()
{
}

void ABasePlayerController::AddMappingContext(UInputMappingContext* _MappingContext)
{

	if (nullptr == GetLocalPlayer())
	{
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());


	// ��Ʈ�ѷ��� ���ο����� 
	TArray<FEnhancedActionKeyMapping> Map = _MappingContext->GetMappings();

	for (FEnhancedActionKeyMapping& Action : Map)
	{
		FString Name = Action.Action->GetName();

		MappingActions.Add(Name, Action.Action);
	}

	// ������ ���ε� Ű�Է� �� ����ϴ�.
	InputSystem->ClearAllMappings();
	// ��� �Է¼����� ���� ���� ó���Ǵ� �Է����� ���ڴ�.
	InputSystem->AddMappingContext(_MappingContext, 0);
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	SetupInputComponentEvent();
}