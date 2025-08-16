// Fill out your copyright notice in the Description page of Project Settings.


#include "Mode/Play/Object/Item.h"
#include "Global/Data/GobalDataTable.h"
#include "Global/ULXRConst.h"
#include "Net/UnrealNetwork.h"
#include "Global/Object/Interface/ItemInterface.h"


// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
	//bReplicates = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetCollisionProfileName(UULXRConst::Collision::ProfileName_Item);
	StaticMeshComponent->Mobility = EComponentMobility::Static;
	StaticMeshComponent->SetGenerateOverlapEvents(true);

	RootComponent = StaticMeshComponent;
	
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	if (DataKey == TEXT("") || true == DataKey.IsEmpty())
	{
		//UE_LOG(GMLOG, Error, TEXT("%S(%u)> if (ItemDataKey == TEXT("") || true == ItemDataKey.IsEmpty())"), __FUNCTION__, __LINE__);
		return;
	}
	const FBookItemDataRow* FindData = UGobalDataTable::GetBookItemData(GetWorld(), DataKey);
	Data = FindData;
	StaticMeshComponent->SetStaticMesh(Data->ItemData.Mesh );
	StaticMeshComponent->SetMaterial(0, Data->ItemData.MaterialInst);

	StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
	StaticMeshComponent->OnComponentEndOverlap.AddDynamic(this, &AItem::OnOverlapEnd);


};
void AItem::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	if (nullptr != OtherActor && OtherActor->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
	{
		IItemInterface* ItemInterface = Cast<IItemInterface>(OtherActor);
		if (ItemInterface)
		{
			ItemInterface->InterectStart(this); // 아이템 정보를 캐릭터에 전달
		}
	}
}

void AItem::OnOverlapEnd(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex
)
{
	if (nullptr != OtherActor && OtherActor->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
	{
		IItemInterface* ItemInterface = Cast<IItemInterface>(OtherActor);
		if (ItemInterface)
		{
			ItemInterface->InterectEnd(this); // 아이템 정보를 캐릭터에 전달
		}
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AItem, DataKey);
}