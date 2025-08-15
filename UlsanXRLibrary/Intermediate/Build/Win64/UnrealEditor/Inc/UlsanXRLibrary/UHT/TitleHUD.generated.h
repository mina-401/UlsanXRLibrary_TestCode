// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/TitleHUD.h"

#ifdef ULSANXRLIBRARY_TitleHUD_generated_h
#error "TitleHUD.generated.h already included, missing '#pragma once' in TitleHUD.h"
#endif
#define ULSANXRLIBRARY_TitleHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATitleHUD ****************************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleHUD_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitleHUD(); \
	friend struct Z_Construct_UClass_ATitleHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitleHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(ATitleHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ATitleHUD_NoRegister) \
	DECLARE_SERIALIZER(ATitleHUD)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitleHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATitleHUD(ATitleHUD&&) = delete; \
	ATitleHUD(const ATitleHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitleHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitleHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitleHUD) \
	NO_API virtual ~ATitleHUD();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATitleHUD;

// ********** End Class ATitleHUD ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitleHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
