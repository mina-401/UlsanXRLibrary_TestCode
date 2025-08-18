// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayCharacter.h"
#include "Mode/Play/Object/Item.h"
#include <GameFramework/PlayerController.h>
#include "Global/Object/Interface/ItemInterface.h"
#include "Components/CapsuleComponent.h"
#include "Mode/Play/Object/TravelBook.h"
#include "Global/Data/GlobalDataTable.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include <ULXRConst.h>
#include "Net/UnrealNetwork.h"


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

    if (GetController() && GetController()->IsLocalController()) {
       if (BookActor != nullptr )

        {
            ActorLookAtCamera(BookActor);
        }
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

    if (nullptr == _Item) return;

        FString Name = _Item->GetData()->Name;


        if (nullptr != BookActor)
        {
            BookActor->SetActorHiddenInGame(true);

            ATravelBook* Book = Cast<ATravelBook>(BookActor);
            Book->SetItem(_Item);
            Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
            if (GetController() && GetController()->IsLocalController())
            {
      
                Book->GetWidgetComponent()->SetCollisionProfileName(UULXRConst::Collision::ProfileName_WidgetInter);
                Book->SetName(Name);
                BookActor->SetActorHiddenInGame(false);

            }


        }
       
 
}
void APlayCharacter::InterectEnd(class AItem* _Item)
{
   // if (nullptr == _Item) return;
    if (nullptr != BookActor)
    {

        ATravelBook* Book = Cast<ATravelBook>(BookActor);
        Book->SetItem(nullptr);

        Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);


        if (GetController() && GetController()->IsLocalController())
        {
            Book->SetName("");
        }

        BookActor->SetActorHiddenInGame(true);

    }



}

void APlayCharacter::OpenStreamingLevel_Multi_Implementation()
{
    ATravelBook* Book = Cast<ATravelBook>(BookActor);
    const TSoftObjectPtr<UWorld> NextLevel = Book->GetItem()->GetNextLevel();


    ULevelStreaming* StreamingLevel = UGameplayStatics::GetStreamingLevel(GetWorld(), *NextLevel.GetAssetName());

    if (StreamingLevel && StreamingLevel->IsLevelLoaded())
    {

        bool bIsLevelVisible = StreamingLevel->GetLoadedLevel()->bIsVisible;


        if (true == bIsLevelVisible)
        {
            FVector SpawnPoint = Book->GetItem()->GetSpawnPoint();
            SetActorLocation(SpawnPoint);
        }

            

    }

    //else
    //{
    //    UGameplayStatics::LoadStreamLevelBySoftObjectPtr(
    //        GetWorld(),
    //        NextLevel,
    //        true,                    // bMakeVisibleAfterLoad (로드 후 보이게 할지)
    //        true,                    // bShouldBlockOnLoad (true면 로드 완료까지 대기)
    //        FLatentActionInfo()      // Latent Info (비동기 처리용)
    //    );
    //}

    if (nullptr != Book->GetItem())
    {
        FVector SpawnPoint = Book->GetItem()->GetSpawnPoint();

        SetActorLocation(SpawnPoint);
    }

  
}

//void APlayCharacter::Teleport_Implementation(FVector _Point)
//{
//    SetActorLocation(_Point);
//}
//void APlayCharacter::OpenStreamingLevel()
//{
//
//
//}
void APlayCharacter::OpenStreamingLevel_Implementation()
{
    ATravelBook* Book = Cast<ATravelBook>(BookActor);
    const TSoftObjectPtr<UWorld> NextLevel = Book->GetItem()->GetNextLevel();


    ULevelStreaming* StreamingLevel = UGameplayStatics::GetStreamingLevel(GetWorld(), *NextLevel.GetAssetName());


   // StreamingLevel->SetShouldBeVisible(true);
    StreamingLevel->GetLoadedLevel()->bIsVisible = true;
    
    bool bIsLevelVisible = StreamingLevel->GetLoadedLevel()->bIsVisible;


#ifdef WITH_EDITOR
   // StreamingLevel->SetShouldBeVisibleInEditor(true);

#endif


    OpenStreamingLevel_Multi();
}


void APlayCharacter::CloseStreamingLevel()
{
    ATravelBook* Book = Cast<ATravelBook>(BookActor);
    const TSoftObjectPtr<UWorld> NextLevel = Book->GetItem()->GetNextLevel();

    UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(
        GetWorld(),
        NextLevel,
        FLatentActionInfo(),                  
        true                    // bShouldBlockOnLoad (true면 로드 완료까지 대기)        
    );
}

void APlayCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(APlayCharacter, BookActor);
}