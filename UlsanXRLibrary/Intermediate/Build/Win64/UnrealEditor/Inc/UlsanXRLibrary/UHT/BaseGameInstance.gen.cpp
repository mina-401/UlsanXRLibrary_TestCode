// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/BaseGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseGameInstance Function Connect ***************************************
struct Z_Construct_UFunction_UBaseGameInstance_Connect_Statics
{
	struct BaseGameInstance_eventConnect_Parms
	{
		FString _IP;
		FString _Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/BaseGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__IP;
	static const UECodeGen_Private::FStrPropertyParams NewProp__Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::NewProp__IP = { "_IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameInstance_eventConnect_Parms, _IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::NewProp__Port = { "_Port", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameInstance_eventConnect_Parms, _Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::NewProp__IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::NewProp__Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseGameInstance, nullptr, "Connect", Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::BaseGameInstance_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::BaseGameInstance_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameInstance_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameInstance_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameInstance::execConnect)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__IP);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_Out__IP,Z_Param_Out__Port);
	P_NATIVE_END;
}
// ********** End Class UBaseGameInstance Function Connect *****************************************

// ********** Begin Class UBaseGameInstance Function StartServer ***********************************
struct Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics
{
	struct BaseGameInstance_eventStartServer_Parms
	{
		FString _IP;
		FString _Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/BaseGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__IP;
	static const UECodeGen_Private::FStrPropertyParams NewProp__Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::NewProp__IP = { "_IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameInstance_eventStartServer_Parms, _IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::NewProp__Port = { "_Port", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameInstance_eventStartServer_Parms, _Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::NewProp__IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::NewProp__Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseGameInstance, nullptr, "StartServer", Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::BaseGameInstance_eventStartServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::BaseGameInstance_eventStartServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameInstance_StartServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameInstance_StartServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameInstance::execStartServer)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__IP);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartServer(Z_Param_Out__IP,Z_Param_Out__Port);
	P_NATIVE_END;
}
// ********** End Class UBaseGameInstance Function StartServer *************************************

// ********** Begin Class UBaseGameInstance Function WorldServerTravel *****************************
struct Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics
{
	struct BaseGameInstance_eventWorldServerTravel_Parms
	{
		UWorld* _World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global/BaseGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::NewProp__World = { "_World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameInstance_eventWorldServerTravel_Parms, _World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::NewProp__World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseGameInstance, nullptr, "WorldServerTravel", Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::BaseGameInstance_eventWorldServerTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::BaseGameInstance_eventWorldServerTravel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameInstance::execWorldServerTravel)
{
	P_GET_OBJECT(UWorld,Z_Param__World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WorldServerTravel(Z_Param__World);
	P_NATIVE_END;
}
// ********** End Class UBaseGameInstance Function WorldServerTravel *******************************

// ********** Begin Class UBaseGameInstance ********************************************************
void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
{
	UClass* Class = UBaseGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UBaseGameInstance::execConnect },
		{ "StartServer", &UBaseGameInstance::execStartServer },
		{ "WorldServerTravel", &UBaseGameInstance::execWorldServerTravel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseGameInstance;
UClass* UBaseGameInstance::GetPrivateStaticClass()
{
	using TClass = UBaseGameInstance;
	if (!Z_Registration_Info_UClass_UBaseGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseGameInstance"),
			Z_Registration_Info_UClass_UBaseGameInstance.InnerSingleton,
			StaticRegisterNativesUBaseGameInstance,
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
	return Z_Registration_Info_UClass_UBaseGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister()
{
	return UBaseGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/BaseGameInstance.h" },
		{ "ModuleRelativePath", "Global/BaseGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTables_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Global/BaseGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGameInstance_Connect, "Connect" }, // 49442349
		{ &Z_Construct_UFunction_UBaseGameInstance_StartServer, "StartServer" }, // 3427797193
		{ &Z_Construct_UFunction_UBaseGameInstance_WorldServerTravel, "WorldServerTravel" }, // 3236890984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_DataTables = { "DataTables", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGameInstance, DataTables), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTables_MetaData), NewProp_DataTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_DataTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams = {
	&UBaseGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGameInstance()
{
	if (!Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton, Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
UBaseGameInstance::~UBaseGameInstance() {}
// ********** End Class UBaseGameInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameInstance, UBaseGameInstance::StaticClass, TEXT("UBaseGameInstance"), &Z_Registration_Info_UClass_UBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameInstance), 1449894712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_1633247765(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
