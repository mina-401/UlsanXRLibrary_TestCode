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

    // 상호작용 설정
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
    return LocalAddr->ToString(false); // false = 포트 제외

}
    

void APlayPlayerController::C2S_PartyTravel_Implementation(const FString& _URL)
{
    for (APlayerState* MemberState : Cast<APlayCharacter>(GetPawn())->GetItem()->MemberStates)
    {
        if (MemberState)
        {
            // PlayerState -> Owner 가 Controller
            APlayPlayerController* PC = Cast<APlayPlayerController>(MemberState->GetOwner());
            if (PC)
            {
                PC->S2C_PartyTravel(_URL); // 서버 → 해당 멤버 클라만 이동
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
    // 1. 마우스 위치 가져오기
    float MouseX, MouseY;
    if (!GetMousePosition(MouseX, MouseY))
        return;

    FVector WorldLocation, WorldDirection;
    if (!DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
        return;

    // 2. 레이캐스트 시작점과 끝점 계산
    FVector Start = WorldLocation;
    FVector End = Start + WorldDirection * 20000.0f; // 10,000 유닛 앞으로 쏨

    // 3. 레이캐스트 파라미터 설정
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetPawn()); // 자기 자신 제외

    // 4. 레이캐스트 실행
    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);

    if (bHit && HitResult.GetActor())
    {
        UPrimitiveComponent* HitComp = HitResult.GetComponent();
        if (HitComp && HitComp->GetCollisionObjectType() == ECC_GameTraceChannel2) // 예: Item용 커스텀 채널
        {
          /*  GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green,
                FString::Printf(TEXT("Hit Item Actor: %s"), *HitResult.GetActor()->GetName()));*/

            APlayCharacter* MyPawn= Cast<APlayCharacter>(GetPawn());

            MyPawn->C2S_HitActor(HitResult.GetActor());
            MyPawn->InterectObject(HitResult.GetActor());
        }
    }

    // 5. 디버그용 레이 그리기
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.1f, 0, 0.1f);
}