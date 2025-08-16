// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/Data/GobalDataTable.h"

#ifdef ULSANXRLIBRARY_GobalDataTable_generated_h
#error "GobalDataTable.generated.h already included, missing '#pragma once' in GobalDataTable.h"
#endif
#define ULSANXRLIBRARY_GobalDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataTableRow *****************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataTableRow_Statics; \
	ULSANXRLIBRARY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FDataTableRow;
// ********** End ScriptStruct FDataTableRow *******************************************************

// ********** Begin Class UGobalDataTable **********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGobalDataTable(); \
	friend struct Z_Construct_UClass_UGobalDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UGobalDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UGobalDataTable, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UGobalDataTable_NoRegister) \
	DECLARE_SERIALIZER(UGobalDataTable)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGobalDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGobalDataTable(UGobalDataTable&&) = delete; \
	UGobalDataTable(const UGobalDataTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGobalDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGobalDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGobalDataTable) \
	NO_API virtual ~UGobalDataTable();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_27_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_30_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGobalDataTable;

// ********** End Class UGobalDataTable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_Data_GobalDataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
