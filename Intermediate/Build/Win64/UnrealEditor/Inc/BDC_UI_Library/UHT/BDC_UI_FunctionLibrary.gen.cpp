// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BDC_UI_FunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "BDC_UI_Interface.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDC_UI_FunctionLibrary() {}
// Cross Module References
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_FunctionLibrary();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_FunctionLibrary_NoRegister();
	BDC_UI_LIBRARY_API UEnum* Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn();
	BDC_UI_LIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLineSystem();
	BDC_UI_LIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FPanelSlotSetting();
	BDC_UI_LIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FSourceTargetOffset();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_BDC_UI_Library();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeyHitReturn;
	static UEnum* EKeyHitReturn_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKeyHitReturn.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKeyHitReturn.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("EKeyHitReturn"));
		}
		return Z_Registration_Info_UEnum_EKeyHitReturn.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EKeyHitReturn>()
	{
		return EKeyHitReturn_StaticEnum();
	}
	struct Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enumerators[] = {
		{ "EKeyHitReturn::KeyIsHit", (int64)EKeyHitReturn::KeyIsHit },
		{ "EKeyHitReturn::KeyIsNotHit", (int64)EKeyHitReturn::KeyIsNotHit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This Enum is to handle Return Executions of the GetKeyDataOfInput Function.\n" },
#endif
		{ "KeyIsHit.DisplayName", "Is Key" },
		{ "KeyIsHit.Name", "EKeyHitReturn::KeyIsHit" },
		{ "KeyIsNotHit.DisplayName", "is Not Key" },
		{ "KeyIsNotHit.Name", "EKeyHitReturn::KeyIsNotHit" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Enum is to handle Return Executions of the GetKeyDataOfInput Function." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		"EKeyHitReturn",
		"EKeyHitReturn",
		Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn()
	{
		if (!Z_Registration_Info_UEnum_EKeyHitReturn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeyHitReturn.InnerSingleton, Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKeyHitReturn.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceTargetOffset;
class UScriptStruct* FSourceTargetOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceTargetOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceTargetOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceTargetOffset, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("SourceTargetOffset"));
	}
	return Z_Registration_Info_UScriptStruct_SourceTargetOffset.OuterSingleton;
}
template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<FSourceTargetOffset>()
{
	return FSourceTargetOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceTargetOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Source_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Source_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceTargetOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_X_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_X = { "Source_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceTargetOffset, Source_X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_X_MetaData), Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_Y_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_Y = { "Source_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceTargetOffset, Source_Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_Y_MetaData), Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_Y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_X_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_X = { "Target_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceTargetOffset, Target_X), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_X_MetaData), Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_X_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_Y_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_Y = { "Target_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceTargetOffset, Target_Y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_Y_MetaData), Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_Y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Source_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewProp_Target_Y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		&NewStructOps,
		"SourceTargetOffset",
		Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::PropPointers),
		sizeof(FSourceTargetOffset),
		alignof(FSourceTargetOffset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSourceTargetOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceTargetOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceTargetOffset.InnerSingleton, Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceTargetOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineSystem;
class UScriptStruct* FLineSystem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineSystem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineSystem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineSystem, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("LineSystem"));
	}
	return Z_Registration_Info_UScriptStruct_LineSystem.OuterSingleton;
}
template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<FLineSystem>()
{
	return FLineSystem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLineSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LineTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineSystem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLineSystem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineSystem>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints_Inner = { "LinePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints = { "LinePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineSystem, LinePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints_MetaData), Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LineTag_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LineTag = { "LineTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineSystem, LineTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LineTag_MetaData), Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LineTag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LinePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineSystem_Statics::NewProp_LineTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineSystem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		&NewStructOps,
		"LineSystem",
		Z_Construct_UScriptStruct_FLineSystem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineSystem_Statics::PropPointers),
		sizeof(FLineSystem),
		alignof(FLineSystem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineSystem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineSystem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineSystem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLineSystem()
	{
		if (!Z_Registration_Info_UScriptStruct_LineSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineSystem.InnerSingleton, Z_Construct_UScriptStruct_FLineSystem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LineSystem.InnerSingleton;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetVisibleOfBool)
	{
		P_GET_UBOOL(Z_Param_bInput);
		P_GET_UBOOL(Z_Param_bInverse);
		P_GET_UBOOL(Z_Param_bFullVisible);
		P_GET_ENUM_REF(ESlateVisibility,Z_Param_Out_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetVisibleOfBool(Z_Param_bInput,Z_Param_bInverse,Z_Param_bFullVisible,(ESlateVisibility&)(Z_Param_Out_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetLinePointsBetween)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Source);
		P_GET_STRUCT(FVector2D,Z_Param_Target);
		P_GET_STRUCT(FVector2D,Z_Param_SourceOffset);
		P_GET_STRUCT(FVector2D,Z_Param_TargetOffset);
		P_GET_STRUCT(FSourceTargetOffset,Z_Param_LineOffset);
		P_GET_UBOOL(Z_Param_bStraightLine);
		P_GET_PROPERTY(FNameProperty,Z_Param_TagOfLine);
		P_GET_STRUCT_REF(FLineSystem,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetLinePointsBetween(Z_Param_Source,Z_Param_Target,Z_Param_SourceOffset,Z_Param_TargetOffset,Z_Param_LineOffset,Z_Param_bStraightLine,Z_Param_TagOfLine,Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetWidgetLookAt)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Source);
		P_GET_STRUCT(FVector2D,Z_Param_Target);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetWidgetLookAt(Z_Param_Source,Z_Param_Target,Z_Param_Out_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execSetupPanelSlot)
	{
		P_GET_OBJECT(UPanelSlot,Z_Param_Slot);
		P_GET_STRUCT(FPanelSlotSetting,Z_Param_Settings);
		P_GET_OBJECT_REF(UPanelSlot,Z_Param_Out_ReturnedSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::SetupPanelSlot(Z_Param_Slot,Z_Param_Settings,Z_Param_Out_ReturnedSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetEnhancedKeyOfInput)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_OfContext);
		P_GET_OBJECT(UInputAction,Z_Param_OfAction);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_GET_UBOOL_REF(Z_Param_Out_bHasHoldAction);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HoldTarget);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_TargetedKey);
		P_GET_ENUM_REF(EKeyHitReturn,Z_Param_Out_Returns);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetEnhancedKeyOfInput(Z_Param_OfContext,Z_Param_OfAction,Z_Param_InputKey,Z_Param_Out_bHasHoldAction,Z_Param_Out_HoldTarget,Z_Param_Out_TargetedKey,(EKeyHitReturn&)(Z_Param_Out_Returns));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetKeyDataOfInput)
	{
		P_GET_ENUM(ECommonInputType,Z_Param_InputType);
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputData);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_GET_UBOOL_REF(Z_Param_Out_bHasHoldAction);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HoldTarget);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_TargetedKey);
		P_GET_ENUM_REF(EKeyHitReturn,Z_Param_Out_Returns);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetKeyDataOfInput(ECommonInputType(Z_Param_InputType),Z_Param_InputData,Z_Param_InputKey,Z_Param_Out_bHasHoldAction,Z_Param_Out_HoldTarget,Z_Param_Out_TargetedKey,(EKeyHitReturn&)(Z_Param_Out_Returns));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetEnhancedKeys)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_OfContext);
		P_GET_OBJECT(UInputAction,Z_Param_OfAction);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_FoundKeys);
		P_GET_TARRAY_REF(FText,Z_Param_Out_InputNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetEnhancedKeys(Z_Param_OfContext,Z_Param_OfAction,Z_Param_Out_FoundKeys,Z_Param_Out_InputNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetCommonKey)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputData);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_FoundKeyKeyboard);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_FoundKeyGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetCommonKey(Z_Param_InputData,Z_Param_Out_KeyName,Z_Param_Out_FoundKeyKeyboard,Z_Param_Out_FoundKeyGamepad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_FunctionLibrary::execGetKeyIcon)
	{
		P_GET_OBJECT(UObject,Z_Param_IconDataObject);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_KeyIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBDC_UI_FunctionLibrary::GetKeyIcon(Z_Param_IconDataObject,Z_Param_InputKey,Z_Param_Out_KeyIcon);
		P_NATIVE_END;
	}
	void UBDC_UI_FunctionLibrary::StaticRegisterNativesUBDC_UI_FunctionLibrary()
	{
		UClass* Class = UBDC_UI_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommonKey", &UBDC_UI_FunctionLibrary::execGetCommonKey },
			{ "GetEnhancedKeyOfInput", &UBDC_UI_FunctionLibrary::execGetEnhancedKeyOfInput },
			{ "GetEnhancedKeys", &UBDC_UI_FunctionLibrary::execGetEnhancedKeys },
			{ "GetKeyDataOfInput", &UBDC_UI_FunctionLibrary::execGetKeyDataOfInput },
			{ "GetKeyIcon", &UBDC_UI_FunctionLibrary::execGetKeyIcon },
			{ "GetLinePointsBetween", &UBDC_UI_FunctionLibrary::execGetLinePointsBetween },
			{ "GetVisibleOfBool", &UBDC_UI_FunctionLibrary::execGetVisibleOfBool },
			{ "GetWidgetLookAt", &UBDC_UI_FunctionLibrary::execGetWidgetLookAt },
			{ "SetupPanelSlot", &UBDC_UI_FunctionLibrary::execSetupPanelSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetCommonKey_Parms
		{
			FDataTableRowHandle InputData;
			FText KeyName;
			FKey FoundKeyKeyboard;
			FKey FoundKeyGamepad;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UECodeGen_Private::FTextPropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundKeyKeyboard;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundKeyGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetCommonKey_Parms, InputData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetCommonKey_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_FoundKeyKeyboard = { "FoundKeyKeyboard", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetCommonKey_Parms, FoundKeyKeyboard), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_FoundKeyGamepad = { "FoundKeyGamepad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetCommonKey_Parms, FoundKeyGamepad), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_InputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_FoundKeyKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::NewProp_FoundKeyGamepad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Key of CommonInput\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Key of CommonInput" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetCommonKey", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::BDC_UI_FunctionLibrary_eventGetCommonKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::BDC_UI_FunctionLibrary_eventGetCommonKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms
		{
			UInputMappingContext* OfContext;
			UInputAction* OfAction;
			FKey InputKey;
			bool bHasHoldAction;
			float HoldTarget;
			FKey TargetedKey;
			EKeyHitReturn Returns;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OfContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OfAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static void NewProp_bHasHoldAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHoldAction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetedKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Returns_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Returns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_OfContext = { "OfContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, OfContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_OfAction = { "OfAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, OfAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_bHasHoldAction_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms*)Obj)->bHasHoldAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_bHasHoldAction = { "bHasHoldAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_bHasHoldAction_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_HoldTarget = { "HoldTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, HoldTarget), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_TargetedKey = { "TargetedKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, TargetedKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_Returns_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_Returns = { "Returns", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms, Returns), Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn, METADATA_PARAMS(0, nullptr) }; // 1736496097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_OfContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_OfAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_bHasHoldAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_HoldTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_TargetedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_Returns_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::NewProp_Returns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ask if an Input Key is equal to a Key in the Enhanced Input Context. Useful for OnKeyDown/Up functions.\n" },
#endif
		{ "ExpandEnumAsExecs", "Returns" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ask if an Input Key is equal to a Key in the Enhanced Input Context. Useful for OnKeyDown/Up functions." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetEnhancedKeyOfInput", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::BDC_UI_FunctionLibrary_eventGetEnhancedKeyOfInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms
		{
			UInputMappingContext* OfContext;
			UInputAction* OfAction;
			TArray<FKey> FoundKeys;
			TArray<FText> InputNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OfContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OfAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundKeys;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_OfContext = { "OfContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms, OfContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_OfAction = { "OfAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms, OfAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_FoundKeys_Inner = { "FoundKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_FoundKeys = { "FoundKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms, FoundKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_InputNames_Inner = { "InputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_InputNames = { "InputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms, InputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_OfContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_OfAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_FoundKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_FoundKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_InputNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::NewProp_InputNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Key of Enhanced Input\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Key of Enhanced Input" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetEnhancedKeys", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::BDC_UI_FunctionLibrary_eventGetEnhancedKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms
		{
			ECommonInputType InputType;
			FDataTableRowHandle InputData;
			FKey InputKey;
			bool bHasHoldAction;
			float HoldTarget;
			FKey TargetedKey;
			EKeyHitReturn Returns;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static void NewProp_bHasHoldAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHoldAction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetedKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Returns_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Returns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(0, nullptr) }; // 2481650305
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, InputData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_bHasHoldAction_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms*)Obj)->bHasHoldAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_bHasHoldAction = { "bHasHoldAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_bHasHoldAction_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_HoldTarget = { "HoldTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, HoldTarget), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_TargetedKey = { "TargetedKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, TargetedKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_Returns_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_Returns = { "Returns", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms, Returns), Z_Construct_UEnum_BDC_UI_Library_EKeyHitReturn, METADATA_PARAMS(0, nullptr) }; // 1736496097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_bHasHoldAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_HoldTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_TargetedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_Returns_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::NewProp_Returns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ask if an Input Key is equal to a Key in the CommonUI Input DataTables. Useful for OnKeyDown/Up functions.\n" },
#endif
		{ "ExpandEnumAsExecs", "Returns" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ask if an Input Key is equal to a Key in the CommonUI Input DataTables. Useful for OnKeyDown/Up functions." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetKeyDataOfInput", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::BDC_UI_FunctionLibrary_eventGetKeyDataOfInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms
		{
			UObject* IconDataObject;
			FKey InputKey;
			UTexture2D* KeyIcon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconDataObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_IconDataObject = { "IconDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms, IconDataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_KeyIcon = { "KeyIcon", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms, KeyIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_IconDataObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::NewProp_KeyIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get an icon of a Key\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an icon of a Key" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetKeyIcon", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::BDC_UI_FunctionLibrary_eventGetKeyIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms
		{
			FVector2D Source;
			FVector2D Target;
			FVector2D SourceOffset;
			FVector2D TargetOffset;
			FSourceTargetOffset LineOffset;
			bool bStraightLine;
			FName TagOfLine;
			FLineSystem Points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineOffset;
		static void NewProp_bStraightLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStraightLine;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagOfLine;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, Source), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, Target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_SourceOffset = { "SourceOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, SourceOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, TargetOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_LineOffset = { "LineOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, LineOffset), Z_Construct_UScriptStruct_FSourceTargetOffset, METADATA_PARAMS(0, nullptr) }; // 1032884414
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_bStraightLine_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms*)Obj)->bStraightLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_bStraightLine = { "bStraightLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_bStraightLine_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_TagOfLine = { "TagOfLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, TagOfLine), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms, Points), Z_Construct_UScriptStruct_FLineSystem, METADATA_PARAMS(0, nullptr) }; // 2552727782
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_SourceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_TargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_LineOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_bStraightLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_TagOfLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the Points between two Positions\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Points between two Positions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetLinePointsBetween", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::BDC_UI_FunctionLibrary_eventGetLinePointsBetween_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms
		{
			bool bInput;
			bool bInverse;
			bool bFullVisible;
			ESlateVisibility Visibility;
		};
		static void NewProp_bInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
		static void NewProp_bInverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverse;
		static void NewProp_bFullVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInput_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms*)Obj)->bInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInverse_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms*)Obj)->bInverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInverse = { "bInverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInverse_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bFullVisible_SetBit(void* Obj)
	{
		((BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms*)Obj)->bFullVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bFullVisible = { "bFullVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms), &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bFullVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bInverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_bFullVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::NewProp_Visibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a Visibility based on a bool\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a Visibility based on a bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetVisibleOfBool", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::BDC_UI_FunctionLibrary_eventGetVisibleOfBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics
	{
		struct BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms
		{
			FVector2D Source;
			FVector2D Target;
			float Angle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms, Source), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms, Target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::NewProp_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the Look At Angle of two Vector2D Positions\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Look At Angle of two Vector2D Positions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "GetWidgetLookAt", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::BDC_UI_FunctionLibrary_eventGetWidgetLookAt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics
	{
		struct BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms
		{
			UPanelSlot* Slot;
			FPanelSlotSetting Settings;
			UPanelSlot* ReturnedSlot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnedSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnedSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms, Slot), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Slot_MetaData), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Slot_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms, Settings), Z_Construct_UScriptStruct_FPanelSlotSetting, METADATA_PARAMS(0, nullptr) }; // 49781049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_ReturnedSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_ReturnedSlot = { "ReturnedSlot", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms, ReturnedSlot), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_ReturnedSlot_MetaData), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_ReturnedSlot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::NewProp_ReturnedSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setup a Canvas/Overlay Slots Anchor, Offset and Alignment.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setup a Canvas/Overlay Slots Anchor, Offset and Alignment." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_FunctionLibrary, nullptr, "SetupPanelSlot", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::BDC_UI_FunctionLibrary_eventSetupPanelSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDC_UI_FunctionLibrary);
	UClass* Z_Construct_UClass_UBDC_UI_FunctionLibrary_NoRegister()
	{
		return UBDC_UI_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetCommonKey, "GetCommonKey" }, // 3929503250
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeyOfInput, "GetEnhancedKeyOfInput" }, // 3186988441
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetEnhancedKeys, "GetEnhancedKeys" }, // 2873215849
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyDataOfInput, "GetKeyDataOfInput" }, // 770683975
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetKeyIcon, "GetKeyIcon" }, // 885538277
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetLinePointsBetween, "GetLinePointsBetween" }, // 2926887022
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetVisibleOfBool, "GetVisibleOfBool" }, // 2801529333
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_GetWidgetLookAt, "GetWidgetLookAt" }, // 1838543540
		{ &Z_Construct_UFunction_UBDC_UI_FunctionLibrary_SetupPanelSlot, "SetupPanelSlot" }, // 4188204233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BDC_UI_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BDC_UI_FunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBDC_UI_FunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::ClassParams = {
		&UBDC_UI_FunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBDC_UI_FunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBDC_UI_FunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDC_UI_FunctionLibrary.OuterSingleton, Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBDC_UI_FunctionLibrary.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UClass* StaticClass<UBDC_UI_FunctionLibrary>()
	{
		return UBDC_UI_FunctionLibrary::StaticClass();
	}
	UBDC_UI_FunctionLibrary::UBDC_UI_FunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDC_UI_FunctionLibrary);
	UBDC_UI_FunctionLibrary::~UBDC_UI_FunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::EnumInfo[] = {
		{ EKeyHitReturn_StaticEnum, TEXT("EKeyHitReturn"), &Z_Registration_Info_UEnum_EKeyHitReturn, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1736496097U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSourceTargetOffset::StaticStruct, Z_Construct_UScriptStruct_FSourceTargetOffset_Statics::NewStructOps, TEXT("SourceTargetOffset"), &Z_Registration_Info_UScriptStruct_SourceTargetOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceTargetOffset), 1032884414U) },
		{ FLineSystem::StaticStruct, Z_Construct_UScriptStruct_FLineSystem_Statics::NewStructOps, TEXT("LineSystem"), &Z_Registration_Info_UScriptStruct_LineSystem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineSystem), 2552727782U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBDC_UI_FunctionLibrary, UBDC_UI_FunctionLibrary::StaticClass, TEXT("UBDC_UI_FunctionLibrary"), &Z_Registration_Info_UClass_UBDC_UI_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDC_UI_FunctionLibrary), 58384120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_3178055085(TEXT("/Script/BDC_UI_Library"),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
