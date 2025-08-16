// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UlsanXRLibrary/Mode/Title/UI/TitleUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTitleUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget();
ULSANXRLIBRARY_API UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister();
ULSANXRLIBRARY_API UEnum* Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_UlsanXRLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTitleUserWidget Function Connect ****************************************
struct Z_Construct_UFunction_UTitleUserWidget_Connect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "Connect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_Connect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTitleUserWidget_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect();
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function Connect ******************************************

// ********** Begin Class UTitleUserWidget Function CreateChildWidget ******************************
struct Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics
{
	struct TitleUserWidget_eventCreateChildWidget_Parms
	{
		ETitleUIType _Type;
		TSubclassOf<UUserWidget> _Widget;
		int32 _ZOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Type;
	static const UECodeGen_Private::FClassPropertyParams NewProp__Widget;
	static const UECodeGen_Private::FIntPropertyParams NewProp__ZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Type = { "_Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventCreateChildWidget_Parms, _Type), Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType, METADATA_PARAMS(0, nullptr) }; // 3115851734
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Widget = { "_Widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventCreateChildWidget_Parms, _Widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__ZOrder = { "_ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventCreateChildWidget_Parms, _ZOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::NewProp__ZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "CreateChildWidget", Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::TitleUserWidget_eventCreateChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::TitleUserWidget_eventCreateChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execCreateChildWidget)
{
	P_GET_ENUM(ETitleUIType,Z_Param__Type);
	P_GET_OBJECT(UClass,Z_Param__Widget);
	P_GET_PROPERTY(FIntProperty,Z_Param__ZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateChildWidget(ETitleUIType(Z_Param__Type),Z_Param__Widget,Z_Param__ZOrder);
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function CreateChildWidget ********************************

// ********** Begin Class UTitleUserWidget Function GetMainWidget **********************************
struct Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics
{
	struct TitleUserWidget_eventGetMainWidget_Parms
	{
		UTitleUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventGetMainWidget_Parms, ReturnValue), Z_Construct_UClass_UTitleUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "GetMainWidget", Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::TitleUserWidget_eventGetMainWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::TitleUserWidget_eventGetMainWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleUserWidget_GetMainWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_GetMainWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execGetMainWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTitleUserWidget**)Z_Param__Result=P_THIS->GetMainWidget();
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function GetMainWidget ************************************

// ********** Begin Class UTitleUserWidget Function MainWidgetInit *********************************
struct Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "MainWidgetInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execMainWidgetInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MainWidgetInit();
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function MainWidgetInit ***********************************

// ********** Begin Class UTitleUserWidget Function SetZOrder **************************************
struct Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics
{
	struct TitleUserWidget_eventSetZOrder_Parms
	{
		int32 _Order;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::NewProp__Order = { "_Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventSetZOrder_Parms, _Order), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::NewProp__Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "SetZOrder", Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::TitleUserWidget_eventSetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::TitleUserWidget_eventSetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleUserWidget_SetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_SetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execSetZOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__Order);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZOrder(Z_Param__Order);
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function SetZOrder ****************************************

// ********** Begin Class UTitleUserWidget Function StartServer ************************************
struct Z_Construct_UFunction_UTitleUserWidget_StartServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_StartServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "StartServer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_StartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_StartServer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTitleUserWidget_StartServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_StartServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execStartServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartServer();
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function StartServer **************************************

// ********** Begin Class UTitleUserWidget Function VisibleChangeUI ********************************
struct Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics
{
	struct TitleUserWidget_eventVisibleChangeUI_Parms
	{
		ETitleUIType _Type;
		ESlateVisibility _Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Type = { "_Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventVisibleChangeUI_Parms, _Type), Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType, METADATA_PARAMS(0, nullptr) }; // 3115851734
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TitleUserWidget_eventVisibleChangeUI_Parms, _Value), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "VisibleChangeUI", Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::TitleUserWidget_eventVisibleChangeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::TitleUserWidget_eventVisibleChangeUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execVisibleChangeUI)
{
	P_GET_ENUM(ETitleUIType,Z_Param__Type);
	P_GET_ENUM(ESlateVisibility,Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VisibleChangeUI(ETitleUIType(Z_Param__Type),ESlateVisibility(Z_Param__Value));
	P_NATIVE_END;
}
// ********** End Class UTitleUserWidget Function VisibleChangeUI **********************************

// ********** Begin Class UTitleUserWidget *********************************************************
void UTitleUserWidget::StaticRegisterNativesUTitleUserWidget()
{
	UClass* Class = UTitleUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UTitleUserWidget::execConnect },
		{ "CreateChildWidget", &UTitleUserWidget::execCreateChildWidget },
		{ "GetMainWidget", &UTitleUserWidget::execGetMainWidget },
		{ "MainWidgetInit", &UTitleUserWidget::execMainWidgetInit },
		{ "SetZOrder", &UTitleUserWidget::execSetZOrder },
		{ "StartServer", &UTitleUserWidget::execStartServer },
		{ "VisibleChangeUI", &UTitleUserWidget::execVisibleChangeUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTitleUserWidget;
UClass* UTitleUserWidget::GetPrivateStaticClass()
{
	using TClass = UTitleUserWidget;
	if (!Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TitleUserWidget"),
			Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton,
			StaticRegisterNativesUTitleUserWidget,
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
	return Z_Registration_Info_UClass_UTitleUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister()
{
	return UTitleUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTitleUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Mode/Title/UI/TitleUserWidget.h" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wigets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Server" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Server" },
		{ "ModuleRelativePath", "Mode/Title/UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wigets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Wigets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Wigets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Wigets;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleUserWidget_Connect, "Connect" }, // 1540575513
		{ &Z_Construct_UFunction_UTitleUserWidget_CreateChildWidget, "CreateChildWidget" }, // 3079873092
		{ &Z_Construct_UFunction_UTitleUserWidget_GetMainWidget, "GetMainWidget" }, // 1374386805
		{ &Z_Construct_UFunction_UTitleUserWidget_MainWidgetInit, "MainWidgetInit" }, // 2092694660
		{ &Z_Construct_UFunction_UTitleUserWidget_SetZOrder, "SetZOrder" }, // 3633553385
		{ &Z_Construct_UFunction_UTitleUserWidget_StartServer, "StartServer" }, // 3726001706
		{ &Z_Construct_UFunction_UTitleUserWidget_VisibleChangeUI, "VisibleChangeUI" }, // 3999810845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, MainWidget), Z_Construct_UClass_UTitleUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidget_MetaData), NewProp_MainWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_ValueProp = { "Wigets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTitleUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_Key_KeyProp = { "Wigets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UlsanXRLibrary_ETitleUIType, METADATA_PARAMS(0, nullptr) }; // 3115851734
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets = { "Wigets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, Wigets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wigets_MetaData), NewProp_Wigets_MetaData) }; // 3115851734
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_MainWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Wigets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UlsanXRLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams = {
	&UTitleUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleUserWidget()
{
	if (!Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton, Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton;
}
UTitleUserWidget::UTitleUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleUserWidget);
UTitleUserWidget::~UTitleUserWidget() {}
// ********** End Class UTitleUserWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleUserWidget, UTitleUserWidget::StaticClass, TEXT("UTitleUserWidget"), &Z_Registration_Info_UClass_UTitleUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleUserWidget), 520086262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_3708882372(TEXT("/Script/UlsanXRLibrary"),
	Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UlsanXRLibrary_Source_UlsanXRLibrary_Mode_Title_UI_TitleUserWidget_h__Script_UlsanXRLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
