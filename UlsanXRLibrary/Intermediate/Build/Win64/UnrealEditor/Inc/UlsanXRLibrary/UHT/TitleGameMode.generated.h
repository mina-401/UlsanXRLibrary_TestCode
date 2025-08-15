// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/TitleGameMode.h"

#ifdef ULSANXRLIBRARY_TitleGameMode_generated_h
#error "TitleGameMode.generated.h already included, missing '#pragma once' in TitleGameMode.h"
#endif
#define ULSANXRLIBRARY_TitleGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATitleGameMode ***********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleGameMode_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitleGameMode(); \
	friend struct Z_Construct_UClass_ATitleGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATitleGameMode, ABaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ATitleGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATitleGameMode)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitleGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATitleGameMode(ATitleGameMode&&) = delete; \
	ATitleGameMode(const ATitleGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitleGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitleGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitleGameMode) \
	NO_API virtual ~ATitleGameMode();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATitleGameMode;

// ********** End Class ATitleGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
