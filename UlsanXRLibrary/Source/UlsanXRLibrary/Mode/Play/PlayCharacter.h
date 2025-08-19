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

	//UFUNCTION(BlueprintCallable)
	//class ATravelBook* GetTravelBook()
	//{
	//	return Cast<ATravelBook>(BookActor);
	//}

	UFUNCTION(BlueprintCallable)
	void ClearBookActor(class AActor* _BookActor);

	UFUNCTION(BlueprintCallable)
	bool GetIsLeaderPawn();

	UFUNCTION(BlueprintCallable, Reliable, Server)
	void CheckLeader(class AActor* _Actor);
	void CheckLeader_Implementation(class AActor* _Actor);


	UFUNCTION(BlueprintCallable,Reliable,NetMulticast)
	void CheckLeader_Multi(class AActor* _Actor);
	void CheckLeader_Multi_Implementation(class AActor* _Actor);

	UFUNCTION(BlueprintCallable, Reliable,Server)
	void CheckOutMember(class AActor* _Actor);
	void CheckOutMember_Implementation(class AActor* _Actor);

	UFUNCTION(Server, Reliable)
	void SetBookItem(AItem* NewItem);
	void SetBookItem_Implementation(AItem* NewItem);

	UFUNCTION(Server, Reliable)
	void SetBookItem_Multi(AItem* NewItem);
	void SetBookItem_Multi_Implementation(AItem* NewItem);



	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void VisibleChangeUIFromAllWidget(ETitleUIType _Type, ESlateVisibility _Value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void GetWidgetFromMain(ETitleUIType _Type);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;
	// Network replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	


	//// IItemInterface
	//void InterectUpdate(class AItem* _Item, float _DeltaTime);
	//void InterectStart(class AItem* _Item);

	//UFUNCTION(BlueprintCallable)
	//void InterectEnd(class AItem* _Item);


private:
	


	//ServerTravel
	// 트래블용 서버 북을 소유하는 방장
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	bool bIsServer = false;

	// 책 정보 나타나는 위젯

	UPROPERTY(VisibleAnywhere,Replicated, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AActor* BookActor = nullptr;
	

private:
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AActor* HitActor = nullptr;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AItem* CurItem = nullptr;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class AItem* SelectItem = nullptr;


	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UTitleUserWidget* CurWidget = nullptr;
public:
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadWrite)
	bool bIsInParty = false;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadWrite)
	int PartyPlayerCount = 0;

	UFUNCTION(BlueprintCallable)
	void SetBookVisible(class AActor* _Actor, bool _b);


	//UFUNCTION(BlueprintCallable, Server, Reliable)
	//void S2C_SetIsInParty(bool _b);
	//void S2C_SetIsInParty_Implementation(bool _b);

	//UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	//void C2S_SetIsInParty(bool _b);
	//void C2S_SetIsInParty_Implementation(bool _b);


	UFUNCTION(Server, Reliable)
	void C2S_HitActor(AActor* NewHitActor);
	void C2S_HitActor_Implementation(AActor* NewHitActor);

	UFUNCTION(BlueprintCallable,Server, Reliable)
	void C2S_CurItem(AItem* NewHitActor);
	void C2S_CurItem_Implementation(AItem* NewHitActor);

	UFUNCTION(BlueprintCallable,NetMulticast, Reliable)
	void S2C_CurItem(AItem* NewHitActor);
	void S2C_CurItem_Implementation(AItem* NewHitActor);




	UFUNCTION(BlueprintCallable, Reliable, Server)
	void C2S_CheckIn(AActor* _Actor);
	void C2S_CheckIn_Implementation(AActor* _Actor);


	UFUNCTION(BlueprintCallable, Reliable, NetMulticast)
	void S2C_CheckIn(AActor* _Actor);
	void S2C_CheckIn_Implementation(AActor* _Actor);


	UFUNCTION(BlueprintCallable, Reliable, Server)
	void C2S_CheckKick(AActor* _Actor);
	void C2S_CheckKick_Implementation(AActor* _Actor);

	
	UFUNCTION(BlueprintCallable, Reliable, NetMulticast)
	void S2C_CheckKick(AActor* _Actor);
	void S2C_CheckKick_Implementation(AActor* _Actor);
	//void CheckKickMember_Implementation(class AActor* _Actor);

	UFUNCTION(BlueprintCallable)
	void InterectObject(AActor* _Actor);

	UFUNCTION(BlueprintCallable)
	void SoloCloseBook();

	UFUNCTION(BlueprintCallable, Reliable, Server)
	void C2S_CloseBook();
	void C2S_CloseBook_Implementation();

	UFUNCTION(BlueprintCallable, Reliable, NetMulticast)
	void S2C_CloseBook();
	void S2C_CloseBook_Implementation();

	UFUNCTION(BlueprintCallable)
	void InterectObjectEnd();

	UFUNCTION(BlueprintCallable)
	void OpenBook();



	//class 
};
