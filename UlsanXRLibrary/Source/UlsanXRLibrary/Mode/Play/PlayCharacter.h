// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/BaseCharacter.h"
#include <InputActionValue.h>
#include "Global/Object/Interface/ItemInterface.h"
#include "PlayCharacter.generated.h"


/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API APlayCharacter : public ABaseCharacter, public IItemInterface
{
	GENERATED_BODY()
	
public:
	APlayCharacter();

	//플레이어 아이템 생성하기
	AActor* CreateItem(const FString& _ItemName);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActorLookAtCamera(class AActor* _Actor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	

	// IItemInterface
	void InterectUpdate(class AItem* _Item, float _DeltaTime);
	void InterectStart(class AItem* _Item);
	void InterectEnd(class AItem* _Item);


private:
	

	//ServerTravel
	// 트래블용 서버 북을 소유하는 방장
	bool bIsServer = false;
	bool bIsLocal = false;

	// 책 정보 나타나는 위젯

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class AActor* BookActor = nullptr;
	
};
