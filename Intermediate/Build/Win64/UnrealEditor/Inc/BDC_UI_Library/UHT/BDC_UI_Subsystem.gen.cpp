// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BDC_UI_Subsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDC_UI_Subsystem() {}
// Cross Module References
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_Interface_NoRegister();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_Subsystem();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_Subsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BDC_UI_Library();
// End Cross Module References
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execOverrideLast)
	{
		P_GET_OBJECT(UWidget,Z_Param_NewLast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideLast(Z_Param_NewLast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execInvalidateLastOfUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UI_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidateLastOfUI(Z_Param_UI_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execInvalidateSelections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidateSelections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execGetSelections)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LastUI);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_Last);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_Current);
		P_GET_UBOOL_REF(Z_Param_Out_bValidLast);
		P_GET_UBOOL_REF(Z_Param_Out_bValidCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelections(Z_Param_Out_LastUI,Z_Param_Out_Last,Z_Param_Out_Current,Z_Param_Out_bValidLast,Z_Param_Out_bValidCurrent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execSetCurrentUI)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewCurrentUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentUI(Z_Param_NewCurrentUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execGetLastOfUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UI_ID);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_LastOf);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastOfUI(Z_Param_UI_ID,Z_Param_Out_LastOf,Z_Param_Out_bIsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execSetLastofUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UI_ID);
		P_GET_OBJECT(UWidget,Z_Param_LastSelectedWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastofUI(Z_Param_UI_ID,Z_Param_LastSelectedWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_UI_Subsystem::execSelectNewWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_NewSelectedWidget);
		P_GET_UBOOL(Z_Param_bOverrideLastSelected);
		P_GET_UBOOL(Z_Param_bFocusNewSelected);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_NewCurrent);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_OldCurrent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNewWidget(Z_Param_NewSelectedWidget,Z_Param_bOverrideLastSelected,Z_Param_bFocusNewSelected,Z_Param_Out_NewCurrent,Z_Param_Out_OldCurrent);
		P_NATIVE_END;
	}
	void UBDC_UI_Subsystem::StaticRegisterNativesUBDC_UI_Subsystem()
	{
		UClass* Class = UBDC_UI_Subsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastOfUI", &UBDC_UI_Subsystem::execGetLastOfUI },
			{ "GetSelections", &UBDC_UI_Subsystem::execGetSelections },
			{ "InvalidateLastOfUI", &UBDC_UI_Subsystem::execInvalidateLastOfUI },
			{ "InvalidateSelections", &UBDC_UI_Subsystem::execInvalidateSelections },
			{ "OverrideLast", &UBDC_UI_Subsystem::execOverrideLast },
			{ "SelectNewWidget", &UBDC_UI_Subsystem::execSelectNewWidget },
			{ "SetCurrentUI", &UBDC_UI_Subsystem::execSetCurrentUI },
			{ "SetLastofUI", &UBDC_UI_Subsystem::execSetLastofUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics
	{
		struct BDC_UI_Subsystem_eventGetLastOfUI_Parms
		{
			FString UI_ID;
			UWidget* LastOf;
			bool bIsValid;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UI_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOf_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastOf;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_UI_ID = { "UI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventGetLastOfUI_Parms, UI_ID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_LastOf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_LastOf = { "LastOf", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventGetLastOfUI_Parms, LastOf), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_LastOf_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_LastOf_MetaData) };
	void Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((BDC_UI_Subsystem_eventGetLastOfUI_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Subsystem_eventGetLastOfUI_Parms), &Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_UI_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_LastOf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::NewProp_bIsValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the Widget set in the SetLastOfUI, called by the Identifier String.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the Widget set in the SetLastOfUI, called by the Identifier String." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "GetLastOfUI", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::BDC_UI_Subsystem_eventGetLastOfUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::BDC_UI_Subsystem_eventGetLastOfUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics
	{
		struct BDC_UI_Subsystem_eventGetSelections_Parms
		{
			FName LastUI;
			UWidget* Last;
			UWidget* Current;
			bool bValidLast;
			bool bValidCurrent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LastUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Last_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Last;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Current;
		static void NewProp_bValidLast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidLast;
		static void NewProp_bValidCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_LastUI = { "LastUI", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventGetSelections_Parms, LastUI), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Last_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Last = { "Last", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventGetSelections_Parms, Last), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Last_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Last_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Current_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventGetSelections_Parms, Current), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Current_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Current_MetaData) };
	void Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidLast_SetBit(void* Obj)
	{
		((BDC_UI_Subsystem_eventGetSelections_Parms*)Obj)->bValidLast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidLast = { "bValidLast", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Subsystem_eventGetSelections_Parms), &Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidLast_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidCurrent_SetBit(void* Obj)
	{
		((BDC_UI_Subsystem_eventGetSelections_Parms*)Obj)->bValidCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidCurrent = { "bValidCurrent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Subsystem_eventGetSelections_Parms), &Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_LastUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Last,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidLast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::NewProp_bValidCurrent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the Selections and the CurrentUI Name\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Selections and the CurrentUI Name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "GetSelections", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::BDC_UI_Subsystem_eventGetSelections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::BDC_UI_Subsystem_eventGetSelections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics
	{
		struct BDC_UI_Subsystem_eventInvalidateLastOfUI_Parms
		{
			FString UI_ID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UI_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::NewProp_UI_ID = { "UI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventInvalidateLastOfUI_Parms, UI_ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::NewProp_UI_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove LastOfUI Selections\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove LastOfUI Selections" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "InvalidateLastOfUI", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::BDC_UI_Subsystem_eventInvalidateLastOfUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::BDC_UI_Subsystem_eventInvalidateLastOfUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove all Selections and Names.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all Selections and Names." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "InvalidateSelections", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics
	{
		struct BDC_UI_Subsystem_eventOverrideLast_Parms
		{
			UWidget* NewLast;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLast_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLast;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::NewProp_NewLast_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::NewProp_NewLast = { "NewLast", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventOverrideLast_Parms, NewLast), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::NewProp_NewLast_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::NewProp_NewLast_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::NewProp_NewLast,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Override the LastSelected Value, only.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the LastSelected Value, only." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "OverrideLast", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::BDC_UI_Subsystem_eventOverrideLast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::BDC_UI_Subsystem_eventOverrideLast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics
	{
		struct BDC_UI_Subsystem_eventSelectNewWidget_Parms
		{
			UWidget* NewSelectedWidget;
			bool bOverrideLastSelected;
			bool bFocusNewSelected;
			UWidget* NewCurrent;
			UWidget* OldCurrent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSelectedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSelectedWidget;
		static void NewProp_bOverrideLastSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLastSelected;
		static void NewProp_bFocusNewSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusNewSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewSelectedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewSelectedWidget = { "NewSelectedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSelectNewWidget_Parms, NewSelectedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewSelectedWidget_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewSelectedWidget_MetaData) };
	void Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bOverrideLastSelected_SetBit(void* Obj)
	{
		((BDC_UI_Subsystem_eventSelectNewWidget_Parms*)Obj)->bOverrideLastSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bOverrideLastSelected = { "bOverrideLastSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Subsystem_eventSelectNewWidget_Parms), &Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bOverrideLastSelected_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bFocusNewSelected_SetBit(void* Obj)
	{
		((BDC_UI_Subsystem_eventSelectNewWidget_Parms*)Obj)->bFocusNewSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bFocusNewSelected = { "bFocusNewSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Subsystem_eventSelectNewWidget_Parms), &Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bFocusNewSelected_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewCurrent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewCurrent = { "NewCurrent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSelectNewWidget_Parms, NewCurrent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewCurrent_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewCurrent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_OldCurrent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_OldCurrent = { "OldCurrent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSelectNewWidget_Parms, OldCurrent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_OldCurrent_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_OldCurrent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewSelectedWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bOverrideLastSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_bFocusNewSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_NewCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::NewProp_OldCurrent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set a new CurrentSelected Widget. WidgetHover and WidgetUnhover Interfaces are called on the Old and New Selections.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a new CurrentSelected Widget. WidgetHover and WidgetUnhover Interfaces are called on the Old and New Selections." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "SelectNewWidget", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::BDC_UI_Subsystem_eventSelectNewWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::BDC_UI_Subsystem_eventSelectNewWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics
	{
		struct BDC_UI_Subsystem_eventSetCurrentUI_Parms
		{
			FName NewCurrentUI;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewCurrentUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::NewProp_NewCurrentUI = { "NewCurrentUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSetCurrentUI_Parms, NewCurrentUI), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::NewProp_NewCurrentUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper Function to hold the name of the current UI\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper Function to hold the name of the current UI" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "SetCurrentUI", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::BDC_UI_Subsystem_eventSetCurrentUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::BDC_UI_Subsystem_eventSetCurrentUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics
	{
		struct BDC_UI_Subsystem_eventSetLastofUI_Parms
		{
			FString UI_ID;
			UWidget* LastSelectedWidget;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UI_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSelectedWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_UI_ID = { "UI_ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSetLastofUI_Parms, UI_ID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_LastSelectedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_LastSelectedWidget = { "LastSelectedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Subsystem_eventSetLastofUI_Parms, LastSelectedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_LastSelectedWidget_MetaData), Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_LastSelectedWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_UI_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::NewProp_LastSelectedWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the Widget that was selected on a Different WidgetSwitcher Page. If going back to that Page, this Widget can then be focused again.Using a String as Identifier.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Widget that was selected on a Different WidgetSwitcher Page. If going back to that Page, this Widget can then be focused again.Using a String as Identifier." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Subsystem, nullptr, "SetLastofUI", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::BDC_UI_Subsystem_eventSetLastofUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::BDC_UI_Subsystem_eventSetLastofUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDC_UI_Subsystem);
	UClass* Z_Construct_UClass_UBDC_UI_Subsystem_NoRegister()
	{
		return UBDC_UI_Subsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBDC_UI_Subsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSelected_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelected_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUI_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentUI;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastOfUI_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastOfUI_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOfUI_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LastOfUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInActiveHold_MetaData[];
#endif
		static void NewProp_IsInActiveHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInActiveHold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHoldKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHoldKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsesGamepad_MetaData[];
#endif
		static void NewProp_UsesGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsesGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBDC_UI_Subsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBDC_UI_Subsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_GetLastOfUI, "GetLastOfUI" }, // 2813101086
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_GetSelections, "GetSelections" }, // 4093372990
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateLastOfUI, "InvalidateLastOfUI" }, // 3565202904
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_InvalidateSelections, "InvalidateSelections" }, // 260569326
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_OverrideLast, "OverrideLast" }, // 1083421518
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_SelectNewWidget, "SelectNewWidget" }, // 1380528312
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_SetCurrentUI, "SetCurrentUI" }, // 1826211949
		{ &Z_Construct_UFunction_UBDC_UI_Subsystem_SetLastofUI, "SetLastofUI" }, // 1486013858
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A helper class to provide Widget informations to CommonUI Navigation.\n */" },
#endif
		{ "DisplayName", "BDC_CommonUI" },
		{ "IncludePath", "BDC_UI_Subsystem.h" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A helper class to provide Widget informations to CommonUI Navigation." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastSelected_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastSelected = { "LastSelected", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDC_UI_Subsystem, LastSelected), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastSelected_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastSelected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentSelected_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The last selected Widget of an unspecific UI.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last selected Widget of an unspecific UI." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentSelected = { "CurrentSelected", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDC_UI_Subsystem, CurrentSelected), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentSelected_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentSelected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current selected Widget.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current selected Widget." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentUI = { "CurrentUI", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDC_UI_Subsystem, CurrentUI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentUI_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentUI_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_ValueProp = { "LastOfUI", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_Key_KeyProp = { "LastOfUI_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the current UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the current UI" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI = { "LastOfUI", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDC_UI_Subsystem, LastOfUI), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold_MetaData[] = {
		{ "Category", "BDC_CommonUI|HoldingSystem" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
	};
#endif
	void Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold_SetBit(void* Obj)
	{
		((UBDC_UI_Subsystem*)Obj)->IsInActiveHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold = { "IsInActiveHold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBDC_UI_Subsystem), &Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_ActiveHoldKey_MetaData[] = {
		{ "Category", "BDC_CommonUI|HoldingSystem" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_ActiveHoldKey = { "ActiveHoldKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDC_UI_Subsystem, ActiveHoldKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_ActiveHoldKey_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_ActiveHoldKey_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad_MetaData[] = {
		{ "Category", "BDC_CommonUI|Helpers" },
		{ "ModuleRelativePath", "Public/BDC_UI_Subsystem.h" },
	};
#endif
	void Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad_SetBit(void* Obj)
	{
		((UBDC_UI_Subsystem*)Obj)->UsesGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad = { "UsesGamepad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBDC_UI_Subsystem), &Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad_MetaData), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBDC_UI_Subsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_CurrentUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_LastOfUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_IsInActiveHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_ActiveHoldKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDC_UI_Subsystem_Statics::NewProp_UsesGamepad,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBDC_UI_Interface_NoRegister, (int32)VTABLE_OFFSET(UBDC_UI_Subsystem, IBDC_UI_Interface), false },  // 2438125743
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBDC_UI_Subsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBDC_UI_Subsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDC_UI_Subsystem_Statics::ClassParams = {
		&UBDC_UI_Subsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBDC_UI_Subsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDC_UI_Subsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Subsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBDC_UI_Subsystem()
	{
		if (!Z_Registration_Info_UClass_UBDC_UI_Subsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDC_UI_Subsystem.OuterSingleton, Z_Construct_UClass_UBDC_UI_Subsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBDC_UI_Subsystem.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UClass* StaticClass<UBDC_UI_Subsystem>()
	{
		return UBDC_UI_Subsystem::StaticClass();
	}
	UBDC_UI_Subsystem::UBDC_UI_Subsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDC_UI_Subsystem);
	UBDC_UI_Subsystem::~UBDC_UI_Subsystem() {}
	struct Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBDC_UI_Subsystem, UBDC_UI_Subsystem::StaticClass, TEXT("UBDC_UI_Subsystem"), &Z_Registration_Info_UClass_UBDC_UI_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDC_UI_Subsystem), 725296762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_141171580(TEXT("/Script/BDC_UI_Library"),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
