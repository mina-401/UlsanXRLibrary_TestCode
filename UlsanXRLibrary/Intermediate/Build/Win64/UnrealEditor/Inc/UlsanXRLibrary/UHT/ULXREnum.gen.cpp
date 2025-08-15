// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/ULXREnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeULXREnum() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UULXREnum ****************************************************************
void UULXREnum::StaticRegisterNativesUULXREnum()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UULXREnum;
UClass* UULXREnum::GetPrivateStaticClass()
{
	using TClass = UULXREnum;
	if (!Z_Registration_Info_UClass_UULXREnum.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ULXREnum"),
			Z_Registration_Info_UClass_UULXREnum.InnerSingleton,
			StaticRegisterNativesUULXREnum,
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
	return Z_Registration_Info_UClass_UULXREnum.InnerSingleton;
}
UClass* Z_Construct_UClass_UULXREnum_NoRegister()
{
	return UULXREnum::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UULXREnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/ULXREnum.h" },
		{ "ModuleRelativePath", "Global/ULXREnum.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UULXREnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UULXREnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UULXREnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UULXREnum_Statics::ClassParams = {
	&UULXREnum::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UULXREnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UULXREnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UULXREnum()
{
	if (!Z_Registration_Info_UClass_UULXREnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UULXREnum.OuterSingleton, Z_Construct_UClass_UULXREnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UULXREnum.OuterSingleton;
}
UULXREnum::UULXREnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UULXREnum);
UULXREnum::~UULXREnum() {}
// ********** End Class UULXREnum ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UULXREnum, UULXREnum::StaticClass, TEXT("UULXREnum"), &Z_Registration_Info_UClass_UULXREnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UULXREnum), 1469637772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_4125917802(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
