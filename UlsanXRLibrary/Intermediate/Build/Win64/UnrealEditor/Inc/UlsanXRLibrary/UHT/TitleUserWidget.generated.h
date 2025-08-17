// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/UI/TitleUserWidget.h"

#ifdef ULSANXRLIBRARY_TitleUserWidget_generated_h
#error "TitleUserWidget.generated.h already included, missing '#pragma once' in TitleUserWidget.h"
#endif
#define ULSANXRLIBRARY_TitleUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTitleUserWidget;
class UUserWidget;
enum class ESlateVisibility : uint8;
enum class ETitleUIType : uint8;

// ********** Begin Class UTitleUserWidget *********************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetConnection); \
	DECLARE_FUNCTION(execClientTravelToWorld); \
	DECLARE_FUNCTION(execServerTravelToWorld); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execStartServer); \
	DECLARE_FUNCTION(execVisibleChangeUI); \
	DECLARE_FUNCTION(execSetZOrder); \
	DECLARE_FUNCTION(execGetMainWidget); \
	DECLARE_FUNCTION(execCreateChildWidget); \
	DECLARE_FUNCTION(execMainWidgetInit);


ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleUserWidget(); \
	friend struct Z_Construct_UClass_UTitleUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UTitleUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UTitleUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UTitleUserWidget)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTitleUserWidget(UTitleUserWidget&&) = delete; \
	UTitleUserWidget(const UTitleUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleUserWidget) \
	NO_API virtual ~UTitleUserWidget();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_14_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTitleUserWidget;

// ********** End Class UTitleUserWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
