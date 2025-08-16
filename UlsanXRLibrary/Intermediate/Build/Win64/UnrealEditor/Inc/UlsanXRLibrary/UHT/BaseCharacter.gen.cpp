// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/BaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABaseCharacter();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
ULSANXRLIBRARY_API UEnum* Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseCharacter Function ChangeAnimation **********************************
struct BaseCharacter_eventChangeAnimation_Parms
{
	EPlayerAnimation _CurAnimnation;
	FName _SectionName;
};
static FName NAME_ABaseCharacter_ChangeAnimation = FName(TEXT("ChangeAnimation"));
void ABaseCharacter::ChangeAnimation(EPlayerAnimation _CurAnimnation, FName _SectionName)
{
	BaseCharacter_eventChangeAnimation_Parms Parms;
	Parms._CurAnimnation=_CurAnimnation;
	Parms._SectionName=_SectionName;
	UFunction* Func = FindFunctionChecked(NAME_ABaseCharacter_ChangeAnimation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__SectionName", "None" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__CurAnimnation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__CurAnimnation;
	static const UECodeGen_Private::FNamePropertyParams NewProp__SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__CurAnimnation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__CurAnimnation = { "_CurAnimnation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventChangeAnimation_Parms, _CurAnimnation), Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation, METADATA_PARAMS(0, nullptr) }; // 1988476378
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__SectionName = { "_SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventChangeAnimation_Parms, _SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__CurAnimnation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__CurAnimnation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::NewProp__SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "ChangeAnimation", Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::PropPointers), sizeof(BaseCharacter_eventChangeAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseCharacter_eventChangeAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_ChangeAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execChangeAnimation)
{
	P_GET_ENUM(EPlayerAnimation,Z_Param__CurAnimnation);
	P_GET_PROPERTY(FNameProperty,Z_Param__SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeAnimation_Implementation(EPlayerAnimation(Z_Param__CurAnimnation),Z_Param__SectionName);
	P_NATIVE_END;
}
// ********** End Class ABaseCharacter Function ChangeAnimation ************************************

// ********** Begin Class ABaseCharacter Function ChangeAnimation_Multi ****************************
struct BaseCharacter_eventChangeAnimation_Multi_Parms
{
	EPlayerAnimation _CurAnimnation;
	FName _SectionName;
};
static FName NAME_ABaseCharacter_ChangeAnimation_Multi = FName(TEXT("ChangeAnimation_Multi"));
void ABaseCharacter::ChangeAnimation_Multi(EPlayerAnimation _CurAnimnation, FName _SectionName)
{
	BaseCharacter_eventChangeAnimation_Multi_Parms Parms;
	Parms._CurAnimnation=_CurAnimnation;
	Parms._SectionName=_SectionName;
	UFunction* Func = FindFunctionChecked(NAME_ABaseCharacter_ChangeAnimation_Multi);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__SectionName", "None" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__CurAnimnation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__CurAnimnation;
	static const UECodeGen_Private::FNamePropertyParams NewProp__SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__CurAnimnation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__CurAnimnation = { "_CurAnimnation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventChangeAnimation_Multi_Parms, _CurAnimnation), Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation, METADATA_PARAMS(0, nullptr) }; // 1988476378
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__SectionName = { "_SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventChangeAnimation_Multi_Parms, _SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__CurAnimnation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__CurAnimnation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::NewProp__SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "ChangeAnimation_Multi", Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::PropPointers), sizeof(BaseCharacter_eventChangeAnimation_Multi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseCharacter_eventChangeAnimation_Multi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execChangeAnimation_Multi)
{
	P_GET_ENUM(EPlayerAnimation,Z_Param__CurAnimnation);
	P_GET_PROPERTY(FNameProperty,Z_Param__SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeAnimation_Multi_Implementation(EPlayerAnimation(Z_Param__CurAnimnation),Z_Param__SectionName);
	P_NATIVE_END;
}
// ********** End Class ABaseCharacter Function ChangeAnimation_Multi ******************************

// ********** Begin Class ABaseCharacter ***********************************************************
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeAnimation", &ABaseCharacter::execChangeAnimation },
		{ "ChangeAnimation_Multi", &ABaseCharacter::execChangeAnimation_Multi },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseCharacter;
UClass* ABaseCharacter::GetPrivateStaticClass()
{
	using TClass = ABaseCharacter;
	if (!Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseCharacter"),
			Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton,
			StaticRegisterNativesABaseCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_MULTICAST_DELEGATE_OneParam(FInputBindingDelegate, class UInputComponent*);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Global/BaseCharacter.h" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_MULTICAST_DELEGATE_OneParam(FInputBindingDelegate, class UInputComponent*);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurAnimnation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation\n//\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\n" },
#endif
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation\n       \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurSectionName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play" },
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Global/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurAnimnation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurAnimnation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurSectionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_ChangeAnimation, "ChangeAnimation" }, // 2335243095
		{ &Z_Construct_UFunction_ABaseCharacter_ChangeAnimation_Multi, "ChangeAnimation_Multi" }, // 1184644121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurAnimnation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurAnimnation = { "CurAnimnation", nullptr, (EPropertyFlags)0x0040000000020035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CurAnimnation), Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurAnimnation_MetaData), NewProp_CurAnimnation_MetaData) }; // 1988476378
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurSectionName = { "CurSectionName", nullptr, (EPropertyFlags)0x0040000000020035, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CurSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurSectionName_MetaData), NewProp_CurSectionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurSpeed = { "CurSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CurSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurSpeed_MetaData), NewProp_CurSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurAnimnation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurAnimnation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurAnimnation(TEXT("CurAnimnation"));
	static FName Name_CurSectionName(TEXT("CurSectionName"));
	const bool bIsValid = true
		&& Name_CurAnimnation == ClassReps[(int32)ENetFields_Private::CurAnimnation].Property->GetFName()
		&& Name_CurSectionName == ClassReps[(int32)ENetFields_Private::CurSectionName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// ********** End Class ABaseCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 4103949167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h__Script_UlsanXRLibrary_2087678309(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_BaseCharacter_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
