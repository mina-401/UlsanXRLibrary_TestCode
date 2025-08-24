// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/BaseAnimInstance.h"

void UBaseAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	SkeletalMeshComponent = GetOwningComponent();
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UBaseAnimInstance::ChangeAnimation(EPlayerAnimation _CurAnimationType, FName _SectionName)
{
	if (false == AnimMontages.Contains(_CurAnimationType))
	{
		return;
	}

	UAnimMontage* Montage = AnimMontages[_CurAnimationType];

	if (CurMontage == Montage)
	{
		if (SectionName != _SectionName)
		{
			Montage_JumpToSection(_SectionName);
		}

		return;
	}

	ChangeAnimationEvent(Montage, SectionName);

	CurMontage = Montage;
	CurAnimationType = _CurAnimationType;
	SectionName = _SectionName;
}