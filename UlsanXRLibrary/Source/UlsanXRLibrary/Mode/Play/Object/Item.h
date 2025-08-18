// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Global/Data/LevelData.h"
#include "Global/Object/Interface/ItemInterface.h"
#include "Item.generated.h"

UCLASS()
class ULSANXRLIBRARY_API AItem : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AItem();

	//UFUNCTION(BlueprintCallable)
	const FBookItemDataRow* GetData()
	{
		return Data;
	};

	void SetDataKey(const FString& _ItemDataKey)
	{
		DataKey = _ItemDataKey;
	};

	UFUNCTION(BlueprintCallable)
	TSoftObjectPtr<UWorld> GetNextLevel();

	FVector GetSpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// Network replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;


	//
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex);

private:
	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "Item", meta = (AllowPrivateAccess = "true"))
	FString DataKey = "";

	//UPROPERTY(Category = "Item", EditAnywhere, meta = (AllowPrivateAccess = "true"))
	const FBookItemDataRow* Data = nullptr;

	UPROPERTY(Category = "Item", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMeshComponent;

	class AActor* OtherPlayer = nullptr;

};
