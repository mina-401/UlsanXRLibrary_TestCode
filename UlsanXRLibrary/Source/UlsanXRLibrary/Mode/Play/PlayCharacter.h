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

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	//void OpenStreamingLevelEvent(const TSoftObjectPtr<UWorld> _NextLevel);

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	//void OpenNextLevel();

	UFUNCTION(BlueprintCallable,Server, Reliable)
	void OpenStreamingLevel();
	void OpenStreamingLevel_Implementation();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void OpenStreamingLevel_Multi();
	void OpenStreamingLevel_Multi_Implementation();

	//UFUNCTION(BlueprintCallable, Reliable, NetMulticast)
	//void Teleport(FVector _Point);
	//void Teleport_Implementation(FVector _Point);

	UFUNCTION(BlueprintCallable)
	void CloseStreamingLevel();


	//이동시키는 북

	UFUNCTION(BlueprintCallable)
	class ATravelBook* GetTravelBook()
	{
		return Cast<ATravelBook>(BookActor);
	}

	UFUNCTION(BlueprintCallable)
	bool GetIsLeaderPawn();

	UFUNCTION(BlueprintCallable)
	void CheckLeader(class AActor* _Actor);

	UFUNCTION(BlueprintCallable, Reliable,Server)
	void CheckOutMember(class AActor* _Actor);
	void CheckOutMember_Implementation(class AActor* _Actor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void VisibleChangeUIFromAllWidget(ETitleUIType _Type, ESlateVisibility _Value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	// Network replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	


	// IItemInterface
	void InterectUpdate(class AItem* _Item, float _DeltaTime);
	void InterectStart(class AItem* _Item);

	UFUNCTION(BlueprintCallable)
	void InterectEnd(class AItem* _Item);


private:
	


	//ServerTravel
	// 트래블용 서버 북을 소유하는 방장
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	bool bIsServer = false;

	// 책 정보 나타나는 위젯

	UPROPERTY(VisibleAnywhere,Replicated, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class AActor* BookActor = nullptr;
	
};
