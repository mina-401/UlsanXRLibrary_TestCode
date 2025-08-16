// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/TitlePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitlePlayerController() {}

// ********** Begin Cross Module References ********************************************************
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ABasePlayerController();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePlayerController();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_ATitlePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATitlePlayerController ***************************************************
void ATitlePlayerController::StaticRegisterNativesATitlePlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATitlePlayerController;
UClass* ATitlePlayerController::GetPrivateStaticClass()
{
	using TClass = ATitlePlayerController;
	if (!Z_Registration_Info_UClass_ATitlePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitlePlayerController"),
			Z_Registration_Info_UClass_ATitlePlayerController.InnerSingleton,
			StaticRegisterNativesATitlePlayerController,
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
	return Z_Registration_Info_UClass_ATitlePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATitlePlayerController_NoRegister()
{
	return ATitlePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATitlePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Mode/Title/TitlePlayerController.h" },
		{ "ModuleRelativePath", "Mode/Title/TitlePlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitlePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATitlePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitlePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitlePlayerController_Statics::ClassParams = {
	&ATitlePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitlePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitlePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATitlePlayerController()
{
	if (!Z_Registration_Info_UClass_ATitlePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitlePlayerController.OuterSingleton, Z_Construct_UClass_ATitlePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATitlePlayerController.OuterSingleton;
}
ATitlePlayerController::ATitlePlayerController() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATitlePlayerController);
ATitlePlayerController::~ATitlePlayerController() {}
// ********** End Class ATitlePlayerController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATitlePlayerController, ATitlePlayerController::StaticClass, TEXT("ATitlePlayerController"), &Z_Registration_Info_UClass_ATitlePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitlePlayerController), 1223003775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h__Script_UlsanXRLibrary_666444248(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_TitlePlayerController_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
