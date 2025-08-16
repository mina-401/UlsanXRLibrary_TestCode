// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/Object/TravelBook.h"

// Sets default values
ATravelBook::ATravelBook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATravelBook::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATravelBook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

