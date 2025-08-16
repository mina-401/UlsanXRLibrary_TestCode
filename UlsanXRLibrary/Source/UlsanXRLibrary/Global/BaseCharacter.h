// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Global/ULXREnum.h"

#include "BaseCharacter.generated.h"

//DECLARE_MULTICAST_DELEGATE_OneParam(FInputBindingDelegate, class UInputComponent*);

UCLASS()
class ULSANXRLIBRARY_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	//FInputBindingDelegate onInputBindingDelegate;

// ���� ����ȭ

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	UFUNCTION(BlueprintCallable, Reliable, Server)
	void ChangeAnimation(EPlayerAnimation _CurAnimnation, FName _SectionName = TEXT("None"));
	void ChangeAnimation_Implementation(EPlayerAnimation _CurAnimnation, FName _SectionName = TEXT("None"));

	UFUNCTION(BlueprintCallable, Reliable, NetMulticast)
	void ChangeAnimation_Multi(EPlayerAnimation _CurAnimnation, FName _SectionName = TEXT("None"));
	void ChangeAnimation_Multi_Implementation(EPlayerAnimation _CurAnimnation, FName _SectionName = TEXT("None"));

protected:
	//Input 
    void Move(const struct FInputActionValue& Value);
	void Look(const struct FInputActionValue& Value);


	

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	class USkeletalMeshComponent* SkeletalMeshComponent = nullptr;


	//Animation
	//	����ȭ
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	EPlayerAnimation CurAnimnation = EPlayerAnimation::Idle;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	FName CurSectionName = TEXT("None");

	// 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play", meta = (AllowPrivateAccess = "true"))
	float CurSpeed = 0.0f;

};
