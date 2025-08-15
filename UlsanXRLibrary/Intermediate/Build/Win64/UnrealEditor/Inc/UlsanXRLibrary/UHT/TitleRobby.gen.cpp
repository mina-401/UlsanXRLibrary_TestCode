// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/UI/TitleRobby.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitleRobby() {}

// ********** Begin Cross Module References ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleRobby();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleRobby_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTitleRobby **************************************************************
void UTitleRobby::StaticRegisterNativesUTitleRobby()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTitleRobby;
UClass* UTitleRobby::GetPrivateStaticClass()
{
	using TClass = UTitleRobby;
	if (!Z_Registration_Info_UClass_UTitleRobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitleRobby"),
			Z_Registration_Info_UClass_UTitleRobby.InnerSingleton,
			StaticRegisterNativesUTitleRobby,
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
	return Z_Registration_Info_UClass_UTitleRobby.InnerSingleton;
}
UClass* Z_Construct_UClass_UTitleRobby_NoRegister()
{
	return UTitleRobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTitleRobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mode/Title/UI/TitleRobby.h" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleRobby.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleRobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTitleRobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTitleUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleRobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleRobby_Statics::ClassParams = {
	&UTitleRobby::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleRobby_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleRobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleRobby()
{
	if (!Z_Registration_Info_UClass_UTitleRobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleRobby.OuterSingleton, Z_Construct_UClass_UTitleRobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleRobby.OuterSingleton;
}
UTitleRobby::UTitleRobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleRobby);
UTitleRobby::~UTitleRobby() {}
// ********** End Class UTitleRobby ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleRobby, UTitleRobby::StaticClass, TEXT("UTitleRobby"), &Z_Registration_Info_UClass_UTitleRobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleRobby), 2289585589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_1684458545(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
