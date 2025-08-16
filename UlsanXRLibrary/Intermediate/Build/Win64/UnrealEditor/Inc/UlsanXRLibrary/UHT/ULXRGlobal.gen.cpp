// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/ULXRGlobal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeULXRGlobal() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXRGlobal();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXRGlobal_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UULXRGlobal Function GetMaxPlayer ****************************************
struct Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics
{
	struct ULXRGlobal_eventGetMaxPlayer_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Title -> play \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Global/ULXRGlobal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Title -> play \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULXRGlobal_eventGetMaxPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UULXRGlobal, nullptr, "GetMaxPlayer", Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::ULXRGlobal_eventGetMaxPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::ULXRGlobal_eventGetMaxPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UULXRGlobal::execGetMaxPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UULXRGlobal::GetMaxPlayer();
	P_NATIVE_END;
}
// ********** End Class UULXRGlobal Function GetMaxPlayer ******************************************

// ********** Begin Class UULXRGlobal Function SetMaxPlayer ****************************************
struct Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics
{
	struct ULXRGlobal_eventSetMaxPlayer_Parms
	{
		int32 _Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/ULXRGlobal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULXRGlobal_eventSetMaxPlayer_Parms, _Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UULXRGlobal, nullptr, "SetMaxPlayer", Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::ULXRGlobal_eventSetMaxPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::ULXRGlobal_eventSetMaxPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UULXRGlobal::execSetMaxPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UULXRGlobal::SetMaxPlayer(Z_Param__Value);
	P_NATIVE_END;
}
// ********** End Class UULXRGlobal Function SetMaxPlayer ******************************************

// ********** Begin Class UULXRGlobal **************************************************************
void UULXRGlobal::StaticRegisterNativesUULXRGlobal()
{
	UClass* Class = UULXRGlobal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaxPlayer", &UULXRGlobal::execGetMaxPlayer },
		{ "SetMaxPlayer", &UULXRGlobal::execSetMaxPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UULXRGlobal;
UClass* UULXRGlobal::GetPrivateStaticClass()
{
	using TClass = UULXRGlobal;
	if (!Z_Registration_Info_UClass_UULXRGlobal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ULXRGlobal"),
			Z_Registration_Info_UClass_UULXRGlobal.InnerSingleton,
			StaticRegisterNativesUULXRGlobal,
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
	return Z_Registration_Info_UClass_UULXRGlobal.InnerSingleton;
}
UClass* Z_Construct_UClass_UULXRGlobal_NoRegister()
{
	return UULXRGlobal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UULXRGlobal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/ULXRGlobal.h" },
		{ "ModuleRelativePath", "Global/ULXRGlobal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UULXRGlobal_GetMaxPlayer, "GetMaxPlayer" }, // 1055403208
		{ &Z_Construct_UFunction_UULXRGlobal_SetMaxPlayer, "SetMaxPlayer" }, // 2472099006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UULXRGlobal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UULXRGlobal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UULXRGlobal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UULXRGlobal_Statics::ClassParams = {
	&UULXRGlobal::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UULXRGlobal_Statics::Class_MetaDataParams), Z_Construct_UClass_UULXRGlobal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UULXRGlobal()
{
	if (!Z_Registration_Info_UClass_UULXRGlobal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UULXRGlobal.OuterSingleton, Z_Construct_UClass_UULXRGlobal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UULXRGlobal.OuterSingleton;
}
UULXRGlobal::UULXRGlobal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UULXRGlobal);
UULXRGlobal::~UULXRGlobal() {}
// ********** End Class UULXRGlobal ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UULXRGlobal, UULXRGlobal::StaticClass, TEXT("UULXRGlobal"), &Z_Registration_Info_UClass_UULXRGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UULXRGlobal), 1338216033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_2288686927(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
