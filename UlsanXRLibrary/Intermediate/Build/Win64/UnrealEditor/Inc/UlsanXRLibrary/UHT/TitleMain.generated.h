// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/UI/TitleMain.h"

#ifdef ULSANXRLIBRARY_TitleMain_generated_h
#error "TitleMain.generated.h already included, missing '#pragma once' in TitleMain.h"
#endif
#define ULSANXRLIBRARY_TitleMain_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;

// ********** Begin Class UTitleMain ***************************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateChildWidget); \
	DECLARE_FUNCTION(execMainWidgetInit);


ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleMain(); \
	friend struct Z_Construct_UClass_UTitleMain_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleMain_NoRegister(); \
public: \
	DECLARE_CLASS2(UTitleMain, UTitleUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UTitleMain_NoRegister) \
	DECLARE_SERIALIZER(UTitleMain)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleMain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTitleMain(UTitleMain&&) = delete; \
	UTitleMain(const UTitleMain&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleMain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleMain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleMain) \
	NO_API virtual ~UTitleMain();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTitleMain;

// ********** End Class UTitleMain *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleMain_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
