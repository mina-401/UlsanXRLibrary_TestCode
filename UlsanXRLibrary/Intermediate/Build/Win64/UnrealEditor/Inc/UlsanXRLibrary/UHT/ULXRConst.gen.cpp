// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/ULXRConst.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeULXRConst() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXRConst();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXRConst_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UULXRConst ***************************************************************
void UULXRConst::StaticRegisterNativesUULXRConst()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UULXRConst;
UClass* UULXRConst::GetPrivateStaticClass()
{
	using TClass = UULXRConst;
	if (!Z_Registration_Info_UClass_UULXRConst.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ULXRConst"),
			Z_Registration_Info_UClass_UULXRConst.InnerSingleton,
			StaticRegisterNativesUULXRConst,
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
	return Z_Registration_Info_UClass_UULXRConst.InnerSingleton;
}
UClass* Z_Construct_UClass_UULXRConst_NoRegister()
{
	return UULXRConst::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UULXRConst_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/ULXRConst.h" },
		{ "ModuleRelativePath", "Global/ULXRConst.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UULXRConst>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UULXRConst_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UULXRConst_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UULXRConst_Statics::ClassParams = {
	&UULXRConst::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UULXRConst_Statics::Class_MetaDataParams), Z_Construct_UClass_UULXRConst_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UULXRConst()
{
	if (!Z_Registration_Info_UClass_UULXRConst.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UULXRConst.OuterSingleton, Z_Construct_UClass_UULXRConst_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UULXRConst.OuterSingleton;
}
UULXRConst::UULXRConst(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UULXRConst);
UULXRConst::~UULXRConst() {}
// ********** End Class UULXRConst *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRConst_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UULXRConst, UULXRConst::StaticClass, TEXT("UULXRConst"), &Z_Registration_Info_UClass_UULXRConst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UULXRConst), 1062466438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRConst_h__Script_UlsanXRLibrary_4059453118(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRConst_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXRConst_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
