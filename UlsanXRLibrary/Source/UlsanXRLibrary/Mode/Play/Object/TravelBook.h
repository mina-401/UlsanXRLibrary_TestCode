// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "TravelBook.generated.h"

UCLASS()
class ULSANXRLIBRARY_API ATravelBook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATravelBook();

	void SetName(FString _Name) { Name = _Name; };

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetVisible(bool _True);

	class UWidgetComponent* GetWidgetComponent()
	{
		return WidgetComponent;
	};

	void SetItem(class AItem* _Item)
	{
		Item = _Item;
	}

	class AItem* GetItem()
	{
		return Item;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play", meta = (AllowPrivateAccess = "true"))
	FString Name = "";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* WidgetComponent;

	UPROPERTY(VisibleAnywhere,Replicated, BlueprintReadWrite, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class AItem* Item;

};
