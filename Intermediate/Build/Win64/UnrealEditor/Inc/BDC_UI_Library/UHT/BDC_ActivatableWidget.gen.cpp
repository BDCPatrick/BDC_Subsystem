// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BDC_ActivatableWidget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDC_ActivatableWidget() {}
// Cross Module References
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_ActivatableWidget();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_ActivatableWidget_NoRegister();
	BDC_UI_LIBRARY_API UFunction* Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature();
	BDC_UI_LIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandleBDC();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UPackage* Z_Construct_UPackage__Script_BDC_UI_Library();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics
	{
		struct _Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms
		{
			FName ActionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library, nullptr, "InputActionExecutedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName)
{
	struct _Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
	_Script_BDC_UI_Library_eventInputActionExecutedDelegate_Parms Parms;
	Parms.ActionName=ActionName;
	InputActionExecutedDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC;
class UScriptStruct* FInputActionBindingHandleBDC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionBindingHandleBDC, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("InputActionBindingHandleBDC"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.OuterSingleton;
}
template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<FInputActionBindingHandleBDC>()
{
	return FInputActionBindingHandleBDC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionBindingHandleBDC>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		&NewStructOps,
		"InputActionBindingHandleBDC",
		nullptr,
		0,
		sizeof(FInputActionBindingHandleBDC),
		alignof(FInputActionBindingHandleBDC),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandleBDC()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.InnerSingleton, Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC.InnerSingleton;
	}
	DEFINE_FUNCTION(UBDC_ActivatableWidget::execUnregisterAllBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterAllBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_ActivatableWidget::execUnregisterBinding)
	{
		P_GET_STRUCT(FInputActionBindingHandleBDC,Z_Param_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterBinding(Z_Param_BindingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_ActivatableWidget::execRegisterBinding)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputAction);
		P_GET_UBOOL(Z_Param_bDisplayInBar);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT_REF(FInputActionBindingHandleBDC,Z_Param_Out_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBinding(Z_Param_InputAction,Z_Param_bDisplayInBar,FInputActionExecutedDelegate(Z_Param_Out_Callback),Z_Param_Out_BindingHandle);
		P_NATIVE_END;
	}
	void UBDC_ActivatableWidget::StaticRegisterNativesUBDC_ActivatableWidget()
	{
		UClass* Class = UBDC_ActivatableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterBinding", &UBDC_ActivatableWidget::execRegisterBinding },
			{ "UnregisterAllBindings", &UBDC_ActivatableWidget::execUnregisterAllBindings },
			{ "UnregisterBinding", &UBDC_ActivatableWidget::execUnregisterBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics
	{
		struct BDC_ActivatableWidget_eventRegisterBinding_Parms
		{
			FDataTableRowHandle InputAction;
			bool bDisplayInBar;
			FScriptDelegate Callback;
			FInputActionBindingHandleBDC BindingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputAction;
		static void NewProp_bDisplayInBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_ActivatableWidget_eventRegisterBinding_Parms, InputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
	void Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_bDisplayInBar_SetBit(void* Obj)
	{
		((BDC_ActivatableWidget_eventRegisterBinding_Parms*)Obj)->bDisplayInBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_bDisplayInBar = { "bDisplayInBar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_ActivatableWidget_eventRegisterBinding_Parms), &Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_bDisplayInBar_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_ActivatableWidget_eventRegisterBinding_Parms, Callback), Z_Construct_UDelegateFunction_BDC_UI_Library_InputActionExecutedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_Callback_MetaData) }; // 2684660445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_ActivatableWidget_eventRegisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandleBDC, METADATA_PARAMS(0, nullptr) }; // 4181442816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_bDisplayInBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_ActivatableWidget, nullptr, "RegisterBinding", nullptr, nullptr, Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::BDC_ActivatableWidget_eventRegisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::BDC_ActivatableWidget_eventRegisterBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_ActivatableWidget, nullptr, "UnregisterAllBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics
	{
		struct BDC_ActivatableWidget_eventUnregisterBinding_Parms
		{
			FInputActionBindingHandleBDC BindingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_ActivatableWidget_eventUnregisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandleBDC, METADATA_PARAMS(0, nullptr) }; // 4181442816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_ActivatableWidget, nullptr, "UnregisterBinding", nullptr, nullptr, Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::BDC_ActivatableWidget_eventUnregisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::BDC_ActivatableWidget_eventUnregisterBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDC_ActivatableWidget);
	UClass* Z_Construct_UClass_UBDC_ActivatableWidget_NoRegister()
	{
		return UBDC_ActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBDC_ActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBDC_ActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_ActivatableWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBDC_ActivatableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBDC_ActivatableWidget_RegisterBinding, "RegisterBinding" }, // 1766847209
		{ &Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterAllBindings, "UnregisterAllBindings" }, // 448548695
		{ &Z_Construct_UFunction_UBDC_ActivatableWidget_UnregisterBinding, "UnregisterBinding" }, // 299976289
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_ActivatableWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_ActivatableWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extends UCommonActivatableWidget with Blueprint-visible functions for registering additional input action bindings.\n */" },
#endif
		{ "IncludePath", "BDC_ActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/BDC_ActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extends UCommonActivatableWidget with Blueprint-visible functions for registering additional input action bindings." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBDC_ActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBDC_ActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDC_ActivatableWidget_Statics::ClassParams = {
		&UBDC_ActivatableWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_ActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDC_ActivatableWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBDC_ActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_UBDC_ActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDC_ActivatableWidget.OuterSingleton, Z_Construct_UClass_UBDC_ActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBDC_ActivatableWidget.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UClass* StaticClass<UBDC_ActivatableWidget>()
	{
		return UBDC_ActivatableWidget::StaticClass();
	}
	UBDC_ActivatableWidget::UBDC_ActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDC_ActivatableWidget);
	UBDC_ActivatableWidget::~UBDC_ActivatableWidget() {}
	struct Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ScriptStructInfo[] = {
		{ FInputActionBindingHandleBDC::StaticStruct, Z_Construct_UScriptStruct_FInputActionBindingHandleBDC_Statics::NewStructOps, TEXT("InputActionBindingHandleBDC"), &Z_Registration_Info_UScriptStruct_InputActionBindingHandleBDC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionBindingHandleBDC), 4181442816U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBDC_ActivatableWidget, UBDC_ActivatableWidget::StaticClass, TEXT("UBDC_ActivatableWidget"), &Z_Registration_Info_UClass_UBDC_ActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDC_ActivatableWidget), 2506818590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_1002725628(TEXT("/Script/BDC_UI_Library"),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_ActivatableWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
