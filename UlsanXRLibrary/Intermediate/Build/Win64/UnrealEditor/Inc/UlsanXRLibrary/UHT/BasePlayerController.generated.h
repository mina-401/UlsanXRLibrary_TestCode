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

class UInputMappingContext;

// ********** Begin Class ABasePlayerController ****************************************************
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMappingContext);


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_CALLBACK_WRAPPERS
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_ABasePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayerController(ABasePlayerController&&) = delete; \
	ABasePlayerController(const ABasePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayerController) \
	NO_API virtual ~ABasePlayerController();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_13_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_CALLBACK_WRAPPERS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayerController;

// ********** End Class ABasePlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BasePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
