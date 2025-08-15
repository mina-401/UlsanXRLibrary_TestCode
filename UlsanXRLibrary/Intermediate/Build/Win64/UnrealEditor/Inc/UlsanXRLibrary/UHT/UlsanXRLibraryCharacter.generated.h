// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UlsanXRLibraryCharacter.h"

#ifdef ULSANXRLIBRARY_UlsanXRLibraryCharacter_generated_h
#error "UlsanXRLibraryCharacter.generated.h already included, missing '#pragma once' in UlsanXRLibraryCharacter.h"
#endif
#define ULSANXRLIBRARY_UlsanXRLibraryCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUlsanXRLibraryCharacter *************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


ULSANXRLIBRARY_API UClass* Z_Construct_UClass_AUlsanXRLibraryCharacter_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUlsanXRLibraryCharacter(); \
	friend struct Z_Construct_UClass_AUlsanXRLibraryCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_AUlsanXRLibraryCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AUlsanXRLibraryCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_AUlsanXRLibraryCharacter_NoRegister) \
	DECLARE_SERIALIZER(AUlsanXRLibraryCharacter)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUlsanXRLibraryCharacter(AUlsanXRLibraryCharacter&&) = delete; \
	AUlsanXRLibraryCharacter(const AUlsanXRLibraryCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUlsanXRLibraryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUlsanXRLibraryCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUlsanXRLibraryCharacter) \
	NO_API virtual ~AUlsanXRLibraryCharacter();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_21_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUlsanXRLibraryCharacter;

// ********** End Class AUlsanXRLibraryCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_UlsanXRLibraryCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
