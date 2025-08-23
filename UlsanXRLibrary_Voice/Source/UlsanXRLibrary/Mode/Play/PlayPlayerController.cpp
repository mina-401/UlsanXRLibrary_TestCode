// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/PlayPlayerController.h"
#include <Kismet/GameplayStatics.h>
#include "Components/WidgetInteractionComponent.h"
#include "PlayCharacter.h"
#include "Mode/Play/Object/Item.h"
#include "GameFramework/PlayerState.h"
#include "Global/BaseGameInstance.h"
#include <SocketSubsystem.h>

//#include "VoiceChat.h"
//#include "VoiceChatResult.h"
#include "Modules/ModuleManager.h"

#include "Containers/UnrealString.h"


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
void APlayPlayerController::JoinVoiceChat()
{
 
   // IVoiceChat* VC = FVoiceModule::Get().GetVoiceChatInterface().Get();
	//IVoiceChat* VoiceChat = IVoiceChat::Get();

 //   if(!VoiceChat)
 //   {
 //       UE_LOG(LogTemp, Warning, TEXT("VoiceChat module is not available!"));
 //       return;
	//}

 //   UE_LOG(LogTemp, Log, TEXT("[VC] Impl=%s"), *VoiceChat->GetSetting(TEXT("Implementation")));
 //   UE_LOG(LogTemp, Log, TEXT("[VC] ProductId=%s"), *VoiceChat->GetSetting(TEXT("ProductId")));



 //   //UE_LOG(LogTemp, Log, TEXT("VoiceChat Impl: %s"), *VoiceChat->GetSetting(TEXT("Implementation")));
 //   //UE_LOG(LogTemp, Log, TEXT("EOS ProductId: %s"), *VoiceChat->GetSetting(TEXT("ProductId")));
 //   //UE_LOG(LogTemp, Log, TEXT("EOS SandboxId: %s"), *VoiceChat->GetSetting(TEXT("SandboxId")));
 //   //UE_LOG(LogTemp, Log, TEXT("EOS DeploymentId: %s"), *VoiceChat->GetSetting(TEXT("DeploymentId")));
 //   //UE_LOG(LogTemp, Log, TEXT("EOS ClientId: %s"), *VoiceChat->GetSetting(TEXT("ClientId")));

 //   // (2) Config(GConfig)에서 바로 가져오기
 //   FString Prod, Sand, Dep, Cli,CliSrt;
 //   GConfig->GetString(TEXT("EOSShared"), TEXT("ProductId"), Prod, GEngineIni);
 //   GConfig->GetString(TEXT("EOSShared"), TEXT("SandboxId"), Sand, GEngineIni);
 //   GConfig->GetString(TEXT("EOSShared"), TEXT("DeploymentId"), Dep, GEngineIni);
 //   GConfig->GetString(TEXT("EOSShared"), TEXT("ClientId"), Cli, GEngineIni);
 //   GConfig->GetString(TEXT("EOSShared"), TEXT("ClientSecret"), CliSrt, GEngineIni);
 //   UE_LOG(LogTemp, Log, TEXT("[CFG] EngineIni=%s"), *FPaths::ConvertRelativePathToFull(GEngineIni));
 //   UE_LOG(LogTemp, Log, TEXT("[CFG] ProductId=%s SandboxId=%s DeploymentId=%s ClientId=%s"),
 //       *Prod, *Sand, *Dep, *Cli);

 //   VoiceChat->SetSetting(TEXT("Implementation"), TEXT("EOS"));
 //   VoiceChat->SetSetting(TEXT("ProductId"), *Prod);
 //   VoiceChat->SetSetting(TEXT("SandboxId"), *Sand);
 //   VoiceChat->SetSetting(TEXT("DeploymentId"), *Dep);
 //   VoiceChat->SetSetting(TEXT("ClientId"), *Cli);
 //   VoiceChat->SetSetting(TEXT("ClientSecret"), TEXT("AcjAWwqPfenwzAAd26Yl70Vl9KMzOuW9Lslr/m05q7c"));
 //   VoiceChat->SetSetting(TEXT("bUseEAS"), TEXT("true"));
 //   VoiceChat->SetSetting(TEXT("bUseEOSConnect"), TEXT("true"));
 //   VoiceChat->SetSetting(TEXT("bUseRTCAudio"), TEXT("true"));

 //   if (!VoiceChat->IsInitialized()) VoiceChat->Initialize();

 //   if (!VoiceChat->IsConnected())
 //   {
 //       VoiceChat->Connect(
 //           FOnVoiceChatConnectCompleteDelegate::CreateUObject(
 //               this, &APlayPlayerController::OnVoiceConnectComplete));
 //     
 //   }
}
void APlayPlayerController::OnVoiceConnectComplete(const struct FVoiceChatResult& Result)
{
   /* if (Result.IsSuccess())
    {
        UE_LOG(LogTemp, Log, TEXT("VoiceChat connected!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("VoiceChat connect failed: %s (%s)"),
            *Result.ErrorDesc, *Result.ErrorCode);
    }*/
}
// Called when the game starts or when spawned
void APlayPlayerController::BeginPlay()
{
    Super::BeginPlay();
    JoinVoiceChat();
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

            APlayCharacter* MyPawn = Cast<APlayCharacter>(GetPawn());

            MyPawn->C2S_HitActor(HitResult.GetActor());
            MyPawn->InterectObject(HitResult.GetActor());
        }
    }

    // 5. 디버그용 레이 그리기
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.1f, 0, 0.1f);
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

