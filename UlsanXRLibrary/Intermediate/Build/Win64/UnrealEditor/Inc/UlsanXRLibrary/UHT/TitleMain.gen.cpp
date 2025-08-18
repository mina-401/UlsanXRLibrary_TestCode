// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/UI/TitleMain.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitleMain() {}

// ********** Begin Cross Module References ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTitleMain ***************************************************************
void UTitleMain::StaticRegisterNativesUTitleMain()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTitleMain;
UClass* UTitleMain::GetPrivateStaticClass()
{
	using TClass = UTitleMain;
	if (!Z_Registration_Info_UClass_UTitleMain.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitleMain"),
			Z_Registration_Info_UClass_UTitleMain.InnerSingleton,
			StaticRegisterNativesUTitleMain,
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
	return Z_Registration_Info_UClass_UTitleMain.InnerSingleton;
}
UClass* Z_Construct_UClass_UTitleMain_NoRegister()
{
	return UTitleMain::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTitleMain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mode/Title/UI/TitleMain.h" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleMain.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleMain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTitleMain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTitleUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleMain_Statics::ClassParams = {
	&UTitleMain::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleMain_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleMain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleMain()
{
	if (!Z_Registration_Info_UClass_UTitleMain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleMain.OuterSingleton, Z_Construct_UClass_UTitleMain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleMain.OuterSingleton;
}
UTitleMain::UTitleMain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleMain);
UTitleMain::~UTitleMain() {}
// ********** End Class UTitleMain *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleMain, UTitleMain::StaticClass, TEXT("UTitleMain"), &Z_Registration_Info_UClass_UTitleMain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleMain), 3367071303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_2434579010(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
