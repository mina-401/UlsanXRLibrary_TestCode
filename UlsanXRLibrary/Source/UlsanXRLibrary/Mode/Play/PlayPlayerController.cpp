// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayPlayerController.h"
#include "Components/WidgetInteractionComponent.h"

APlayPlayerController::APlayPlayerController()
{
	WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
	WidgetInteraction->SetupAttachment(RootComponent);

    // 상호작용 설정
    WidgetInteraction->InteractionDistance = 500.f;
    WidgetInteraction->bEnableHitTesting = true;

    WidgetInteraction->TraceChannel = ECollisionChannel::ECC_Visibility;
    WidgetInteraction->InteractionSource = EWidgetInteractionSource::Mouse;
}

// Called when the game starts or when spawned
void APlayPlayerController::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void APlayPlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (IsInputKeyDown(EKeys::LeftMouseButton))
    {
        WidgetInteraction->PressPointerKey(EKeys::LeftMouseButton);
    }
    else
    {
        WidgetInteraction->ReleasePointerKey(EKeys::LeftMouseButton);
    }


}
