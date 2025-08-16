// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/Title/TitlePlayerController.h"

#ifdef ULSANXRLIBRARY_TitlePlayerController_generated_h
#error "TitlePlayerController.generated.h already included, missing '#pragma once' in TitlePlayerController.h"
#endif
#define ULSANXRLIBRARY_TitlePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATitlePlayerController ***************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePlayerController_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitlePlayerController(); \
	friend struct Z_Construct_UClass_ATitlePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATitlePlayerController, ABasePlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ATitlePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATitlePlayerController)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitlePlayerController(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATitlePlayerController(ATitlePlayerController&&) = delete; \
	ATitlePlayerController(const ATitlePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitlePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitlePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATitlePlayerController) \
	NO_API virtual ~ATitlePlayerController();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATitlePlayerController;

// ********** End Class ATitlePlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
