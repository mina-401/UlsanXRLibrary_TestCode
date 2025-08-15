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
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPIsNotValid_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleRobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomIsNotValid_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleRobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IPIsNotValid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomIsNotValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleRobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleRobby_Statics::NewProp_IPIsNotValid = { "IPIsNotValid", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleRobby, IPIsNotValid), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPIsNotValid_MetaData), NewProp_IPIsNotValid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleRobby_Statics::NewProp_RoomIsNotValid = { "RoomIsNotValid", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleRobby, RoomIsNotValid), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomIsNotValid_MetaData), NewProp_RoomIsNotValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleRobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleRobby_Statics::NewProp_IPIsNotValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleRobby_Statics::NewProp_RoomIsNotValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleRobby_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UTitleRobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleRobby_Statics::PropPointers),
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
		{ Z_Construct_UClass_UTitleRobby, UTitleRobby::StaticClass, TEXT("UTitleRobby"), &Z_Registration_Info_UClass_UTitleRobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleRobby), 3416063976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_1727408642(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
