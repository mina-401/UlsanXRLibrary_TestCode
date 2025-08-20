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
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerState.h"
#include "Global/ULXRConst.h"
#include "Mode/Play/PlayPlayerController.h"
#include "Mode/Title/UI/TitleUserWidget.h"
#include <TimeEventComponent.h>


APlayCharacter::APlayCharacter()
{
    TimeEventComponent = CreateDefaultSubobject<UTimeEventComponent>(TEXT("TimeEventComponent"));
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

    if (HasAuthority())
    {
        BookActor = CreateItem(TEXT("BP_TravelBook"));
        BookActor->SetActorHiddenInGame(true);
    }

    

}


void APlayCharacter::SetBookVisible(class AActor* _Actor, bool _b)
{

    if (_Actor != nullptr)
    {
        _Actor->SetActorHiddenInGame(!_b);

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
    else {
        if (BookActor != nullptr)

        {
            BookActor->SetActorHiddenInGame(true);
        }
       
    }


    if (nullptr != CurItem) {

        PartyPlayerCount = CurItem->MemberStates.Num() + int(CurItem->LeaderState !=nullptr) > 0 ? CurItem->MemberStates.Num() + int(CurItem->LeaderState != nullptr) : 0;

        
    }

    
}

void APlayCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{

}

bool APlayCharacter::GetIsLeaderPawn()
{
  

    if (nullptr != CurItem)
    {
        if (GetPlayerState() == CurItem->LeaderState)
        {
            return true;
        }
	}

    

    return false;

}
//

// 
// 
// 
// 
//------------------------------------------------------------------

void APlayCharacter::C2S_HitActor_Implementation(AActor* NewHitActor)
{
    HitActor = NewHitActor;
}

void APlayCharacter::C2S_CurItem_Implementation(AItem* NewHitActor)
{
    CurItem = NewHitActor;

    S2C_CurItem(NewHitActor);
}

void APlayCharacter::S2C_CurItem_Implementation(AItem* NewHitActor)
{
    CurItem = NewHitActor;
}

void APlayCharacter::C2S_CheckIn_Implementation(AActor* _Actor)
{
    S2C_CheckIn_Implementation(_Actor);

    S2C_CloseBook();

}

void APlayCharacter::S2C_CheckIn_Implementation(AActor* _Actor)
{
    if (CurItem == nullptr) return;

    



    

    if (true == CurItem->bIsLeader)
    {

        if (CurItem->MemberStates.Num() > 0)
        {
            if (UULXRConst::Title::MaxPlayer <= CurItem->MemberStates.Num()+1)
            {
                return;
            }
        }
        
        if (CurItem->LeaderState != GetPlayerState() && !(CurItem->MemberStates.Contains(GetPlayerState())))
        {
            CurItem->MemberStates.Add(GetPlayerState());

            int a = 0;
        }

        bIsInParty = true;

    }

    else {

       
        
        bIsInParty = true;
        CurItem->bIsLeader = true;
        CurItem->SetOwner(this);
        CurItem->LeaderState = GetPlayerState();

    }



    //C2S_CloseBook();
}

void APlayCharacter::C2S_CheckKick_Implementation(AActor* _Actor)
{
	S2C_CheckKick_Implementation(_Actor);
}


void APlayCharacter::C2S_ClearItem_Implementation()
{
    if (CurItem != nullptr)
    {
        CurItem->bIsLeader = false;
        CurItem->LeaderState = nullptr;
        CurItem->MemberStates.Empty();

    }

    S2C_ClearItem_Implementation();
}

void APlayCharacter::S2C_CheckKick_Implementation(AActor* _Actor)
{
   

    if(CurItem == nullptr) return;

    bIsInParty = false;

    if (CurItem->LeaderState == GetPlayerState())
    {

        if (CurItem->MemberStates.Num() > 0)
        {
            APlayerState* NewLeader = CurItem->MemberStates[0];
            CurItem->LeaderState = NewLeader;
            CurItem->MemberStates.RemoveAt(0);
        }
        else
        {
            // 아무도 안 남았으면 리더 해제
            CurItem->LeaderState = nullptr;
            CurItem->bIsLeader = false;

        }
    }

    else {

        if (CurItem->MemberStates.Contains(GetPlayerState()))
        {
            CurItem->MemberStates.Remove(GetPlayerState());

            int a = 0;
        }
    }
    //C2S_CloseBook();
    /*if (CurItem->MemberStates.Num() <= 0)
    {
        CurItem->S2C_SetItem(nullptr);
    }*/
}





void APlayCharacter::S2C_ClearItem_Implementation()
{
}

void APlayCharacter::InterectObject(class AActor* _Actor)
{
    if (_Actor == nullptr) return;
    SelectItem = Cast<AItem>(_Actor);

    FString Name = SelectItem->GetData()->Name;


    if (BookActor != nullptr)
    {
        ATravelBook* Book = Cast<ATravelBook>(BookActor);

        //Book->SetItem(CurItem);

        Book->SetName(SelectItem->GetData()->Name);

    }
    // 아직 선택하지않음
    if (CurItem == nullptr)
    {



        if (nullptr != BookActor)
        {
            OpenBook();
         
        }
     
    }
    else
    {
        // 같은 걸 다시 누름?  
        if (SelectItem == CurItem)
        {
            return;
        }
        else
        {
            //C2S_CheckKick(CurItem);

            //C2S_CurItem(SelectItem);
            //CurItem = SelectItem;
            //return;
            int a = 0;
        }
    }

 
}
void APlayCharacter::SoloCloseBook()
{
   
        BookActor->SetActorHiddenInGame(true);

        ATravelBook* Book = Cast<ATravelBook>(BookActor);
        Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
  
}
void APlayCharacter::OpenBook()
{
    BookActor->SetActorHiddenInGame(false);

    ATravelBook* Book = Cast<ATravelBook>(BookActor);
    Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

    if (GetController() && GetController()->IsLocalController()) {

        Book->GetWidgetComponent()->SetCollisionProfileName(UULXRConst::Collision::ProfileName_WidgetInter);
    }
}

void APlayCharacter::S2C_CloseBook_Implementation()
{ 
    if (CurItem==SelectItem && GetController() && GetController()->IsLocalPlayerController())
    {
        BookActor->SetActorHiddenInGame(true);

        ATravelBook* Book = Cast<ATravelBook>(BookActor);
        Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
    }

   
}

void APlayCharacter::BookTravel()
{
    if (CurItem->LeaderState == GetPlayerState())
    {
        FString DestUrl = "";
        {
            APlayPlayerController* PC = Cast<APlayPlayerController>(GetController());
            if (nullptr == PC) return;

            DestUrl = PC->GetPlayerIP();
            //DestUrl.Append(":30000");
        }

        APlayPlayerController* PC = Cast<APlayPlayerController>(GetController());
        if (PC)
        {
            PC->C2S_PartyTravel(DestUrl);
        }
        GetWidgetFromMain(ETitleUIType::Ready);
        CurWidget->StartBookTravel(DestUrl);
       /* TimeEventComponent->AddEndEvent(
            0.5f,
            [this, DestUrl]()
            {

                GetWidgetFromMain(ETitleUIType::Ready);
                CurWidget->StartBookTravel(DestUrl);
       
            },
            false
        );*/
   
        
        

       
    }
}
void APlayCharacter::S2C_BookTravel_Implementation()
{

    
}
void APlayCharacter::C2S_BookTravel_Implementation()
{

    S2C_BookTravel_Implementation();
}
void APlayCharacter::C2S_CloseBook_Implementation()
{
    S2C_CloseBook_Implementation();
}
void APlayCharacter::InterectObjectEnd()
{

    if (nullptr == BookActor) return;

    if (BookActor != nullptr)
    {
        ATravelBook* Book = Cast<ATravelBook>(BookActor);

        //Book->SetItem(CurItem);

        Book->SetName("");

    }

}
//
// 
// 
// 
// 
// 
//----------------------------------------




void APlayCharacter::CheckOutMember_Implementation(class AActor* _Actor)
{
    ATravelBook* Book = Cast<ATravelBook>(_Actor);

    if (Book == nullptr || Book->GetItem() == nullptr) return;

    if (Book->GetItem()->LeaderState == GetPlayerState())
    {

        if (Book->GetItem()->MemberStates.Num() > 0)
        {
            APlayerState* NewLeader = Book->GetItem()->MemberStates[0];
            Book->GetItem()->LeaderState = NewLeader;
            Book->GetItem()->MemberStates.RemoveAt(0);
        }
        else
        {
            // 아무도 안 남았으면 리더 해제
            Book->GetItem()->LeaderState = nullptr;
            Book->GetItem()->bIsLeader = false;

        }
    }

    else {

        if (Book->GetItem()->MemberStates.Contains(GetPlayerState()))
        {
            Book->GetItem()->MemberStates.Remove(GetPlayerState());

            int a = 0;
        }
    }

   /* if (Book->GetItem()->MemberStates.Num() <= 0)
    {
        Book->S2C_SetItem(nullptr);
    }*/
}
void APlayCharacter::SetBookItem_Implementation(AItem* NewItem)
{
    SetBookItem_Multi(NewItem);
}

void APlayCharacter::SetBookItem_Multi_Implementation(AItem* NewItem)
{
   
    ATravelBook* Book = Cast<ATravelBook>(BookActor);
    Book->GetWidgetComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
}




void APlayCharacter::CheckLeader_Implementation(AActor* _Actor)
{
    ATravelBook* Book = Cast<ATravelBook>(_Actor);

   

    if (Book == nullptr || Book->GetItem() == nullptr) return;
    if (true == Book->GetItem()->bIsLeader)
    {

        if (Book->GetItem()->LeaderState != GetPlayerState() && !(Book->GetItem()->MemberStates.Contains(GetPlayerState())))
        {
            Book->GetItem()->MemberStates.Add(GetPlayerState());

            int a = 0;
        }

    }

    else {
        Book->GetItem()->bIsLeader = true;
        Book->GetItem()->SetOwner(this);
        Book->GetItem()->LeaderState = GetPlayerState();

    }
    //CheckLeader_Multi(_Actor);
}



void APlayCharacter::CheckLeader_Multi_Implementation(AActor* _Actor)
{
    ATravelBook* Book = Cast<ATravelBook>(_Actor);
    if (Book == nullptr || Book->GetItem() == nullptr) return;
    if (true == Book->GetItem()->bIsLeader)
    {

        if (Book->GetItem()->LeaderState != GetPlayerState() && !(Book->GetItem()->MemberStates.Contains(GetPlayerState())))
        {
            Book->GetItem()->MemberStates.Add(GetPlayerState());

            int a = 0;
        }

    }

    else {
        Book->GetItem()->bIsLeader = true;
        Book->GetItem()->SetOwner(this);


        Book->GetItem()->LeaderState = GetPlayerState();

    }
}

void APlayCharacter::OpenStreamingLevel_Multi_Implementation()
{
    //ATravelBook* Book = Cast<ATravelBook>(BookActor);

	if (CurItem == nullptr) return;

    const TSoftObjectPtr<UWorld> NextLevel = CurItem->GetNextLevel();


    ULevelStreaming* StreamingLevel = UGameplayStatics::GetStreamingLevel(GetWorld(), *NextLevel.GetAssetName());

    if (StreamingLevel && StreamingLevel->IsLevelLoaded())
    {

        bool bIsLevelVisible = StreamingLevel->GetLoadedLevel()->bIsVisible;


        if (true == bIsLevelVisible)
        {

            if (CurItem == nullptr) return;
            
            FVector SpawnPoint = CurItem->GetSpawnPoint();

            if (CurItem->MemberStates.Num() > 0)
            {
                //MemberStates 리스트에 있는 플레이어들 이동
                for (APlayerState* PS : CurItem->MemberStates)
                {
                    if (!PS) continue;

                    if (AController* PC = PS->GetOwner<AController>())
                    {
                        if (APawn* Pawn = PC->GetPawn())
                        {
                            Pawn->SetActorLocation(SpawnPoint);


                            //Cast<APlayCharacter>(Pawn)->VisibleChangeUIFromAllWidget(ETitleUIType::Ready, ESlateVisibility::Collapsed);
                            
                            Cast<APlayCharacter>(Pawn)->SoloCloseBook();
                        }
                    }
                }
            }
            
            //LeaderState도 포함시키려면 Leader도 먼저 이동
            if (CurItem->LeaderState)
            {
                if (AController* PC = CurItem->LeaderState->GetOwner<AController>())
                {
                    if (APawn* Pawn = PC->GetPawn())
                    {
                        Pawn->SetActorLocation(SpawnPoint);

                        //Cast<APlayCharacter>(Pawn)->VisibleChangeUIFromAllWidget(ETitleUIType::Ready, ESlateVisibility::Collapsed);
                    
                        Cast<APlayCharacter>(Pawn)->SoloCloseBook();
                    }
                }
            }



            



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

    if (nullptr != CurItem)
    {
        FVector SpawnPoint = CurItem->GetSpawnPoint();

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
    //ATravelBook* Book = Cast<ATravelBook>(BookActor);
    const TSoftObjectPtr<UWorld> NextLevel =CurItem->GetNextLevel();


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
    DOREPLIFETIME(APlayCharacter, bIsServer);
    DOREPLIFETIME(APlayCharacter, HitActor);
    DOREPLIFETIME(APlayCharacter, bIsInParty);
    DOREPLIFETIME(APlayCharacter, CurWidget);
}