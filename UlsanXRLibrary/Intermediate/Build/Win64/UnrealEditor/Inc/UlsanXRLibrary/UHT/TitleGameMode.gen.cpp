// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/TitleGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitleGameMode() {}

// ********** Begin Cross Module References ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABaseGameMode();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleGameMode();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATitleGameMode ***********************************************************
void ATitleGameMode::StaticRegisterNativesATitleGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATitleGameMode;
UClass* ATitleGameMode::GetPrivateStaticClass()
{
	using TClass = ATitleGameMode;
	if (!Z_Registration_Info_UClass_ATitleGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitleGameMode"),
			Z_Registration_Info_UClass_ATitleGameMode.InnerSingleton,
			StaticRegisterNativesATitleGameMode,
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
	return Z_Registration_Info_UClass_ATitleGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATitleGameMode_NoRegister()
{
	return ATitleGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATitleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Mode/Title/TitleGameMode.h" },
		{ "ModuleRelativePath", "Mode/Title/TitleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATitleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleGameMode_Statics::ClassParams = {
	&ATitleGameMode::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATitleGameMode()
{
	if (!Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton, Z_Construct_UClass_ATitleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton;
}
ATitleGameMode::ATitleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleGameMode);
ATitleGameMode::~ATitleGameMode() {}
// ********** End Class ATitleGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATitleGameMode, ATitleGameMode::StaticClass, TEXT("ATitleGameMode"), &Z_Registration_Info_UClass_ATitleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleGameMode), 3707399927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h__Script_UlsanXRLibrary_2462895658(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
