// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BDC_UI_Interface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasPanelSlot;
class USoundBase;
class UUserWidget;
class UWidget;
enum class EHUD_Container : uint8;
enum class ENavigationInputTypeA : uint8;
struct FPanelSlotSetting;
#ifdef BDC_UI_LIBRARY_BDC_UI_Interface_generated_h
#error "BDC_UI_Interface.generated.h already included, missing '#pragma once' in BDC_UI_Interface.h"
#endif
#define BDC_UI_LIBRARY_BDC_UI_Interface_generated_h

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPanelSlotSetting_Statics; \
	BDC_UI_LIBRARY_API static class UScriptStruct* StaticStruct();


template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<struct FPanelSlotSetting>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_SPARSE_DATA
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HUD_UpdateLoading_Implementation(bool bNewVisible, float FadingTime, USoundBase* AudioToPlay, const FString& Reason) {}; \
	virtual void HUD_Init_Implementation() {}; \
	virtual void HUD_RemoveWidgetByName_Implementation(FName WidgetToRemove, EHUD_Container OffContainer) {}; \
	virtual void HUD_RemoveWidgetByRef_Implementation(UUserWidget* WidgetToRemove, EHUD_Container OffContainer) {}; \
	virtual void HUD_AddWidget_Implementation(UUserWidget* WidgetToAdd, TSubclassOf<UUserWidget>  CreatingWidget, FName WidgetName, EHUD_Container IntoContainer, int32 At_Z_Position, FPanelSlotSetting SlotSettings, UWidget*& AddedWidget, UCanvasPanelSlot*& AddedCanvas) {}; \
	virtual void Widget_DoBack_Implementation(UWidget* FromWidget, FName FromName, int32 BackMode) {}; \
	virtual void Widget_UpdateHold_Implementation(float Percentage, bool bIsInvalidated) {}; \
	virtual void Widget_Trigger_Implementation(ENavigationInputTypeA InputOfType, bool bOnHold, float HoldDelta) {}; \
	virtual void Widget_EnableStateChanged_Implementation() {}; \
	virtual void Widget_UpdateInputMethod_Implementation(bool bUsesGamepad) {}; \
	virtual void Widget_SetActive_Implementation(bool bIsActive) {}; \
	virtual void Widget_Update_Implementation(int32 UpdateMode, FText const& Updateings) {}; \
	virtual void Widget_GetValue_Implementation(int32& InInteger, float& InFloat, FString& InString, bool& bInBool, FText& InText, FName& InName, FVector& InVector3, FVector2D& InVector2) {}; \
	virtual void Widget_SetValue_Implementation(const int32 InInteger, const float InFloat, const FString& InString, bool bInBool, FText const& InText, const FName InName, const FVector InVector3, const FVector2D InVector2) {}; \
	virtual void Widget_Focus_Implementation() {}; \
	virtual void Widget_Released_Implementation() {}; \
	virtual void Widget_Pressed_Implementation() {}; \
	virtual void Widget_Unhover_Implementation() {}; \
	virtual void Widget_Hover_Implementation() {}; \
 \
	DECLARE_FUNCTION(execHUD_UpdateLoading); \
	DECLARE_FUNCTION(execHUD_Init); \
	DECLARE_FUNCTION(execHUD_RemoveWidgetByName); \
	DECLARE_FUNCTION(execHUD_RemoveWidgetByRef); \
	DECLARE_FUNCTION(execHUD_AddWidget); \
	DECLARE_FUNCTION(execWidget_DoBack); \
	DECLARE_FUNCTION(execWidget_UpdateHold); \
	DECLARE_FUNCTION(execWidget_Trigger); \
	DECLARE_FUNCTION(execWidget_EnableStateChanged); \
	DECLARE_FUNCTION(execWidget_UpdateInputMethod); \
	DECLARE_FUNCTION(execWidget_SetActive); \
	DECLARE_FUNCTION(execWidget_Update); \
	DECLARE_FUNCTION(execWidget_GetValue); \
	DECLARE_FUNCTION(execWidget_SetValue); \
	DECLARE_FUNCTION(execWidget_Focus); \
	DECLARE_FUNCTION(execWidget_Released); \
	DECLARE_FUNCTION(execWidget_Pressed); \
	DECLARE_FUNCTION(execWidget_Unhover); \
	DECLARE_FUNCTION(execWidget_Hover);


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_CALLBACK_WRAPPERS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BDC_UI_LIBRARY_API UBDC_UI_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BDC_UI_LIBRARY_API UBDC_UI_Interface(UBDC_UI_Interface&&); \
	BDC_UI_LIBRARY_API UBDC_UI_Interface(const UBDC_UI_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BDC_UI_LIBRARY_API, UBDC_UI_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBDC_UI_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBDC_UI_Interface) \
	BDC_UI_LIBRARY_API virtual ~UBDC_UI_Interface();


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBDC_UI_Interface(); \
	friend struct Z_Construct_UClass_UBDC_UI_Interface_Statics; \
public: \
	DECLARE_CLASS(UBDC_UI_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BDC_UI_Library"), BDC_UI_LIBRARY_API) \
	DECLARE_SERIALIZER(UBDC_UI_Interface)


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_GENERATED_UINTERFACE_BODY() \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBDC_UI_Interface() {} \
public: \
	typedef UBDC_UI_Interface UClassType; \
	typedef IBDC_UI_Interface ThisClass; \
	static UWidget* Execute_AskFocusTarget(UObject* O); \
	static void Execute_HUD_AddWidget(UObject* O, UUserWidget* WidgetToAdd, TSubclassOf<UUserWidget>  CreatingWidget, FName WidgetName, EHUD_Container IntoContainer, int32 At_Z_Position, FPanelSlotSetting SlotSettings, UWidget*& AddedWidget, UCanvasPanelSlot*& AddedCanvas); \
	static void Execute_HUD_Init(UObject* O); \
	static void Execute_HUD_RemoveWidgetByName(UObject* O, FName WidgetToRemove, EHUD_Container OffContainer); \
	static void Execute_HUD_RemoveWidgetByRef(UObject* O, UUserWidget* WidgetToRemove, EHUD_Container OffContainer); \
	static void Execute_HUD_UpdateLoading(UObject* O, bool bNewVisible, float FadingTime, USoundBase* AudioToPlay, const FString& Reason); \
	static void Execute_Widget_DoBack(UObject* O, UWidget* FromWidget, FName FromName, int32 BackMode); \
	static void Execute_Widget_EnableStateChanged(UObject* O); \
	static void Execute_Widget_Focus(UObject* O); \
	static void Execute_Widget_GetValue(UObject* O, int32& InInteger, float& InFloat, FString& InString, bool& bInBool, FText& InText, FName& InName, FVector& InVector3, FVector2D& InVector2); \
	static void Execute_Widget_Hover(UObject* O); \
	static void Execute_Widget_Pressed(UObject* O); \
	static void Execute_Widget_Released(UObject* O); \
	static void Execute_Widget_SetActive(UObject* O, bool bIsActive); \
	static void Execute_Widget_SetValue(UObject* O, const int32 InInteger, const float InFloat, const FString& InString, bool bInBool, FText const& InText, const FName InName, const FVector InVector3, const FVector2D InVector2); \
	static void Execute_Widget_Trigger(UObject* O, ENavigationInputTypeA InputOfType, bool bOnHold, float HoldDelta); \
	static void Execute_Widget_Unhover(UObject* O); \
	static void Execute_Widget_Update(UObject* O, int32 UpdateMode, FText const& Updateings); \
	static void Execute_Widget_UpdateHold(UObject* O, float Percentage, bool bIsInvalidated); \
	static void Execute_Widget_UpdateInputMethod(UObject* O, bool bUsesGamepad); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_57_PROLOG
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_SPARSE_DATA \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_CALLBACK_WRAPPERS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h_60_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BDC_UI_LIBRARY_API UClass* StaticClass<class UBDC_UI_Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Interface_h


#define FOREACH_ENUM_EHUD_CONTAINER(op) \
	op(EHUD_Container::ContainerFree) \
	op(EHUD_Container::ContainerHUD) \
	op(EHUD_Container::ContainerPrompt) \
	op(EHUD_Container::ContainerOverlay) 

enum class EHUD_Container : uint8;
template<> struct TIsUEnumClass<EHUD_Container> { enum { Value = true }; };
template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EHUD_Container>();

#define FOREACH_ENUM_EALIGNH(op) \
	op(EAlignH::AlignHL) \
	op(EAlignH::AlignHC) \
	op(EAlignH::AlignHR) \
	op(EAlignH::AlignHS) 

enum class EAlignH : uint8;
template<> struct TIsUEnumClass<EAlignH> { enum { Value = true }; };
template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EAlignH>();

#define FOREACH_ENUM_EALIGNV(op) \
	op(EAlignV::AlignVT) \
	op(EAlignV::AlignVC) \
	op(EAlignV::AlignVB) \
	op(EAlignV::AlignVS) 

enum class EAlignV : uint8;
template<> struct TIsUEnumClass<EAlignV> { enum { Value = true }; };
template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EAlignV>();

#define FOREACH_ENUM_ENAVIGATIONINPUTTYPEA(op) \
	op(ENavigationInputTypeA::ANAVIGATING_NONE) \
	op(ENavigationInputTypeA::ANAVIGATING_UP) \
	op(ENavigationInputTypeA::ANAVIGATING_DOWN) \
	op(ENavigationInputTypeA::ANAVIGATING_LEFT) \
	op(ENavigationInputTypeA::ANAVIGATING_RIGHT) \
	op(ENavigationInputTypeA::ANAVIGATING_NEXT) \
	op(ENavigationInputTypeA::ANAVIGATING_PREV) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_SWITCHNEXT) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_SWITCHPREV) \
	op(ENavigationInputTypeA::ANAVIGATING_JUMPNEXT) \
	op(ENavigationInputTypeA::ANAVIGATING_JUMPPREV) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_CONFIRM) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_CANCEL) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL1) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_SPECIAL2) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_OPTION) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_SHARE) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_ADD1) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_ADD2) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_ADD3) \
	op(ENavigationInputTypeA::ANAVIGATING_IN_ADD4) \
	op(ENavigationInputTypeA::ANAVIGATING_INVALID) 

enum class ENavigationInputTypeA : uint8;
template<> struct TIsUEnumClass<ENavigationInputTypeA> { enum { Value = true }; };
template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<ENavigationInputTypeA>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
