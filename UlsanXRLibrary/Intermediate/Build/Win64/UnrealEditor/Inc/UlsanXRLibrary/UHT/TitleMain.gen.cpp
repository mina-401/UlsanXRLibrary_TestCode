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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTitleMain Function CreateChildWidget ************************************
struct Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics
{
	struct TitleMain_eventCreateChildWidget_Parms
	{
		TSubclassOf<UUserWidget> _Widget;
		bool _IsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleMain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__Widget;
	static void NewProp__IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__Widget = { "_Widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleMain_eventCreateChildWidget_Parms, _Widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__IsVisible_SetBit(void* Obj)
{
	((TitleMain_eventCreateChildWidget_Parms*)Obj)->_IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__IsVisible = { "_IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TitleMain_eventCreateChildWidget_Parms), &Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::NewProp__IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleMain, nullptr, "CreateChildWidget", Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::TitleMain_eventCreateChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::TitleMain_eventCreateChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleMain_CreateChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleMain_CreateChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleMain::execCreateChildWidget)
{
	P_GET_OBJECT(UClass,Z_Param__Widget);
	P_GET_UBOOL(Z_Param__IsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateChildWidget(Z_Param__Widget,Z_Param__IsVisible);
	P_NATIVE_END;
}
// ********** End Class UTitleMain Function CreateChildWidget **************************************

// ********** Begin Class UTitleMain Function MainWidgetInit ***************************************
struct Z_Construct_UFunction_UTitleMain_MainWidgetInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleMain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleMain_MainWidgetInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleMain, nullptr, "MainWidgetInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleMain_MainWidgetInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleMain_MainWidgetInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTitleMain_MainWidgetInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleMain_MainWidgetInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleMain::execMainWidgetInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MainWidgetInit();
	P_NATIVE_END;
}
// ********** End Class UTitleMain Function MainWidgetInit *****************************************

// ********** Begin Class UTitleMain ***************************************************************
void UTitleMain::StaticRegisterNativesUTitleMain()
{
	UClass* Class = UTitleMain::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateChildWidget", &UTitleMain::execCreateChildWidget },
		{ "MainWidgetInit", &UTitleMain::execMainWidgetInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleMain_CreateChildWidget, "CreateChildWidget" }, // 28562651
		{ &Z_Construct_UFunction_UTitleMain_MainWidgetInit, "MainWidgetInit" }, // 4054898670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UTitleMain, UTitleMain::StaticClass, TEXT("UTitleMain"), &Z_Registration_Info_UClass_UTitleMain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleMain), 557642137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_101652815(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
