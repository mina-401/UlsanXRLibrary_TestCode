// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/BaseGameInstance.h"

#ifdef ULSANXRLIBRARY_BaseGameInstance_generated_h
#error "BaseGameInstance.generated.h already included, missing '#pragma once' in BaseGameInstance.h"
#endif
#define ULSANXRLIBRARY_BaseGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseGameInstance ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UBaseGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseGameInstance(UBaseGameInstance&&) = delete; \
	UBaseGameInstance(const UBaseGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance) \
	NO_API virtual ~UBaseGameInstance();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseGameInstance;

// ********** End Class UBaseGameInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
