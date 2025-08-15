// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/UI/TitleUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitleUserWidget() {}

// ********** Begin Cross Module References ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTitleUserWidget Function GetMainWidget **********************************
struct Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics
{
	struct TitleUserWidget_eventGetMainWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventGetMainWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "GetMainWidget", Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::TitleUserWidget_eventGetMainWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::TitleUserWidget_eventGetMainWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleUserWidget_GetMainWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execGetMainWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetMainWidget();
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function GetMainWidget ************************************

// ********** Begin Class UTitleUserWidget *********************************************************
void UTitleUserWidget::StaticRegisterNativesUTitleUserWidget()
{
	UClass* Class = UTitleUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMainWidget", &UTitleUserWidget::execGetMainWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTitleUserWidget;
UClass* UTitleUserWidget::GetPrivateStaticClass()
{
	using TClass = UTitleUserWidget;
	if (!Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitleUserWidget"),
			Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton,
			StaticRegisterNativesUTitleUserWidget,
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
	return Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister()
{
	return UTitleUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTitleUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mode/Title/UI/TitleUserWidget.h" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleUserWidget_GetMainWidget, "GetMainWidget" }, // 2191897733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, MainWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidget_MetaData), NewProp_MainWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_MainWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams = {
	&UTitleUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleUserWidget()
{
	if (!Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton, Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton;
}
UTitleUserWidget::UTitleUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleUserWidget);
UTitleUserWidget::~UTitleUserWidget() {}
// ********** End Class UTitleUserWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleUserWidget, UTitleUserWidget::StaticClass, TEXT("UTitleUserWidget"), &Z_Registration_Info_UClass_UTitleUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleUserWidget), 4158215206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_2216467867(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
