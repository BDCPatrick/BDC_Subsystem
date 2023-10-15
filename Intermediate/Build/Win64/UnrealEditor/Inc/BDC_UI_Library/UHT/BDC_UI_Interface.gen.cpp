// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BDC_UI_Interface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDC_UI_Interface() {}
// Cross Module References
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_Interface();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_UI_Interface_NoRegister();
	BDC_UI_LIBRARY_API UEnum* Z_Construct_UEnum_BDC_UI_Library_EAlignH();
	BDC_UI_LIBRARY_API UEnum* Z_Construct_UEnum_BDC_UI_Library_EAlignV();
	BDC_UI_LIBRARY_API UEnum* Z_Construct_UEnum_BDC_UI_Library_EHUD_Container();
	BDC_UI_LIBRARY_API UEnum* Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA();
	BDC_UI_LIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FPanelSlotSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BDC_UI_Library();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHUD_Container;
	static UEnum* EHUD_Container_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHUD_Container.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHUD_Container.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BDC_UI_Library_EHUD_Container, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("EHUD_Container"));
		}
		return Z_Registration_Info_UEnum_EHUD_Container.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EHUD_Container>()
	{
		return EHUD_Container_StaticEnum();
	}
	struct Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enumerators[] = {
		{ "EHUD_Container::ContainerFree", (int64)EHUD_Container::ContainerFree },
		{ "EHUD_Container::ContainerHUD", (int64)EHUD_Container::ContainerHUD },
		{ "EHUD_Container::ContainerPrompt", (int64)EHUD_Container::ContainerPrompt },
		{ "EHUD_Container::ContainerOverlay", (int64)EHUD_Container::ContainerOverlay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ContainerFree.DisplayName", "Free" },
		{ "ContainerFree.Name", "EHUD_Container::ContainerFree" },
		{ "ContainerHUD.DisplayName", "HUD" },
		{ "ContainerHUD.Name", "EHUD_Container::ContainerHUD" },
		{ "ContainerOverlay.DisplayName", "Overlay" },
		{ "ContainerOverlay.Name", "EHUD_Container::ContainerOverlay" },
		{ "ContainerPrompt.DisplayName", "Prompt" },
		{ "ContainerPrompt.Name", "EHUD_Container::ContainerPrompt" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		"EHUD_Container",
		"EHUD_Container",
		Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BDC_UI_Library_EHUD_Container()
	{
		if (!Z_Registration_Info_UEnum_EHUD_Container.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHUD_Container.InnerSingleton, Z_Construct_UEnum_BDC_UI_Library_EHUD_Container_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHUD_Container.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignH;
	static UEnum* EAlignH_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlignH.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlignH.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BDC_UI_Library_EAlignH, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("EAlignH"));
		}
		return Z_Registration_Info_UEnum_EAlignH.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EAlignH>()
	{
		return EAlignH_StaticEnum();
	}
	struct Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enumerators[] = {
		{ "EAlignH::AlignHL", (int64)EAlignH::AlignHL },
		{ "EAlignH::AlignHC", (int64)EAlignH::AlignHC },
		{ "EAlignH::AlignHR", (int64)EAlignH::AlignHR },
		{ "EAlignH::AlignHS", (int64)EAlignH::AlignHS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enum_MetaDataParams[] = {
		{ "AlignHC.DisplayName", "Center" },
		{ "AlignHC.Name", "EAlignH::AlignHC" },
		{ "AlignHL.DisplayName", "Left" },
		{ "AlignHL.Name", "EAlignH::AlignHL" },
		{ "AlignHR.DisplayName", "Right" },
		{ "AlignHR.Name", "EAlignH::AlignHR" },
		{ "AlignHS.DisplayName", "Stretch" },
		{ "AlignHS.Name", "EAlignH::AlignHS" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		"EAlignH",
		"EAlignH",
		Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BDC_UI_Library_EAlignH()
	{
		if (!Z_Registration_Info_UEnum_EAlignH.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignH.InnerSingleton, Z_Construct_UEnum_BDC_UI_Library_EAlignH_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlignH.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignV;
	static UEnum* EAlignV_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlignV.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlignV.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BDC_UI_Library_EAlignV, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("EAlignV"));
		}
		return Z_Registration_Info_UEnum_EAlignV.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EAlignV>()
	{
		return EAlignV_StaticEnum();
	}
	struct Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enumerators[] = {
		{ "EAlignV::AlignVT", (int64)EAlignV::AlignVT },
		{ "EAlignV::AlignVC", (int64)EAlignV::AlignVC },
		{ "EAlignV::AlignVB", (int64)EAlignV::AlignVB },
		{ "EAlignV::AlignVS", (int64)EAlignV::AlignVS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enum_MetaDataParams[] = {
		{ "AlignVB.DisplayName", "Bottom" },
		{ "AlignVB.Name", "EAlignV::AlignVB" },
		{ "AlignVC.DisplayName", "Center" },
		{ "AlignVC.Name", "EAlignV::AlignVC" },
		{ "AlignVS.DisplayName", "Stretch" },
		{ "AlignVS.Name", "EAlignV::AlignVS" },
		{ "AlignVT.DisplayName", "Top" },
		{ "AlignVT.Name", "EAlignV::AlignVT" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		"EAlignV",
		"EAlignV",
		Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BDC_UI_Library_EAlignV()
	{
		if (!Z_Registration_Info_UEnum_EAlignV.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignV.InnerSingleton, Z_Construct_UEnum_BDC_UI_Library_EAlignV_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlignV.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PanelSlotSetting;
class UScriptStruct* FPanelSlotSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PanelSlotSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PanelSlotSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPanelSlotSetting, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("PanelSlotSetting"));
	}
	return Z_Registration_Info_UScriptStruct_PanelSlotSetting.OuterSingleton;
}
template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<FPanelSlotSetting>()
{
	return FPanelSlotSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPanelSlotSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRight_and_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetRight_and_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTop_and_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetTop_and_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetBottom_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UIPivot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPanelSlotSetting>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, HorizontalAlignment), Z_Construct_UEnum_BDC_UI_Library_EAlignH, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment_MetaData) }; // 2063617101
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, VerticalAlignment), Z_Construct_UEnum_BDC_UI_Library_EAlignV, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment_MetaData) }; // 1195569757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetLeft_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetLeft = { "OffsetLeft", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, OffsetLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetLeft_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetRight_and_PositionX_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetRight_and_PositionX = { "OffsetRight_and_PositionX", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, OffsetRight_and_PositionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetRight_and_PositionX_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetRight_and_PositionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetTop_and_PositionY_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetTop_and_PositionY = { "OffsetTop_and_PositionY", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, OffsetTop_and_PositionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetTop_and_PositionY_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetTop_and_PositionY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetBottom_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetBottom = { "OffsetBottom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, OffsetBottom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetBottom_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetBottom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_UIPivot_MetaData[] = {
		{ "Category", "PanelSlotSetting" },
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_UIPivot = { "UIPivot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPanelSlotSetting, UIPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_UIPivot_MetaData), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_UIPivot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetRight_and_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetTop_and_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_OffsetBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewProp_UIPivot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		&NewStructOps,
		"PanelSlotSetting",
		Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::PropPointers),
		sizeof(FPanelSlotSetting),
		alignof(FPanelSlotSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPanelSlotSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_PanelSlotSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PanelSlotSetting.InnerSingleton, Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PanelSlotSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationInputTypeA;
	static UEnum* ENavigationInputTypeA_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationInputTypeA.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationInputTypeA.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA, (UObject*)Z_Construct_UPackage__Script_BDC_UI_Library(), TEXT("ENavigationInputTypeA"));
		}
		return Z_Registration_Info_UEnum_ENavigationInputTypeA.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<ENavigationInputTypeA>()
	{
		return ENavigationInputTypeA_StaticEnum();
	}
	struct Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enumerators[] = {
		{ "ENavigationInputTypeA::ANAVIGATING_NONE", (int64)ENavigationInputTypeA::ANAVIGATING_NONE },
		{ "ENavigationInputTypeA::ANAVIGATING_UP", (int64)ENavigationInputTypeA::ANAVIGATING_UP },
		{ "ENavigationInputTypeA::ANAVIGATING_DOWN", (int64)ENavigationInputTypeA::ANAVIGATING_DOWN },
		{ "ENavigationInputTypeA::ANAVIGATING_LEFT", (int64)ENavigationInputTypeA::ANAVIGATING_LEFT },
		{ "ENavigationInputTypeA::ANAVIGATING_RIGHT", (int64)ENavigationInputTypeA::ANAVIGATING_RIGHT },
		{ "ENavigationInputTypeA::ANAVIGATING_NEXT", (int64)ENavigationInputTypeA::ANAVIGATING_NEXT },
		{ "ENavigationInputTypeA::ANAVIGATING_PREV", (int64)ENavigationInputTypeA::ANAVIGATING_PREV },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_SWITCHNEXT", (int64)ENavigationInputTypeA::ANAVIGATING_IN_SWITCHNEXT },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_SWITCHPREV", (int64)ENavigationInputTypeA::ANAVIGATING_IN_SWITCHPREV },
		{ "ENavigationInputTypeA::ANAVIGATING_JUMPNEXT", (int64)ENavigationInputTypeA::ANAVIGATING_JUMPNEXT },
		{ "ENavigationInputTypeA::ANAVIGATING_JUMPPREV", (int64)ENavigationInputTypeA::ANAVIGATING_JUMPPREV },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_CONFIRM", (int64)ENavigationInputTypeA::ANAVIGATING_IN_CONFIRM },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_CANCEL", (int64)ENavigationInputTypeA::ANAVIGATING_IN_CANCEL },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL1", (int64)ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL1 },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL2", (int64)ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL2 },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_OPTION", (int64)ENavigationInputTypeA::ANAVIGATING_IN_OPTION },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_SHARE", (int64)ENavigationInputTypeA::ANAVIGATING_IN_SHARE },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_ADD1", (int64)ENavigationInputTypeA::ANAVIGATING_IN_ADD1 },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_ADD2", (int64)ENavigationInputTypeA::ANAVIGATING_IN_ADD2 },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_ADD3", (int64)ENavigationInputTypeA::ANAVIGATING_IN_ADD3 },
		{ "ENavigationInputTypeA::ANAVIGATING_IN_ADD4", (int64)ENavigationInputTypeA::ANAVIGATING_IN_ADD4 },
		{ "ENavigationInputTypeA::ANAVIGATING_INVALID", (int64)ENavigationInputTypeA::ANAVIGATING_INVALID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enum_MetaDataParams[] = {
		{ "ANAVIGATING_DOWN.Comment", "// Gamepad used for Direction UP\n" },
		{ "ANAVIGATING_DOWN.DisplayName", "Down" },
		{ "ANAVIGATING_DOWN.Name", "ENavigationInputTypeA::ANAVIGATING_DOWN" },
		{ "ANAVIGATING_DOWN.ToolTip", "Gamepad used for Direction UP" },
		{ "ANAVIGATING_IN_ADD1.Comment", "// Gamepad used for Share/Community Key\n" },
		{ "ANAVIGATING_IN_ADD1.DisplayName", "Additional 1" },
		{ "ANAVIGATING_IN_ADD1.Name", "ENavigationInputTypeA::ANAVIGATING_IN_ADD1" },
		{ "ANAVIGATING_IN_ADD1.ToolTip", "Gamepad used for Share/Community Key" },
		{ "ANAVIGATING_IN_ADD2.Comment", "// Free to be used\n" },
		{ "ANAVIGATING_IN_ADD2.DisplayName", "Additional 2" },
		{ "ANAVIGATING_IN_ADD2.Name", "ENavigationInputTypeA::ANAVIGATING_IN_ADD2" },
		{ "ANAVIGATING_IN_ADD2.ToolTip", "Free to be used" },
		{ "ANAVIGATING_IN_ADD3.Comment", "// Free to be used\n" },
		{ "ANAVIGATING_IN_ADD3.DisplayName", "Additional 3" },
		{ "ANAVIGATING_IN_ADD3.Name", "ENavigationInputTypeA::ANAVIGATING_IN_ADD3" },
		{ "ANAVIGATING_IN_ADD3.ToolTip", "Free to be used" },
		{ "ANAVIGATING_IN_ADD4.Comment", "// Free to be used\n" },
		{ "ANAVIGATING_IN_ADD4.DisplayName", "Additional 4" },
		{ "ANAVIGATING_IN_ADD4.Name", "ENavigationInputTypeA::ANAVIGATING_IN_ADD4" },
		{ "ANAVIGATING_IN_ADD4.ToolTip", "Free to be used" },
		{ "ANAVIGATING_IN_CANCEL.Comment", "// Gamepad used for FaceButtonBottom\n" },
		{ "ANAVIGATING_IN_CANCEL.DisplayName", "Cancel" },
		{ "ANAVIGATING_IN_CANCEL.Name", "ENavigationInputTypeA::ANAVIGATING_IN_CANCEL" },
		{ "ANAVIGATING_IN_CANCEL.ToolTip", "Gamepad used for FaceButtonBottom" },
		{ "ANAVIGATING_IN_CONFIRM.Comment", "// Gamepad used for Right Stick Button\n" },
		{ "ANAVIGATING_IN_CONFIRM.DisplayName", "Confirm" },
		{ "ANAVIGATING_IN_CONFIRM.Name", "ENavigationInputTypeA::ANAVIGATING_IN_CONFIRM" },
		{ "ANAVIGATING_IN_CONFIRM.ToolTip", "Gamepad used for Right Stick Button" },
		{ "ANAVIGATING_IN_OPTION.Comment", "// Gamepad used for FaceButtonTop\n" },
		{ "ANAVIGATING_IN_OPTION.DisplayName", "Option" },
		{ "ANAVIGATING_IN_OPTION.Name", "ENavigationInputTypeA::ANAVIGATING_IN_OPTION" },
		{ "ANAVIGATING_IN_OPTION.ToolTip", "Gamepad used for FaceButtonTop" },
		{ "ANAVIGATING_IN_SHARE.Comment", "// Gamepad used for Start/Option Key\n" },
		{ "ANAVIGATING_IN_SHARE.DisplayName", "Share" },
		{ "ANAVIGATING_IN_SHARE.Name", "ENavigationInputTypeA::ANAVIGATING_IN_SHARE" },
		{ "ANAVIGATING_IN_SHARE.ToolTip", "Gamepad used for Start/Option Key" },
		{ "ANAVIGATING_IN_SPECIAL1.Comment", "// Gamepad used for FaceButtonRight\n" },
		{ "ANAVIGATING_IN_SPECIAL1.DisplayName", "Special 1" },
		{ "ANAVIGATING_IN_SPECIAL1.Name", "ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL1" },
		{ "ANAVIGATING_IN_SPECIAL1.ToolTip", "Gamepad used for FaceButtonRight" },
		{ "ANAVIGATING_IN_SPECIAL2.Comment", "// Gamepad used for FaceButtonLeft\n" },
		{ "ANAVIGATING_IN_SPECIAL2.DisplayName", "Special 2" },
		{ "ANAVIGATING_IN_SPECIAL2.Name", "ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL2" },
		{ "ANAVIGATING_IN_SPECIAL2.ToolTip", "Gamepad used for FaceButtonLeft" },
		{ "ANAVIGATING_IN_SWITCHNEXT.Comment", "// Gamepad used for LeftShoulder Button\n" },
		{ "ANAVIGATING_IN_SWITCHNEXT.DisplayName", "Switch to Next" },
		{ "ANAVIGATING_IN_SWITCHNEXT.Name", "ENavigationInputTypeA::ANAVIGATING_IN_SWITCHNEXT" },
		{ "ANAVIGATING_IN_SWITCHNEXT.ToolTip", "Gamepad used for LeftShoulder Button" },
		{ "ANAVIGATING_IN_SWITCHPREV.Comment", "// Gamepad used for RightShoulder Trigger\n" },
		{ "ANAVIGATING_IN_SWITCHPREV.DisplayName", "Switch to Previous" },
		{ "ANAVIGATING_IN_SWITCHPREV.Name", "ENavigationInputTypeA::ANAVIGATING_IN_SWITCHPREV" },
		{ "ANAVIGATING_IN_SWITCHPREV.ToolTip", "Gamepad used for RightShoulder Trigger" },
		{ "ANAVIGATING_INVALID.Comment", "// Free to be used\n" },
		{ "ANAVIGATING_INVALID.DisplayName", "Invalid" },
		{ "ANAVIGATING_INVALID.Name", "ENavigationInputTypeA::ANAVIGATING_INVALID" },
		{ "ANAVIGATING_INVALID.ToolTip", "Free to be used" },
		{ "ANAVIGATING_JUMPNEXT.Comment", "// Gamepad used for LeftShoulder Trigger\n" },
		{ "ANAVIGATING_JUMPNEXT.DisplayName", "Jump to Next" },
		{ "ANAVIGATING_JUMPNEXT.Name", "ENavigationInputTypeA::ANAVIGATING_JUMPNEXT" },
		{ "ANAVIGATING_JUMPNEXT.ToolTip", "Gamepad used for LeftShoulder Trigger" },
		{ "ANAVIGATING_JUMPPREV.Comment", "// Gamepad used for Left Stick Button\n" },
		{ "ANAVIGATING_JUMPPREV.DisplayName", "Jump to Previous" },
		{ "ANAVIGATING_JUMPPREV.Name", "ENavigationInputTypeA::ANAVIGATING_JUMPPREV" },
		{ "ANAVIGATING_JUMPPREV.ToolTip", "Gamepad used for Left Stick Button" },
		{ "ANAVIGATING_LEFT.Comment", "// Gamepad used for Direction DOWN\n" },
		{ "ANAVIGATING_LEFT.DisplayName", "Left" },
		{ "ANAVIGATING_LEFT.Name", "ENavigationInputTypeA::ANAVIGATING_LEFT" },
		{ "ANAVIGATING_LEFT.ToolTip", "Gamepad used for Direction DOWN" },
		{ "ANAVIGATING_NEXT.Comment", "// Gamepad used for Direction RIGHT\n" },
		{ "ANAVIGATING_NEXT.DisplayName", "Next" },
		{ "ANAVIGATING_NEXT.Name", "ENavigationInputTypeA::ANAVIGATING_NEXT" },
		{ "ANAVIGATING_NEXT.ToolTip", "Gamepad used for Direction RIGHT" },
		{ "ANAVIGATING_NONE.DisplayName", "None" },
		{ "ANAVIGATING_NONE.Name", "ENavigationInputTypeA::ANAVIGATING_NONE" },
		{ "ANAVIGATING_PREV.Comment", "// Gamepad used for RightShoulder Button\n" },
		{ "ANAVIGATING_PREV.DisplayName", "Previous" },
		{ "ANAVIGATING_PREV.Name", "ENavigationInputTypeA::ANAVIGATING_PREV" },
		{ "ANAVIGATING_PREV.ToolTip", "Gamepad used for RightShoulder Button" },
		{ "ANAVIGATING_RIGHT.Comment", "// Gamepad used for Direction LEFT\n" },
		{ "ANAVIGATING_RIGHT.DisplayName", "Right" },
		{ "ANAVIGATING_RIGHT.Name", "ENavigationInputTypeA::ANAVIGATING_RIGHT" },
		{ "ANAVIGATING_RIGHT.ToolTip", "Gamepad used for Direction LEFT" },
		{ "ANAVIGATING_UP.Comment", "// Default, always needs to be there, f.e. to have a basic input for a Map\n" },
		{ "ANAVIGATING_UP.DisplayName", "Up" },
		{ "ANAVIGATING_UP.Name", "ENavigationInputTypeA::ANAVIGATING_UP" },
		{ "ANAVIGATING_UP.ToolTip", "Default, always needs to be there, f.e. to have a basic input for a Map" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This Structure is meant to handle different Input Triggers the System can Switch on.\n * The WidgetTrigger Function is returning such an Enum to add a Select or Switch after it, to\n * drive multiple Actions from this one Function Node.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Structure is meant to handle different Input Triggers the System can Switch on.\nThe WidgetTrigger Function is returning such an Enum to add a Select or Switch after it, to\ndrive multiple Actions from this one Function Node." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BDC_UI_Library,
		nullptr,
		"ENavigationInputTypeA",
		"ENavigationInputTypeA",
		Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA()
	{
		if (!Z_Registration_Info_UEnum_ENavigationInputTypeA.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationInputTypeA.InnerSingleton, Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationInputTypeA.InnerSingleton;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execHUD_UpdateLoading)
	{
		P_GET_UBOOL(Z_Param_bNewVisible);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadingTime);
		P_GET_OBJECT(USoundBase,Z_Param_AudioToPlay);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUD_UpdateLoading_Implementation(Z_Param_bNewVisible,Z_Param_FadingTime,Z_Param_AudioToPlay,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execHUD_Init)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUD_Init_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execHUD_RemoveWidgetByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WidgetToRemove);
		P_GET_ENUM(EHUD_Container,Z_Param_OffContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUD_RemoveWidgetByName_Implementation(Z_Param_WidgetToRemove,EHUD_Container(Z_Param_OffContainer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execHUD_RemoveWidgetByRef)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRemove);
		P_GET_ENUM(EHUD_Container,Z_Param_OffContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUD_RemoveWidgetByRef_Implementation(Z_Param_WidgetToRemove,EHUD_Container(Z_Param_OffContainer));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execHUD_AddWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetToAdd);
		P_GET_OBJECT(UClass,Z_Param_CreatingWidget);
		P_GET_PROPERTY(FNameProperty,Z_Param_WidgetName);
		P_GET_ENUM(EHUD_Container,Z_Param_IntoContainer);
		P_GET_PROPERTY(FIntProperty,Z_Param_At_Z_Position);
		P_GET_STRUCT(FPanelSlotSetting,Z_Param_SlotSettings);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_AddedWidget);
		P_GET_OBJECT_REF(UCanvasPanelSlot,Z_Param_Out_AddedCanvas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUD_AddWidget_Implementation(Z_Param_WidgetToAdd,Z_Param_CreatingWidget,Z_Param_WidgetName,EHUD_Container(Z_Param_IntoContainer),Z_Param_At_Z_Position,Z_Param_SlotSettings,Z_Param_Out_AddedWidget,Z_Param_Out_AddedCanvas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_DoBack)
	{
		P_GET_OBJECT(UWidget,Z_Param_FromWidget);
		P_GET_PROPERTY(FNameProperty,Z_Param_FromName);
		P_GET_PROPERTY(FIntProperty,Z_Param_BackMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_DoBack_Implementation(Z_Param_FromWidget,Z_Param_FromName,Z_Param_BackMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_UpdateHold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_GET_UBOOL(Z_Param_bIsInvalidated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_UpdateHold_Implementation(Z_Param_Percentage,Z_Param_bIsInvalidated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Trigger)
	{
		P_GET_ENUM(ENavigationInputTypeA,Z_Param_InputOfType);
		P_GET_UBOOL(Z_Param_bOnHold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoldDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Trigger_Implementation(ENavigationInputTypeA(Z_Param_InputOfType),Z_Param_bOnHold,Z_Param_HoldDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_EnableStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_EnableStateChanged_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_UpdateInputMethod)
	{
		P_GET_UBOOL(Z_Param_bUsesGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_UpdateInputMethod_Implementation(Z_Param_bUsesGamepad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_SetActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_SetActive_Implementation(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Update)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UpdateMode);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Updateings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Update_Implementation(Z_Param_UpdateMode,Z_Param_Out_Updateings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_GetValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InInteger);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFloat);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InString);
		P_GET_UBOOL_REF(Z_Param_Out_bInBool);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector3);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InVector2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_GetValue_Implementation(Z_Param_Out_InInteger,Z_Param_Out_InFloat,Z_Param_Out_InString,Z_Param_Out_bInBool,Z_Param_Out_InText,Z_Param_Out_InName,Z_Param_Out_InVector3,Z_Param_Out_InVector2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_SetValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInteger);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_UBOOL(Z_Param_bInBool);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_STRUCT(FVector,Z_Param_InVector3);
		P_GET_STRUCT(FVector2D,Z_Param_InVector2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_SetValue_Implementation(Z_Param_InInteger,Z_Param_InFloat,Z_Param_InString,Z_Param_bInBool,Z_Param_Out_InText,Z_Param_InName,Z_Param_InVector3,Z_Param_InVector2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Focus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Focus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Released)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Released_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Unhover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Unhover_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IBDC_UI_Interface::execWidget_Hover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Widget_Hover_Implementation();
		P_NATIVE_END;
	}
	struct BDC_UI_Interface_eventAskFocusTarget_Parms
	{
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		BDC_UI_Interface_eventAskFocusTarget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct BDC_UI_Interface_eventHUD_AddWidget_Parms
	{
		UUserWidget* WidgetToAdd;
		TSubclassOf<UUserWidget>  CreatingWidget;
		FName WidgetName;
		EHUD_Container IntoContainer;
		int32 At_Z_Position;
		FPanelSlotSetting SlotSettings;
		UWidget* AddedWidget;
		UCanvasPanelSlot* AddedCanvas;
	};
	struct BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms
	{
		FName WidgetToRemove;
		EHUD_Container OffContainer;
	};
	struct BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms
	{
		UUserWidget* WidgetToRemove;
		EHUD_Container OffContainer;
	};
	struct BDC_UI_Interface_eventHUD_UpdateLoading_Parms
	{
		bool bNewVisible;
		float FadingTime;
		USoundBase* AudioToPlay;
		FString Reason;
	};
	struct BDC_UI_Interface_eventWidget_DoBack_Parms
	{
		UWidget* FromWidget;
		FName FromName;
		int32 BackMode;
	};
	struct BDC_UI_Interface_eventWidget_GetValue_Parms
	{
		int32 InInteger;
		float InFloat;
		FString InString;
		bool bInBool;
		FText InText;
		FName InName;
		FVector InVector3;
		FVector2D InVector2;
	};
	struct BDC_UI_Interface_eventWidget_SetActive_Parms
	{
		bool bIsActive;
	};
	struct BDC_UI_Interface_eventWidget_SetValue_Parms
	{
		int32 InInteger;
		float InFloat;
		FString InString;
		bool bInBool;
		FText InText;
		FName InName;
		FVector InVector3;
		FVector2D InVector2;
	};
	struct BDC_UI_Interface_eventWidget_Trigger_Parms
	{
		ENavigationInputTypeA InputOfType;
		bool bOnHold;
		float HoldDelta;
	};
	struct BDC_UI_Interface_eventWidget_Update_Parms
	{
		int32 UpdateMode;
		FText Updateings;
	};
	struct BDC_UI_Interface_eventWidget_UpdateHold_Parms
	{
		float Percentage;
		bool bIsInvalidated;
	};
	struct BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms
	{
		bool bUsesGamepad;
	};
	UWidget* IBDC_UI_Interface::AskFocusTarget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AskFocusTarget instead.");
		BDC_UI_Interface_eventAskFocusTarget_Parms Parms;
		return Parms.ReturnValue;
	}
	void IBDC_UI_Interface::HUD_AddWidget(UUserWidget* WidgetToAdd, TSubclassOf<UUserWidget>  CreatingWidget, FName WidgetName, EHUD_Container IntoContainer, int32 At_Z_Position, FPanelSlotSetting SlotSettings, UWidget*& AddedWidget, UCanvasPanelSlot*& AddedCanvas)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HUD_AddWidget instead.");
	}
	void IBDC_UI_Interface::HUD_Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HUD_Init instead.");
	}
	void IBDC_UI_Interface::HUD_RemoveWidgetByName(FName WidgetToRemove, EHUD_Container OffContainer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HUD_RemoveWidgetByName instead.");
	}
	void IBDC_UI_Interface::HUD_RemoveWidgetByRef(UUserWidget* WidgetToRemove, EHUD_Container OffContainer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HUD_RemoveWidgetByRef instead.");
	}
	void IBDC_UI_Interface::HUD_UpdateLoading(bool bNewVisible, float FadingTime, USoundBase* AudioToPlay, const FString& Reason)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HUD_UpdateLoading instead.");
	}
	void IBDC_UI_Interface::Widget_DoBack(UWidget* FromWidget, FName FromName, int32 BackMode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_DoBack instead.");
	}
	void IBDC_UI_Interface::Widget_EnableStateChanged()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_EnableStateChanged instead.");
	}
	void IBDC_UI_Interface::Widget_Focus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Focus instead.");
	}
	void IBDC_UI_Interface::Widget_GetValue(int32& InInteger, float& InFloat, FString& InString, bool& bInBool, FText& InText, FName& InName, FVector& InVector3, FVector2D& InVector2)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_GetValue instead.");
	}
	void IBDC_UI_Interface::Widget_Hover()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Hover instead.");
	}
	void IBDC_UI_Interface::Widget_Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Pressed instead.");
	}
	void IBDC_UI_Interface::Widget_Released()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Released instead.");
	}
	void IBDC_UI_Interface::Widget_SetActive(bool bIsActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_SetActive instead.");
	}
	void IBDC_UI_Interface::Widget_SetValue(const int32 InInteger, const float InFloat, const FString& InString, bool bInBool, FText const& InText, const FName InName, const FVector InVector3, const FVector2D InVector2)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_SetValue instead.");
	}
	void IBDC_UI_Interface::Widget_Trigger(ENavigationInputTypeA InputOfType, bool bOnHold, float HoldDelta)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Trigger instead.");
	}
	void IBDC_UI_Interface::Widget_Unhover()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Unhover instead.");
	}
	void IBDC_UI_Interface::Widget_Update(int32 UpdateMode, FText const& Updateings)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_Update instead.");
	}
	void IBDC_UI_Interface::Widget_UpdateHold(float Percentage, bool bIsInvalidated)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_UpdateHold instead.");
	}
	void IBDC_UI_Interface::Widget_UpdateInputMethod(bool bUsesGamepad)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Widget_UpdateInputMethod instead.");
	}
	void UBDC_UI_Interface::StaticRegisterNativesUBDC_UI_Interface()
	{
		UClass* Class = UBDC_UI_Interface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HUD_AddWidget", &IBDC_UI_Interface::execHUD_AddWidget },
			{ "HUD_Init", &IBDC_UI_Interface::execHUD_Init },
			{ "HUD_RemoveWidgetByName", &IBDC_UI_Interface::execHUD_RemoveWidgetByName },
			{ "HUD_RemoveWidgetByRef", &IBDC_UI_Interface::execHUD_RemoveWidgetByRef },
			{ "HUD_UpdateLoading", &IBDC_UI_Interface::execHUD_UpdateLoading },
			{ "Widget_DoBack", &IBDC_UI_Interface::execWidget_DoBack },
			{ "Widget_EnableStateChanged", &IBDC_UI_Interface::execWidget_EnableStateChanged },
			{ "Widget_Focus", &IBDC_UI_Interface::execWidget_Focus },
			{ "Widget_GetValue", &IBDC_UI_Interface::execWidget_GetValue },
			{ "Widget_Hover", &IBDC_UI_Interface::execWidget_Hover },
			{ "Widget_Pressed", &IBDC_UI_Interface::execWidget_Pressed },
			{ "Widget_Released", &IBDC_UI_Interface::execWidget_Released },
			{ "Widget_SetActive", &IBDC_UI_Interface::execWidget_SetActive },
			{ "Widget_SetValue", &IBDC_UI_Interface::execWidget_SetValue },
			{ "Widget_Trigger", &IBDC_UI_Interface::execWidget_Trigger },
			{ "Widget_Unhover", &IBDC_UI_Interface::execWidget_Unhover },
			{ "Widget_Update", &IBDC_UI_Interface::execWidget_Update },
			{ "Widget_UpdateHold", &IBDC_UI_Interface::execWidget_UpdateHold },
			{ "Widget_UpdateInputMethod", &IBDC_UI_Interface::execWidget_UpdateInputMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventAskFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The following Function can be overidden in BP to have a general way to get a default focus target.\n\x09In CommonUI, you always want to override the GetDesiredFocusTarget of a Common Widget for that.*/// Override to Return a valid Focus Target\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The following Function can be overidden in BP to have a general way to get a default focus target.\n      In CommonUI, you always want to override the GetDesiredFocusTarget of a Common Widget for that.// Override to Return a valid Focus Target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "AskFocusTarget", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::PropPointers), sizeof(BDC_UI_Interface_eventAskFocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventAskFocusTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToAdd;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CreatingWidget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntoContainer_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntoContainer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_At_Z_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedCanvas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetToAdd_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetToAdd = { "WidgetToAdd", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, WidgetToAdd), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetToAdd_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetToAdd_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_CreatingWidget = { "CreatingWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, CreatingWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, WidgetName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_IntoContainer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_IntoContainer = { "IntoContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, IntoContainer), Z_Construct_UEnum_BDC_UI_Library_EHUD_Container, METADATA_PARAMS(0, nullptr) }; // 3943924094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_At_Z_Position = { "At_Z_Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, At_Z_Position), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_SlotSettings = { "SlotSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, SlotSettings), Z_Construct_UScriptStruct_FPanelSlotSetting, METADATA_PARAMS(0, nullptr) }; // 49781049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedWidget = { "AddedWidget", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, AddedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedWidget_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedCanvas_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedCanvas = { "AddedCanvas", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_AddWidget_Parms, AddedCanvas), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedCanvas_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedCanvas_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_CreatingWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_WidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_IntoContainer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_IntoContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_At_Z_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_SlotSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::NewProp_AddedCanvas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface to add a Widget to the HUD\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface to add a Widget to the HUD" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "HUD_AddWidget", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::PropPointers), sizeof(BDC_UI_Interface_eventHUD_AddWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventHUD_AddWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface to Init the HUD\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface to Init the HUD" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "HUD_Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetToRemove;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffContainer_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OffContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms, WidgetToRemove), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_OffContainer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_OffContainer = { "OffContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms, OffContainer), Z_Construct_UEnum_BDC_UI_Library_EHUD_Container, METADATA_PARAMS(0, nullptr) }; // 3943924094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_WidgetToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_OffContainer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::NewProp_OffContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface to Remove a Widget from the HUD, by the given Widget Name\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface to Remove a Widget from the HUD, by the given Widget Name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "HUD_RemoveWidgetByName", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::PropPointers), sizeof(BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRemove;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffContainer_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OffContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_WidgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms, WidgetToRemove), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_WidgetToRemove_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_WidgetToRemove_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_OffContainer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_OffContainer = { "OffContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms, OffContainer), Z_Construct_UEnum_BDC_UI_Library_EHUD_Container, METADATA_PARAMS(0, nullptr) }; // 3943924094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_WidgetToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_OffContainer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::NewProp_OffContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface to Remove a Widget from the HUD, by the given Widget reference\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface to Remove a Widget from the HUD, by the given Widget reference" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "HUD_RemoveWidgetByRef", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::PropPointers), sizeof(BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics
	{
		static void NewProp_bNewVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisible;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadingTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_bNewVisible_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventHUD_UpdateLoading_Parms*)Obj)->bNewVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_bNewVisible = { "bNewVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventHUD_UpdateLoading_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_bNewVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_FadingTime = { "FadingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_UpdateLoading_Parms, FadingTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_AudioToPlay = { "AudioToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_UpdateLoading_Parms, AudioToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventHUD_UpdateLoading_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_Reason_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_Reason_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_bNewVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_FadingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_AudioToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Change the LoadingScreen Visibility\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the LoadingScreen Visibility" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "HUD_UpdateLoading", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::PropPointers), sizeof(BDC_UI_Interface_eventHUD_UpdateLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventHUD_UpdateLoading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromWidget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BackMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromWidget = { "FromWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_DoBack_Parms, FromWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromWidget_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromWidget_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromName = { "FromName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_DoBack_Parms, FromName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_BackMode = { "BackMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_DoBack_Parms, BackMode), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_FromName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::NewProp_BackMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interface to handle BackAction in an Event, not just in a function. Events are capable of using timed tasks and delays.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interface to handle BackAction in an Event, not just in a function. Events are capable of using timed tasks and delays." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_DoBack", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_DoBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_DoBack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call when changing the IsEnabled state.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call when changing the IsEnabled state." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_EnableStateChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the Widget be forced to get focus\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Widget be forced to get focus" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Focus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInteger;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static void NewProp_bInBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBool;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InInteger = { "InInteger", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InInteger), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InFloat), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InString), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_bInBool_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_GetValue_Parms*)Obj)->bInBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_bInBool = { "bInBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_GetValue_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_bInBool_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InVector3 = { "InVector3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InVector3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InVector2 = { "InVector2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_GetValue_Parms, InVector2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InInteger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_bInBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InVector3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::NewProp_InVector2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Values from a Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Values from a Widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_GetValue", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_GetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_GetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The following Functions are normally used to handle the appearance of a Widget. Since this System\n\x09* is not bound to any Focus of CommonUI, this can be used for all kinds of UserWidgets, too. */// Should the Widget be hovered\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The following Functions are normally used to handle the appearance of a Widget. Since this System\n      * is not bound to any Focus of CommonUI, this can be used for all kinds of UserWidgets, too. // Should the Widget be hovered" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Hover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the Widget being Pressed\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the Widget being Pressed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Pressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the Widget being Released\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the Widget being Released" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Released", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics
	{
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_SetActive_Parms*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_SetActive_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Like SetIsEnabled, but as Interface call to drive some own logic.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Like SetIsEnabled, but as Interface call to drive some own logic." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_SetActive", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_SetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_SetActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInteger_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInteger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBool_MetaData[];
#endif
		static void NewProp_bInBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVector3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVector2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InInteger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InInteger = { "InInteger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InInteger), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InInteger_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InInteger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InFloat_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_SetValue_Parms*)Obj)->bInBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool = { "bInBool", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_SetValue_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InText_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector3 = { "InVector3", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InVector3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector3_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector2 = { "InVector2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_SetValue_Parms, InVector2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector2_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InInteger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_bInBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::NewProp_InVector2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send Values to a Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send Values to a Widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_SetValue", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_SetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_SetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputOfType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputOfType;
		static void NewProp_bOnHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnHold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_InputOfType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_InputOfType = { "InputOfType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_Trigger_Parms, InputOfType), Z_Construct_UEnum_BDC_UI_Library_ENavigationInputTypeA, METADATA_PARAMS(0, nullptr) }; // 1777176472
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_bOnHold_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_Trigger_Parms*)Obj)->bOnHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_bOnHold = { "bOnHold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_Trigger_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_bOnHold_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_HoldDelta = { "HoldDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_Trigger_Parms, HoldDelta), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_InputOfType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_InputOfType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_bOnHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::NewProp_HoldDelta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The following Functions are used for interacting with a Widget.*/// Trigger the Input Action's Function on any Widget this Event is implemented.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The following Functions are used for interacting with a Widget.// Trigger the Input Action's Function on any Widget this Event is implemented." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Trigger", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_Trigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_Trigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the Widget be unhovered\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Widget be unhovered" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Unhover", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Updateings_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Updateings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_Update_Parms, UpdateMode), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_Updateings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_Updateings = { "Updateings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_Update_Parms, Updateings), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_Updateings_MetaData), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_Updateings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_UpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::NewProp_Updateings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the Widgets behaviour or appearance. The Integer is for driving different options\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the Widgets behaviour or appearance. The Integer is for driving different options" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_Update", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_Update_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_Update_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static void NewProp_bIsInvalidated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvalidated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_UI_Interface_eventWidget_UpdateHold_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_bIsInvalidated_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_UpdateHold_Parms*)Obj)->bIsInvalidated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_bIsInvalidated = { "bIsInvalidated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_UpdateHold_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_bIsInvalidated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::NewProp_bIsInvalidated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this to update the Hold percentage when a HoldAction is on an InputTriggerAction\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to update the Hold percentage when a HoldAction is on an InputTriggerAction" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_UpdateHold", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_UpdateHold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_UpdateHold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics
	{
		static void NewProp_bUsesGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::NewProp_bUsesGamepad_SetBit(void* Obj)
	{
		((BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms*)Obj)->bUsesGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::NewProp_bUsesGamepad = { "bUsesGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms), &Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::NewProp_bUsesGamepad_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::NewProp_bUsesGamepad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Interface|Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Especially for CommonUI, where Gamepad<>Mouse/Keyboard switching is not always working well.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Especially for CommonUI, where Gamepad<>Mouse/Keyboard switching is not always working well." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_UI_Interface, nullptr, "Widget_UpdateInputMethod", nullptr, nullptr, Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::PropPointers), sizeof(BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDC_UI_Interface);
	UClass* Z_Construct_UClass_UBDC_UI_Interface_NoRegister()
	{
		return UBDC_UI_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UBDC_UI_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBDC_UI_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Interface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBDC_UI_Interface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBDC_UI_Interface_AskFocusTarget, "AskFocusTarget" }, // 2773318799
		{ &Z_Construct_UFunction_UBDC_UI_Interface_HUD_AddWidget, "HUD_AddWidget" }, // 675322931
		{ &Z_Construct_UFunction_UBDC_UI_Interface_HUD_Init, "HUD_Init" }, // 649463365
		{ &Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByName, "HUD_RemoveWidgetByName" }, // 3676523681
		{ &Z_Construct_UFunction_UBDC_UI_Interface_HUD_RemoveWidgetByRef, "HUD_RemoveWidgetByRef" }, // 834692745
		{ &Z_Construct_UFunction_UBDC_UI_Interface_HUD_UpdateLoading, "HUD_UpdateLoading" }, // 2735893386
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_DoBack, "Widget_DoBack" }, // 590933282
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_EnableStateChanged, "Widget_EnableStateChanged" }, // 3687838538
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Focus, "Widget_Focus" }, // 2915459651
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_GetValue, "Widget_GetValue" }, // 951447036
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Hover, "Widget_Hover" }, // 4094509149
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Pressed, "Widget_Pressed" }, // 855810717
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Released, "Widget_Released" }, // 1575984653
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetActive, "Widget_SetActive" }, // 174145568
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_SetValue, "Widget_SetValue" }, // 2859818313
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Trigger, "Widget_Trigger" }, // 2806954417
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Unhover, "Widget_Unhover" }, // 1977618528
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_Update, "Widget_Update" }, // 3868894107
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateHold, "Widget_UpdateHold" }, // 1310200406
		{ &Z_Construct_UFunction_UBDC_UI_Interface_Widget_UpdateInputMethod, "Widget_UpdateInputMethod" }, // 823530979
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Interface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_UI_Interface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BDC_UI_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBDC_UI_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBDC_UI_Interface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDC_UI_Interface_Statics::ClassParams = {
		&UBDC_UI_Interface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_UI_Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDC_UI_Interface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBDC_UI_Interface()
	{
		if (!Z_Registration_Info_UClass_UBDC_UI_Interface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDC_UI_Interface.OuterSingleton, Z_Construct_UClass_UBDC_UI_Interface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBDC_UI_Interface.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UClass* StaticClass<UBDC_UI_Interface>()
	{
		return UBDC_UI_Interface::StaticClass();
	}
	UBDC_UI_Interface::UBDC_UI_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDC_UI_Interface);
	UBDC_UI_Interface::~UBDC_UI_Interface() {}
	static FName NAME_UBDC_UI_Interface_AskFocusTarget = FName(TEXT("AskFocusTarget"));
	UWidget* IBDC_UI_Interface::Execute_AskFocusTarget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventAskFocusTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_AskFocusTarget);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UBDC_UI_Interface_HUD_AddWidget = FName(TEXT("HUD_AddWidget"));
	void IBDC_UI_Interface::Execute_HUD_AddWidget(UObject* O, UUserWidget* WidgetToAdd, TSubclassOf<UUserWidget>  CreatingWidget, FName WidgetName, EHUD_Container IntoContainer, int32 At_Z_Position, FPanelSlotSetting SlotSettings, UWidget*& AddedWidget, UCanvasPanelSlot*& AddedCanvas)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventHUD_AddWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_HUD_AddWidget);
		if (Func)
		{
			Parms.WidgetToAdd=WidgetToAdd;
			Parms.CreatingWidget=CreatingWidget;
			Parms.WidgetName=WidgetName;
			Parms.IntoContainer=IntoContainer;
			Parms.At_Z_Position=At_Z_Position;
			Parms.SlotSettings=SlotSettings;
			Parms.AddedWidget=AddedWidget;
			Parms.AddedCanvas=AddedCanvas;
			O->ProcessEvent(Func, &Parms);
			AddedWidget=Parms.AddedWidget;
			AddedCanvas=Parms.AddedCanvas;
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->HUD_AddWidget_Implementation(WidgetToAdd,CreatingWidget,WidgetName,IntoContainer,At_Z_Position,SlotSettings,AddedWidget,AddedCanvas);
		}
	}
	static FName NAME_UBDC_UI_Interface_HUD_Init = FName(TEXT("HUD_Init"));
	void IBDC_UI_Interface::Execute_HUD_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_HUD_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->HUD_Init_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_HUD_RemoveWidgetByName = FName(TEXT("HUD_RemoveWidgetByName"));
	void IBDC_UI_Interface::Execute_HUD_RemoveWidgetByName(UObject* O, FName WidgetToRemove, EHUD_Container OffContainer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventHUD_RemoveWidgetByName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_HUD_RemoveWidgetByName);
		if (Func)
		{
			Parms.WidgetToRemove=WidgetToRemove;
			Parms.OffContainer=OffContainer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->HUD_RemoveWidgetByName_Implementation(WidgetToRemove,OffContainer);
		}
	}
	static FName NAME_UBDC_UI_Interface_HUD_RemoveWidgetByRef = FName(TEXT("HUD_RemoveWidgetByRef"));
	void IBDC_UI_Interface::Execute_HUD_RemoveWidgetByRef(UObject* O, UUserWidget* WidgetToRemove, EHUD_Container OffContainer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventHUD_RemoveWidgetByRef_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_HUD_RemoveWidgetByRef);
		if (Func)
		{
			Parms.WidgetToRemove=WidgetToRemove;
			Parms.OffContainer=OffContainer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->HUD_RemoveWidgetByRef_Implementation(WidgetToRemove,OffContainer);
		}
	}
	static FName NAME_UBDC_UI_Interface_HUD_UpdateLoading = FName(TEXT("HUD_UpdateLoading"));
	void IBDC_UI_Interface::Execute_HUD_UpdateLoading(UObject* O, bool bNewVisible, float FadingTime, USoundBase* AudioToPlay, const FString& Reason)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventHUD_UpdateLoading_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_HUD_UpdateLoading);
		if (Func)
		{
			Parms.bNewVisible=bNewVisible;
			Parms.FadingTime=FadingTime;
			Parms.AudioToPlay=AudioToPlay;
			Parms.Reason=Reason;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->HUD_UpdateLoading_Implementation(bNewVisible,FadingTime,AudioToPlay,Reason);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_DoBack = FName(TEXT("Widget_DoBack"));
	void IBDC_UI_Interface::Execute_Widget_DoBack(UObject* O, UWidget* FromWidget, FName FromName, int32 BackMode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_DoBack_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_DoBack);
		if (Func)
		{
			Parms.FromWidget=FromWidget;
			Parms.FromName=FromName;
			Parms.BackMode=BackMode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_DoBack_Implementation(FromWidget,FromName,BackMode);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_EnableStateChanged = FName(TEXT("Widget_EnableStateChanged"));
	void IBDC_UI_Interface::Execute_Widget_EnableStateChanged(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_EnableStateChanged);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_EnableStateChanged_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Focus = FName(TEXT("Widget_Focus"));
	void IBDC_UI_Interface::Execute_Widget_Focus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Focus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Focus_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_GetValue = FName(TEXT("Widget_GetValue"));
	void IBDC_UI_Interface::Execute_Widget_GetValue(UObject* O, int32& InInteger, float& InFloat, FString& InString, bool& bInBool, FText& InText, FName& InName, FVector& InVector3, FVector2D& InVector2)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_GetValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_GetValue);
		if (Func)
		{
			Parms.InInteger=InInteger;
			Parms.InFloat=InFloat;
			Parms.InString=InString;
			Parms.bInBool=bInBool;
			Parms.InText=InText;
			Parms.InName=InName;
			Parms.InVector3=InVector3;
			Parms.InVector2=InVector2;
			O->ProcessEvent(Func, &Parms);
			InInteger=Parms.InInteger;
			InFloat=Parms.InFloat;
			InString=Parms.InString;
			bInBool=Parms.bInBool;
			InText=Parms.InText;
			InName=Parms.InName;
			InVector3=Parms.InVector3;
			InVector2=Parms.InVector2;
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_GetValue_Implementation(InInteger,InFloat,InString,bInBool,InText,InName,InVector3,InVector2);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Hover = FName(TEXT("Widget_Hover"));
	void IBDC_UI_Interface::Execute_Widget_Hover(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Hover);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Hover_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Pressed = FName(TEXT("Widget_Pressed"));
	void IBDC_UI_Interface::Execute_Widget_Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Pressed_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Released = FName(TEXT("Widget_Released"));
	void IBDC_UI_Interface::Execute_Widget_Released(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Released);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Released_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_SetActive = FName(TEXT("Widget_SetActive"));
	void IBDC_UI_Interface::Execute_Widget_SetActive(UObject* O, bool bIsActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_SetActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_SetActive);
		if (Func)
		{
			Parms.bIsActive=bIsActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_SetActive_Implementation(bIsActive);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_SetValue = FName(TEXT("Widget_SetValue"));
	void IBDC_UI_Interface::Execute_Widget_SetValue(UObject* O, const int32 InInteger, const float InFloat, const FString& InString, bool bInBool, FText const& InText, const FName InName, const FVector InVector3, const FVector2D InVector2)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_SetValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_SetValue);
		if (Func)
		{
			Parms.InInteger=InInteger;
			Parms.InFloat=InFloat;
			Parms.InString=InString;
			Parms.bInBool=bInBool;
			Parms.InText=InText;
			Parms.InName=InName;
			Parms.InVector3=InVector3;
			Parms.InVector2=InVector2;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_SetValue_Implementation(InInteger,InFloat,InString,bInBool,InText,InName,InVector3,InVector2);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Trigger = FName(TEXT("Widget_Trigger"));
	void IBDC_UI_Interface::Execute_Widget_Trigger(UObject* O, ENavigationInputTypeA InputOfType, bool bOnHold, float HoldDelta)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_Trigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Trigger);
		if (Func)
		{
			Parms.InputOfType=InputOfType;
			Parms.bOnHold=bOnHold;
			Parms.HoldDelta=HoldDelta;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Trigger_Implementation(InputOfType,bOnHold,HoldDelta);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Unhover = FName(TEXT("Widget_Unhover"));
	void IBDC_UI_Interface::Execute_Widget_Unhover(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Unhover);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Unhover_Implementation();
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_Update = FName(TEXT("Widget_Update"));
	void IBDC_UI_Interface::Execute_Widget_Update(UObject* O, int32 UpdateMode, FText const& Updateings)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_Update_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_Update);
		if (Func)
		{
			Parms.UpdateMode=UpdateMode;
			Parms.Updateings=Updateings;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_Update_Implementation(UpdateMode,Updateings);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_UpdateHold = FName(TEXT("Widget_UpdateHold"));
	void IBDC_UI_Interface::Execute_Widget_UpdateHold(UObject* O, float Percentage, bool bIsInvalidated)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_UpdateHold_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_UpdateHold);
		if (Func)
		{
			Parms.Percentage=Percentage;
			Parms.bIsInvalidated=bIsInvalidated;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_UpdateHold_Implementation(Percentage,bIsInvalidated);
		}
	}
	static FName NAME_UBDC_UI_Interface_Widget_UpdateInputMethod = FName(TEXT("Widget_UpdateInputMethod"));
	void IBDC_UI_Interface::Execute_Widget_UpdateInputMethod(UObject* O, bool bUsesGamepad)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()));
		BDC_UI_Interface_eventWidget_UpdateInputMethod_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBDC_UI_Interface_Widget_UpdateInputMethod);
		if (Func)
		{
			Parms.bUsesGamepad=bUsesGamepad;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBDC_UI_Interface*)(O->GetNativeInterfaceAddress(UBDC_UI_Interface::StaticClass())))
		{
			I->Widget_UpdateInputMethod_Implementation(bUsesGamepad);
		}
	}
	struct Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::EnumInfo[] = {
		{ EHUD_Container_StaticEnum, TEXT("EHUD_Container"), &Z_Registration_Info_UEnum_EHUD_Container, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3943924094U) },
		{ EAlignH_StaticEnum, TEXT("EAlignH"), &Z_Registration_Info_UEnum_EAlignH, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2063617101U) },
		{ EAlignV_StaticEnum, TEXT("EAlignV"), &Z_Registration_Info_UEnum_EAlignV, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1195569757U) },
		{ ENavigationInputTypeA_StaticEnum, TEXT("ENavigationInputTypeA"), &Z_Registration_Info_UEnum_ENavigationInputTypeA, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1777176472U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ScriptStructInfo[] = {
		{ FPanelSlotSetting::StaticStruct, Z_Construct_UScriptStruct_FPanelSlotSetting_Statics::NewStructOps, TEXT("PanelSlotSetting"), &Z_Registration_Info_UScriptStruct_PanelSlotSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPanelSlotSetting), 49781049U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBDC_UI_Interface, UBDC_UI_Interface::StaticClass, TEXT("UBDC_UI_Interface"), &Z_Registration_Info_UClass_UBDC_UI_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDC_UI_Interface), 2438125743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_3631606227(TEXT("/Script/BDC_UI_Library"),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
