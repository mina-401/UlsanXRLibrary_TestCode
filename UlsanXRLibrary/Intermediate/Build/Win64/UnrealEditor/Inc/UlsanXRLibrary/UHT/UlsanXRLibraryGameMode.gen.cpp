// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/UlsanXRLibraryGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUlsanXRLibraryGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_AUlsanXRLibraryGameMode();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_AUlsanXRLibraryGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUlsanXRLibraryGameMode **************************************************
void AUlsanXRLibraryGameMode::StaticRegisterNativesAUlsanXRLibraryGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUlsanXRLibraryGameMode;
UClass* AUlsanXRLibraryGameMode::GetPrivateStaticClass()
{
	using TClass = AUlsanXRLibraryGameMode;
	if (!Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UlsanXRLibraryGameMode"),
			Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.InnerSingleton,
			StaticRegisterNativesAUlsanXRLibraryGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUlsanXRLibraryGameMode_NoRegister()
{
	return AUlsanXRLibraryGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UlsanXRLibraryGameMode.h" },
		{ "ModuleRelativePath", "UlsanXRLibraryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUlsanXRLibraryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::ClassParams = {
	&AUlsanXRLibraryGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUlsanXRLibraryGameMode()
{
	if (!Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.OuterSingleton, Z_Construct_UClass_AUlsanXRLibraryGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUlsanXRLibraryGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUlsanXRLibraryGameMode);
AUlsanXRLibraryGameMode::~AUlsanXRLibraryGameMode() {}
// ********** End Class AUlsanXRLibraryGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryGameMode_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUlsanXRLibraryGameMode, AUlsanXRLibraryGameMode::StaticClass, TEXT("AUlsanXRLibraryGameMode"), &Z_Registration_Info_UClass_AUlsanXRLibraryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUlsanXRLibraryGameMode), 391893764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryGameMode_h__Script_UlsanXRLibrary_2060107791(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryGameMode_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryGameMode_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
