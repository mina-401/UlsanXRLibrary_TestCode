// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Global/ULXREnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeULXREnum() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UULXREnum_NoRegister();
ULSANXRLIBRARY_API UEnum* Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation();
ULSANXRLIBRARY_API UEnum* Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPlayerAnimation **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAnimation;
static UEnum* EPlayerAnimation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerAnimation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerAnimation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation, (UObject*)Z_Construct_UPackage__Script_UlsanXRLibrary(), TEXT("EPlayerAnimation"));
	}
	return Z_Registration_Info_UEnum_EPlayerAnimation.OuterSingleton;
}
template<> ULSANXRLIBRARY_API UEnum* StaticEnum<EPlayerAnimation>()
{
	return EPlayerAnimation_StaticEnum();
}
struct Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.DisplayName", "\xec\x84\x9c\xec\x9e\x88\xea\xb8\xb0" },
		{ "Idle.Name", "EPlayerAnimation::Idle" },
		{ "MAX.Comment", "/**\n * \n */" },
		{ "MAX.DisplayName", "MAX" },
		{ "MAX.Name", "EPlayerAnimation::MAX" },
		{ "ModuleRelativePath", "Global/ULXREnum.h" },
		{ "Walk.Comment", "/**\n * \n */" },
		{ "Walk.DisplayName", "\xea\xb1\xb7\xea\xb8\xb0" },
		{ "Walk.Name", "EPlayerAnimation::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerAnimation::Idle", (int64)EPlayerAnimation::Idle },
		{ "EPlayerAnimation::Walk", (int64)EPlayerAnimation::Walk },
		{ "EPlayerAnimation::MAX", (int64)EPlayerAnimation::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
	nullptr,
	"EPlayerAnimation",
	"EPlayerAnimation",
	Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation()
{
	if (!Z_Registration_Info_UEnum_EPlayerAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAnimation.InnerSingleton, Z_Construct_UEnum_UlsanXRLibrary_EPlayerAnimation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerAnimation.InnerSingleton;
}
// ********** End Enum EPlayerAnimation ************************************************************

// ********** Begin Enum ETitleUIType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETitleUIType;
static UEnum* ETitleUIType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETitleUIType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETitleUIType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType, (UObject*)Z_Construct_UPackage__Script_UlsanXRLibrary(), TEXT("ETitleUIType"));
	}
	return Z_Registration_Info_UEnum_ETitleUIType.OuterSingleton;
}
template<> ULSANXRLIBRARY_API UEnum* StaticEnum<ETitleUIType>()
{
	return ETitleUIType_StaticEnum();
}
struct Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAX.DisplayName", "MAX" },
		{ "MAX.Name", "ETitleUIType::MAX" },
		{ "ModuleRelativePath", "Global/ULXREnum.h" },
		{ "TitleMain.DisplayName", "\xeb\xa9\x94\xec\x9d\xb8\xed\x99\x94\xeb\xa9\xb4" },
		{ "TitleMain.Name", "ETitleUIType::TitleMain" },
		{ "TitleRoom.DisplayName", "\xeb\xb0\xa9\xec\x9e\x85\xec\x9e\xa5" },
		{ "TitleRoom.Name", "ETitleUIType::TitleRoom" },
		{ "TitleServer.DisplayName", "\xec\x84\x9c\xeb\xb2\x84\xec\x98\xa4\xed\x94\x88" },
		{ "TitleServer.Name", "ETitleUIType::TitleServer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETitleUIType::TitleRoom", (int64)ETitleUIType::TitleRoom },
		{ "ETitleUIType::TitleMain", (int64)ETitleUIType::TitleMain },
		{ "ETitleUIType::TitleServer", (int64)ETitleUIType::TitleServer },
		{ "ETitleUIType::MAX", (int64)ETitleUIType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
	nullptr,
	"ETitleUIType",
	"ETitleUIType",
	Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType()
{
	if (!Z_Registration_Info_UEnum_ETitleUIType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETitleUIType.InnerSingleton, Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETitleUIType.InnerSingleton;
}
// ********** End Enum ETitleUIType ****************************************************************

// ********** Begin Class UULXREnum ****************************************************************
void UULXREnum::StaticRegisterNativesUULXREnum()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UULXREnum;
UClass* UULXREnum::GetPrivateStaticClass()
{
	using TClass = UULXREnum;
	if (!Z_Registration_Info_UClass_UULXREnum.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ULXREnum"),
			Z_Registration_Info_UClass_UULXREnum.InnerSingleton,
			StaticRegisterNativesUULXREnum,
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
	return Z_Registration_Info_UClass_UULXREnum.InnerSingleton;
}
UClass* Z_Construct_UClass_UULXREnum_NoRegister()
{
	return UULXREnum::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UULXREnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Global/ULXREnum.h" },
		{ "ModuleRelativePath", "Global/ULXREnum.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UULXREnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UULXREnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UULXREnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UULXREnum_Statics::ClassParams = {
	&UULXREnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UULXREnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UULXREnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UULXREnum()
{
	if (!Z_Registration_Info_UClass_UULXREnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UULXREnum.OuterSingleton, Z_Construct_UClass_UULXREnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UULXREnum.OuterSingleton;
}
UULXREnum::UULXREnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UULXREnum);
UULXREnum::~UULXREnum() {}
// ********** End Class UULXREnum ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerAnimation_StaticEnum, TEXT("EPlayerAnimation"), &Z_Registration_Info_UEnum_EPlayerAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1988476378U) },
		{ ETitleUIType_StaticEnum, TEXT("ETitleUIType"), &Z_Registration_Info_UEnum_ETitleUIType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115851734U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UULXREnum, UULXREnum::StaticClass, TEXT("UULXREnum"), &Z_Registration_Info_UClass_UULXREnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UULXREnum), 2004814767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_3203882956(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Global_ULXREnum_h__Script_UlsanXRLibrary_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
