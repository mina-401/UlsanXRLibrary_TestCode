// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayCharacter.h"
#include "Mode/Play/Object/Item.h"
#include <GameFramework/PlayerController.h>
#include "Global/Object/Interface/ItemInterface.h"
#include "Components/CapsuleComponent.h"
#include "Mode/Play/Object/TravelBook.h"


APlayCharacter::APlayCharacter()
{
    WidgetChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("WidgetActor"));
    WidgetChildActorComponent->SetupAttachment(RootComponent);
    WidgetChildActorComponent->SetChildActorClass(AActor::StaticClass());
}

void APlayCharacter::BeginPlay()
{
    Super::BeginPlay();

    int a = 0;

    if ( nullptr != GetController() && GetController()->IsLocalController())
    {
        bIsLocal = true;
        //bIsServer = true;
        //WidgetChildActorComponent->SetVisibility(true);
    }
    else
    {
        bIsLocal = false;
        //bIsServer = false;
    }

    WidgetChildActorComponent->SetVisibility(false);


}

void APlayCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{

}
void APlayCharacter::InterectUpdate(class AItem* _Item,float _DeltaTime)
{
}
void APlayCharacter::InterectStart(class AItem* _Item)
{
    if (true == bIsLocal)
    {

        //책 정보 전달하고
        //위젯 키기

        FString Name = _Item->GetData()->Name;

      
        ATravelBook* Book = Cast<ATravelBook>(WidgetChildActorComponent->GetChildActor());
        if (nullptr != Book)
        {
            Book->SetName(Name);
            Book->SetPlayBookNameEvent();
        }
        WidgetChildActorComponent->SetVisibility(true);
    }
}

void APlayCharacter::InterectEnd(class AItem* _Item)
{
    if (true == bIsLocal)
    {

        FString Name = _Item->GetData()->Name;


        ATravelBook* Book = Cast<ATravelBook>(WidgetChildActorComponent->GetChildActor());
        if (nullptr != Book)
        {
            Book->SetName("");
            Book->SetPlayBookNameEvent();
        }

        WidgetChildActorComponent->SetVisibility(false);
    }
}
