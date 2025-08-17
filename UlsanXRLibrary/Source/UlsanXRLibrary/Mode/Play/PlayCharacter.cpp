// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayCharacter.h"
#include "Mode/Play/Object/Item.h"
#include <GameFramework/PlayerController.h>
#include "Global/Object/Interface/ItemInterface.h"
#include "Components/CapsuleComponent.h"
#include "Mode/Play/Object/TravelBook.h"
#include "Global/Data/GlobalDataTable.h"
#include "Components/WidgetComponent.h"
#include <ULXRConst.h>


APlayCharacter::APlayCharacter()
{
    /*WidgetChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("WidgetActor"));
    WidgetChildActorComponent->SetupAttachment(RootComponent);
    WidgetChildActorComponent->SetChildActorClass(AActor::StaticClass());*/
}

AActor* APlayCharacter::CreateItem(const FString& _ItemName)
{
    TSubclassOf<AActor> SubClass = UGlobalDataTable::GetActorClass(GetWorld(), _ItemName);


    FTransform Trans;
    AActor* Actor = GetWorld()->SpawnActorDeferred<AActor>(SubClass, Trans);
    if (nullptr == Actor)
    {
        //UE_LOG(GMLOG, Fatal, TEXT("%S(%u)> if (nullptr == ItemActor) Item Spawn Is Nullptr"), __FUNCTION__, __LINE__);
        return nullptr;
    }
    Actor->FinishSpawning(Trans);


    return Actor;
}

void APlayCharacter::BeginPlay()
{
    Super::BeginPlay();

    int a = 0;

    BookActor = CreateItem(TEXT("BP_TravelBook"));

    if (BookActor != nullptr)
    {
        BookActor->SetActorHiddenInGame(true);

    }

    

}

void APlayCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (BookActor != nullptr )

    {
        ActorLookAtCamera(BookActor);
    }
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
 

        //책 정보 전달하고
        //위젯 키기

        FString Name = _Item->GetData()->Name;

        if (nullptr != BookActor)
        {
           
            ATravelBook* Book = Cast<ATravelBook>(BookActor);
            Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
            if (GetController() && GetController()->IsLocalController())
            {
      
                Book->GetWidgetComponent()->SetCollisionProfileName(UULXRConst::Collision::ProfileName_WidgetInter);
                Book->SetName(Name);
                Book->SetPlayBookNameEvent();
                BookActor->SetActorHiddenInGame(false);

            }

             
        }
       
 
}

void APlayCharacter::InterectEnd(class AItem* _Item)
{

    if (nullptr != BookActor)
    {

        ATravelBook* Book = Cast<ATravelBook>(BookActor);
        Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
        if (GetController() && GetController()->IsLocalController())
        {
 

                Book->SetName("");
                Book->SetPlayBookNameEvent();
        }

        BookActor->SetActorHiddenInGame(true);

    }

        
       
}
