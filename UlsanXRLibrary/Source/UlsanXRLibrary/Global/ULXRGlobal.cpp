// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/ULXRGlobal.h"
#include "AssetRegistry/AssetRegistryModule.h"

void UULXRGlobal::AssetPackagePath(UClass* _Class, const FString& _AssetName, FString& _Path)
{
	TArray<FAssetData> AllAsset = AssetsPath(_Class);

	FName CheckName = FName(*_AssetName);

	for (const FAssetData& AssetData : AllAsset)
	{
		if (AssetData.AssetName == CheckName)
		{
			// ��Ű¡ �������� ����Ҽ� 
			_Path = AssetData.PackageName.ToString();
			return;
		}
	}
}

TArray<FAssetData> UULXRGlobal::AssetsPath(UClass* _Class)
{
	// �𸮾� �����ϴ� ������ �������ִ� ��Ʈ��Ʈ
	// FModuleManager
	TArray<FAssetData> MapList;
	// "Engine"
	if (false == FModuleManager::Get().IsModuleLoaded("AssetRegistry"))
	{
		return MapList;
	}

	IAssetRegistry& AssetRegistry = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();

	// ������ �ε����̴�?
	if (AssetRegistry.IsLoadingAssets())
	{
		return MapList;
	}

	// UWorld

	if (AssetRegistry.GetAssetsByClass(_Class->GetClassPathName(), MapList))
	{
		return MapList;
	}

	return MapList;
}