// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/Data/GobalDataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGobalDataTable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable_NoRegister();
ULSANXRLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRow();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDataTableRow *****************************************************
static_assert(std::is_polymorphic<FDataTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDataTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDataTableRow;
class UScriptStruct* FDataTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDataTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDataTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRow, (UObject*)Z_Construct_UPackage__Script_UlsanXRLibrary(), TEXT("DataTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FDataTableRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDataTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Global/Data/GobalDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Global/Data/GobalDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Resources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableRow_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableRow, Resources), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resources_MetaData), NewProp_Resources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRow_Statics::NewProp_Resources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DataTableRow",
	Z_Construct_UScriptStruct_FDataTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRow_Statics::PropPointers),
	sizeof(FDataTableRow),
	alignof(FDataTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FDataTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDataTableRow.InnerSingleton, Z_Construct_UScriptStruct_FDataTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDataTableRow.InnerSingleton;
}
// ********** End ScriptStruct FDataTableRow *******************************************************

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
		{ "IncludePath", "Global/Data/GobalDataTable.h" },
		{ "ModuleRelativePath", "Global/Data/GobalDataTable.h" },
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
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataTableRow::StaticStruct, Z_Construct_UScriptStruct_FDataTableRow_Statics::NewStructOps, TEXT("DataTableRow"), &Z_Registration_Info_UScriptStruct_FDataTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableRow), 2206395891U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGobalDataTable, UGobalDataTable::StaticClass, TEXT("UGobalDataTable"), &Z_Registration_Info_UClass_UGobalDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGobalDataTable), 2456655901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_1329717853(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h__Script_UlsanXRLibrary_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
