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
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseGameInstance ********************************************************
void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
UBaseGameInstance::UBaseGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
UBaseGameInstance::~UBaseGameInstance() {}
// ********** End Class UBaseGameInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameInstance, UBaseGameInstance::StaticClass, TEXT("UBaseGameInstance"), &Z_Registration_Info_UClass_UBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameInstance), 110424548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_2235538895(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
