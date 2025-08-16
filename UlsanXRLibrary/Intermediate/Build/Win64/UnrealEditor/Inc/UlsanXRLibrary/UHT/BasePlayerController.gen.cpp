// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/BasePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasePlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasePlayerController Function AddMappingContext *************************
struct Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics
{
	struct BasePlayerController_eventAddMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/BasePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerController_eventAddMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "AddMappingContext", Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::BasePlayerController_eventAddMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::BasePlayerController_eventAddMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_AddMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_AddMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execAddMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class ABasePlayerController Function AddMappingContext ***************************

// ********** Begin Class ABasePlayerController Function SetupInputComponentEvent ******************
static FName NAME_ABasePlayerController_SetupInputComponentEvent = FName(TEXT("SetupInputComponentEvent"));
void ABasePlayerController::SetupInputComponentEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_ABasePlayerController_SetupInputComponentEvent);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/BasePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "SetupInputComponentEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABasePlayerController Function SetupInputComponentEvent ********************

// ********** Begin Class ABasePlayerController ****************************************************
void ABasePlayerController::StaticRegisterNativesABasePlayerController()
{
	UClass* Class = ABasePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMappingContext", &ABasePlayerController::execAddMappingContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasePlayerController;
UClass* ABasePlayerController::GetPrivateStaticClass()
{
	using TClass = ABasePlayerController;
	if (!Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasePlayerController"),
			Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton,
			StaticRegisterNativesABasePlayerController,
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
	return Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasePlayerController_NoRegister()
{
	return ABasePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Global/BasePlayerController.h" },
		{ "ModuleRelativePath", "Global/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Global/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingActions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd => \xef\xbf\xbd\xda\xb7\xe1\xb1\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Global/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd => \xef\xbf\xbd\xda\xb7\xe1\xb1\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingActions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MappingActions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MappingActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerController_AddMappingContext, "AddMappingContext" }, // 1714268485
		{ &Z_Construct_UFunction_ABasePlayerController_SetupInputComponentEvent, "SetupInputComponentEvent" }, // 2945479453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions_ValueProp = { "MappingActions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions_Key_KeyProp = { "MappingActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions = { "MappingActions", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MappingActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingActions_MetaData), NewProp_MappingActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MappingActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerController_Statics::ClassParams = {
	&ABasePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerController()
{
	if (!Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton, Z_Construct_UClass_ABasePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerController);
ABasePlayerController::~ABasePlayerController() {}
// ********** End Class ABasePlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerController, ABasePlayerController::StaticClass, TEXT("ABasePlayerController"), &Z_Registration_Info_UClass_ABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerController), 1735457730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h__Script_UlsanXRLibrary_3082008075(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
