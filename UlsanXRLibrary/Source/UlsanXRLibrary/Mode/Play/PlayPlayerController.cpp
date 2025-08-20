// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayPlayerController.h"
#include <Kismet/GameplayStatics.h>
#include "Components/WidgetInteractionComponent.h"
#include "PlayCharacter.h"
#include "Mode/Play/Object/Item.h"
#include "GameFramework/PlayerState.h"
#include "Global/BaseGameInstance.h"
#include <SocketSubsystem.h>

APlayPlayerController::APlayPlayerController()
{
	WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
	WidgetInteraction->SetupAttachment(RootComponent);

    // ��ȣ�ۿ� ����
    WidgetInteraction->InteractionDistance = 500.f;
    WidgetInteraction->bEnableHitTesting = true;

    WidgetInteraction->TraceChannel = ECollisionChannel::ECC_Visibility;
    WidgetInteraction->InteractionSource = EWidgetInteractionSource::Mouse;
}
void APlayPlayerController::C2S_PartyMemberTravel_Implementation(const FString& _URL)
{

    S2C_PartyTravel_Implementation(_URL);
}
FString APlayPlayerController::GetPlayerIP() const
{
	bool bIsLocalHost = false;
    TSharedRef<FInternetAddr> LocalAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bIsLocalHost);
    return LocalAddr->ToString(false); // false = ��Ʈ ����

}
    

void APlayPlayerController::C2S_PartyTravel_Implementation(const FString& _URL)
{
    for (APlayerState* MemberState : Cast<APlayCharacter>(GetPawn())->GetItem()->MemberStates)
    {
        if (MemberState)
        {
            // PlayerState -> Owner �� Controller
            APlayPlayerController* PC = Cast<APlayPlayerController>(MemberState->GetOwner());
            if (PC)
            {
                PC->S2C_PartyTravel(_URL); // ���� �� �ش� ��� Ŭ�� �̵�
            }
        }
    }

}

void APlayPlayerController::S2C_PartyTravel_Implementation(const FString& _URL)
{
 #if WITH_EDITOR
    ENetMode NetMode = GetWorld()->GetNetMode();

    int a = 0;

    //UGameplayStatics::OpenLevel(GetWorld(), *_URL, true);
    //Standalone_StartBookTravel(const FString & _URL);
    //UGameplayStatics::OpenLevel(this, FName("TestLevel"));
    //return;
        
#endif
    ClientTravel(_URL, TRAVEL_Absolute);
}

//void APlayPlayerController::PartyTravel(const FString& Host, int32 Port, const TArray<APlayerState*>& PartyMembers)
//{
//}

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
        ObjectRayCast();
    }
    else
    {
        WidgetInteraction->ReleasePointerKey(EKeys::LeftMouseButton);
    }

    


}
void APlayPlayerController::ObjectRayCast()
{
    // 1. ���콺 ��ġ ��������
    float MouseX, MouseY;
    if (!GetMousePosition(MouseX, MouseY))
        return;

    FVector WorldLocation, WorldDirection;
    if (!DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
        return;

    // 2. ����ĳ��Ʈ �������� ���� ���
    FVector Start = WorldLocation;
    FVector End = Start + WorldDirection * 20000.0f; // 10,000 ���� ������ ��

    // 3. ����ĳ��Ʈ �Ķ���� ����
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetPawn()); // �ڱ� �ڽ� ����

    // 4. ����ĳ��Ʈ ����
    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);

    if (bHit && HitResult.GetActor())
    {
        UPrimitiveComponent* HitComp = HitResult.GetComponent();
        if (HitComp && HitComp->GetCollisionObjectType() == ECC_GameTraceChannel2) // ��: Item�� Ŀ���� ä��
        {
          /*  GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green,
                FString::Printf(TEXT("Hit Item Actor: %s"), *HitResult.GetActor()->GetName()));*/

            APlayCharacter* MyPawn= Cast<APlayCharacter>(GetPawn());

            MyPawn->C2S_HitActor(HitResult.GetActor());
            MyPawn->InterectObject(HitResult.GetActor());
        }
    }

    // 5. ����׿� ���� �׸���
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.1f, 0, 0.1f);
}