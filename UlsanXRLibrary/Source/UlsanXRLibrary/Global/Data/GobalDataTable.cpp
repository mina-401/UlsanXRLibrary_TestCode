// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/Data/GobalDataTable.h"
#include "Global/BaseGameInstance.h"

const FLevelDataRow* UGobalDataTable::GetLevelData(UWorld* _World, const FString& _Name)
{
	UBaseGameInstance* Inst = _World->GetGameInstance<UBaseGameInstance>();

	if (nullptr == Inst->LevelDataTable)
	{
		//UE_LOG(FALL_DEV_LOG, Error, TEXT("%S(%u)> if (nullptr == Inst->PlayLevelDataTable)"), __FUNCTION__, __LINE__);
	}

	FLevelDataRow* Data = Inst->LevelDataTable->FindRow<FLevelDataRow>(*_Name, nullptr);

	if (nullptr == Data)
	{
		return nullptr;
	}

	return Data;
}

void UGobalDataTable::GetLevelDataName(UWorld* _World, FString& _Name)
{
	const FLevelDataRow* Data = GetLevelData(_World, _Name);

	if (nullptr != Data)
	{
		_Name = Data->Level.GetAssetName();
	}
}

const FBookItemDataRow* UGobalDataTable::GetBookItemData(UWorld* _World, const FString& _Name)
{
	UBaseGameInstance* Inst = _World->GetGameInstance<UBaseGameInstance>();

	if (nullptr == Inst->BookItemDataTable)
	{
		//UE_LOG(GMLOG, Error, TEXT("%S(%u)> if (nullptr == Inst->ItemDataTable)"), __FUNCTION__, __LINE__);
	}

	FBookItemDataRow* Data = Inst->BookItemDataTable->FindRow<FBookItemDataRow>(*_Name, nullptr);

	if (nullptr == Data)
	{
		return nullptr;
	}

	return Data;

	//return nullptr;
}
