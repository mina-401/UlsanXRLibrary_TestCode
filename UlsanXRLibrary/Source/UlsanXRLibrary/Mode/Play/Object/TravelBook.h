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

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void SetPlayBookNameEvent();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetVisible(bool _True);

	class UWidgetComponent* GetWidgetComponent()
	{
		return WidgetComponent;
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play", meta = (AllowPrivateAccess = "true"))
	FString Name = "";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Play", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* WidgetComponent;

};
