// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/TitlePawn.h"

#ifdef ULSANXRLIBRARY_TitlePawn_generated_h
#error "TitlePawn.generated.h already included, missing '#pragma once' in TitlePawn.h"
#endif
#define ULSANXRLIBRARY_TitlePawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATitlePawn ***************************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePawn_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitlePawn(); \
	friend struct Z_Construct_UClass_ATitlePawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ATitlePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ATitlePawn_NoRegister) \
	DECLARE_SERIALIZER(ATitlePawn)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATitlePawn(ATitlePawn&&) = delete; \
	ATitlePawn(const ATitlePawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitlePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitlePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATitlePawn) \
	NO_API virtual ~ATitlePawn();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_9_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATitlePawn;

// ********** End Class ATitlePawn *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
