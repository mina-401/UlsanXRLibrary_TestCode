// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/BaseCharacter.h"
#include "Global/BaseAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include <InputActionValue.h>
#include "InputTriggers.h" 
#include "EnhancedInputComponent.h"
#include "Components/InputComponent.h" 
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "Global/ULXRGlobal.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	SkeletalMeshComponent = GetMesh();
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;


	GetMesh()->Mobility = EComponentMobility::Movable;

	GetMesh()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	GetCapsuleComponent()->SetCollisionProfileName(UULXRConst::Collision::ProfileName_Player);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	
	GetCharacterMovement()->RotationRate = FRotator(0.f,400.0f,0.f);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 400.0f; 	
	SpringArmComponent->bUsePawnControlRotation = true; 

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false; 

	//ChangeAnimation(EPlayerAnimation::Idle);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {


		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &ABaseCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Look);


	

	}

	//onInputBindingDelegate.Broadcast(PlayerInputComponent);
}
void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseCharacter, CurAnimnation);
	DOREPLIFETIME(ABaseCharacter, CurSectionName);
	//DOREPLIFETIME(ABaseCharacter, CurSpeed);
}

void ABaseCharacter::ChangeAnimation_Implementation(EPlayerAnimation _CurAnimnation, FName _SectionName)
{

	CurAnimnation = _CurAnimnation;
	CurSectionName = _SectionName;

	ChangeAnimation_Multi(_CurAnimnation, _SectionName);
}

void ABaseCharacter::ChangeAnimation_Multi_Implementation(EPlayerAnimation _CurAnimnation, FName _SectionName)
{
	UBaseAnimInstance* Inst = Cast<UBaseAnimInstance>(GetMesh()->GetAnimInstance());
	if (nullptr != Inst)
	{
		Inst->ChangeAnimation(_CurAnimnation, _SectionName);
	}
}

void ABaseCharacter::Move(const FInputActionValue& Value)
{   // input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();



	if (GetController() != nullptr)
	{
		if (0.0f == MovementVector.X && 0.0f == MovementVector.Y)
		{
			ChangeAnimation(EPlayerAnimation::Idle);
		}
		else {
			// find out which way is forward
			const FRotator Rotation = GetController()->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			// get forward vector
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

			// get right vector 
			const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

			// add movement 
			AddMovementInput(ForwardDirection, MovementVector.X);
			AddMovementInput(RightDirection, MovementVector.Y);

			ChangeAnimation(EPlayerAnimation::Walk);
		}
		
	}
}

void ABaseCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

