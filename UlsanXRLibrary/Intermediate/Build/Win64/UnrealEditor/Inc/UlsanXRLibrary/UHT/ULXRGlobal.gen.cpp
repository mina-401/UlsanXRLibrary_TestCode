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

// ********** Begin Class UULXRGlobal **************************************************************
void UULXRGlobal::StaticRegisterNativesUULXRGlobal()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UULXRGlobal, UULXRGlobal::StaticClass, TEXT("UULXRGlobal"), &Z_Registration_Info_UClass_UULXRGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UULXRGlobal), 213194505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_190749225(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRGlobal_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
