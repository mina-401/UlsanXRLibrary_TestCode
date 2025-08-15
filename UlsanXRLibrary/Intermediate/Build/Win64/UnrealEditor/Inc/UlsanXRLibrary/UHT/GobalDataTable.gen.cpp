// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/GobalDataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGobalDataTable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGobalDataTable **********************************************************
void UGobalDataTable::StaticRegisterNativesUGobalDataTable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGobalDataTable;
UClass* UGobalDataTable::GetPrivateStaticClass()
{
	using TClass = UGobalDataTable;
	if (!Z_Registration_Info_UClass_UGobalDataTable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GobalDataTable"),
			Z_Registration_Info_UClass_UGobalDataTable.InnerSingleton,
			StaticRegisterNativesUGobalDataTable,
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
	return Z_Registration_Info_UClass_UGobalDataTable.InnerSingleton;
}
UClass* Z_Construct_UClass_UGobalDataTable_NoRegister()
{
	return UGobalDataTable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGobalDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/GobalDataTable.h" },
		{ "ModuleRelativePath", "Global/GobalDataTable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGobalDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGobalDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGobalDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGobalDataTable_Statics::ClassParams = {
	&UGobalDataTable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGobalDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UGobalDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGobalDataTable()
{
	if (!Z_Registration_Info_UClass_UGobalDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGobalDataTable.OuterSingleton, Z_Construct_UClass_UGobalDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGobalDataTable.OuterSingleton;
}
UGobalDataTable::UGobalDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGobalDataTable);
UGobalDataTable::~UGobalDataTable() {}
// ********** End Class UGobalDataTable ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_GobalDataTable_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGobalDataTable, UGobalDataTable::StaticClass, TEXT("UGobalDataTable"), &Z_Registration_Info_UClass_UGobalDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGobalDataTable), 829095607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_GobalDataTable_h__Script_UlsanXRLibrary_2802261244(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
