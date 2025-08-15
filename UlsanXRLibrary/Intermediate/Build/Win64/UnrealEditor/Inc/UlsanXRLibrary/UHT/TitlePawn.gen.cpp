// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/TitlePawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitlePawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePawn();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATitlePawn ***************************************************************
void ATitlePawn::StaticRegisterNativesATitlePawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATitlePawn;
UClass* ATitlePawn::GetPrivateStaticClass()
{
	using TClass = ATitlePawn;
	if (!Z_Registration_Info_UClass_ATitlePawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitlePawn"),
			Z_Registration_Info_UClass_ATitlePawn.InnerSingleton,
			StaticRegisterNativesATitlePawn,
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
	return Z_Registration_Info_UClass_ATitlePawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ATitlePawn_NoRegister()
{
	return ATitlePawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATitlePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mode/Title/TitlePawn.h" },
		{ "ModuleRelativePath", "Mode/Title/TitlePawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitlePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATitlePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitlePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitlePawn_Statics::ClassParams = {
	&ATitlePawn::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitlePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitlePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATitlePawn()
{
	if (!Z_Registration_Info_UClass_ATitlePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitlePawn.OuterSingleton, Z_Construct_UClass_ATitlePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATitlePawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATitlePawn);
ATitlePawn::~ATitlePawn() {}
// ********** End Class ATitlePawn *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATitlePawn, ATitlePawn::StaticClass, TEXT("ATitlePawn"), &Z_Registration_Info_UClass_ATitlePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitlePawn), 289587405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h__Script_UlsanXRLibrary_1254211988(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
