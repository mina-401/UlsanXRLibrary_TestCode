// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/ULXREnum.h"

#ifdef ULSANXRLIBRARY_ULXREnum_generated_h
#error "ULXREnum.generated.h already included, missing '#pragma once' in ULXREnum.h"
#endif
#define ULSANXRLIBRARY_ULXREnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UULXREnum ****************************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum_NoRegister();

#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUULXREnum(); \
	friend struct Z_Construct_UClass_UULXREnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UULXREnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UlsanXRLibrary"), Z_Construct_UClass_UULXREnum_NoRegister) \
	DECLARE_SERIALIZER(UULXREnum)


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UULXREnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UULXREnum(UULXREnum&&) = delete; \
	UULXREnum(const UULXREnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UULXREnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UULXREnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UULXREnum) \
	NO_API virtual ~UULXREnum();


#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_31_PROLOG
#define FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_34_INCLASS_NO_PURE_DECLS \
	FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UULXREnum;

// ********** End Class UULXREnum ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h

// ********** Begin Enum EPlayerAnimation **********************************************************
#define FOREACH_ENUM_EPLAYERANIMATION(op) \
	op(EPlayerAnimation::Idle) \
	op(EPlayerAnimation::Walk) 

enum class EPlayerAnimation : uint8;
template<> struct TIsUEnumClass<EPlayerAnimation> { enum { Value = true }; };
template<> ULSANXRLIBRARY_API UEnum* StaticEnum<EPlayerAnimation>();
// ********** End Enum EPlayerAnimation ************************************************************

// ********** Begin Enum ETitleUIType **************************************************************
#define FOREACH_ENUM_ETITLEUITYPE(op) \
	op(ETitleUIType::TitleRoom) \
	op(ETitleUIType::TitleMain) \
	op(ETitleUIType::TitleServer) 

enum class ETitleUIType : uint8;
template<> struct TIsUEnumClass<ETitleUIType> { enum { Value = true }; };
template<> ULSANXRLIBRARY_API UEnum* StaticEnum<ETitleUIType>();
// ********** End Enum ETitleUIType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
