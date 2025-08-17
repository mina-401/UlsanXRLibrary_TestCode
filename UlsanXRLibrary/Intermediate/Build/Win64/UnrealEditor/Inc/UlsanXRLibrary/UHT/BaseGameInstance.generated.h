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

class UWorld;

// ********** Begin Class UBaseGameInstance ********************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWorldServerTravel); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execStartServer);


ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UBaseGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseGameInstance(UBaseGameInstance&&) = delete; \
	UBaseGameInstance(const UBaseGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseGameInstance) \
	NO_API virtual ~UBaseGameInstance();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_13_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseGameInstance;

// ********** End Class UBaseGameInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
