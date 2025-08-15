// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUlsanXRLibrary_init() {}
	ULSANXRLIBRARY_API UFunction* Z_Construct_UDelegateFunction_UlsanXRLibrary_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UlsanXRLibrary;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary()
	{
		if (!Z_Registration_Info_UPackage__Script_UlsanXRLibrary.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UlsanXRLibrary_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UlsanXRLibrary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE8E65A0C,
				0xB00CB554,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UlsanXRLibrary.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UlsanXRLibrary.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UlsanXRLibrary(Z_Construct_UPackage__Script_UlsanXRLibrary, TEXT("/Script/UlsanXRLibrary"), Z_Registration_Info_UPackage__Script_UlsanXRLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE8E65A0C, 0xB00CB554));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
