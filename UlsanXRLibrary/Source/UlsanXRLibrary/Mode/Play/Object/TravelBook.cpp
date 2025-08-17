// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/Object/TravelBook.h"
#include "Components/WidgetComponent.h"

#include "Blueprint/UserWidget.h" 
#include "Global/ULXRConst.h"


// Sets default values
ATravelBook::ATravelBook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

   


    // 위젯 컴포넌트 생성
    WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    WidgetComponent->SetupAttachment(RootComponent  );

    // WidgetClass 로드 -> 나중에 바꿀 것
    static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClass(
        TEXT("/Game/BP/Mode/Play/UI/WBP_PlayBook.WBP_PlayBook_C"));


    if (WidgetClass.Succeeded())
    {
        WidgetComponent->SetWidgetClass(WidgetClass.Class);
    }

    // Draw Size
    WidgetComponent->SetDrawSize(FVector2D(1624.f, 1045.f));
    WidgetComponent->SetWidgetSpace(EWidgetSpace::World);
    WidgetComponent->SetGenerateOverlapEvents(true);

    WidgetComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);



}

// Called when the game starts or when spawned
void ATravelBook::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATravelBook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

 
}

