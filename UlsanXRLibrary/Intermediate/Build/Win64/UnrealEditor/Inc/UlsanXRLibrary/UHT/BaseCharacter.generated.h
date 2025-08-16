// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/BaseCharacter.h"

#ifdef ULSANXRLIBRARY_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define ULSANXRLIBRARY_BaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EPlayerAnimation : uint8;

// ********** Begin Class ABaseCharacter ***********************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeAnimation_Multi); \
	DECLARE_FUNCTION(execChangeAnimation);


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_CALLBACK_WRAPPERS
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ABaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurAnimnation=NETFIELD_REP_START, \
		CurSectionName, \
		NETFIELD_REP_END=CurSectionName	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseCharacter(ABaseCharacter&&) = delete; \
	ABaseCharacter(const ABaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_13_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_CALLBACK_WRAPPERS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseCharacter;

// ********** End Class ABaseCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
