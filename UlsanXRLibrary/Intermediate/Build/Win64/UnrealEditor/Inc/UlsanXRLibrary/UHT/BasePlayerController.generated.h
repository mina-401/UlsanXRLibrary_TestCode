// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/BasePlayerController.h"

#ifdef ULSANXRLIBRARY_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define ULSANXRLIBRARY_BasePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePlayerController ****************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ABasePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayerController(ABasePlayerController&&) = delete; \
	ABasePlayerController(const ABasePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController) \
	NO_API virtual ~ABasePlayerController();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_12_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayerController;

// ********** End Class ABasePlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
