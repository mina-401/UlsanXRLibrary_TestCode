// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/UI/TitleRobby.h"

#ifdef ULSANXRLIBRARY_TitleRobby_generated_h
#error "TitleRobby.generated.h already included, missing '#pragma once' in TitleRobby.h"
#endif
#define ULSANXRLIBRARY_TitleRobby_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTitleRobby **************************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleRobby_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleRobby(); \
	friend struct Z_Construct_UClass_UTitleRobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleRobby_NoRegister(); \
public: \
	DECLARE_CLASS2(UTitleRobby, UTitleUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UTitleRobby_NoRegister) \
	DECLARE_SERIALIZER(UTitleRobby)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleRobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTitleRobby(UTitleRobby&&) = delete; \
	UTitleRobby(const UTitleRobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleRobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleRobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleRobby) \
	NO_API virtual ~UTitleRobby();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTitleRobby;

// ********** End Class UTitleRobby ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleRobby_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
