// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BDC_UI_FunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UInputMappingContext;
class UObject;
class UPanelSlot;
class UTexture2D;
enum class ECommonInputType : uint8;
enum class EKeyHitReturn : uint8;
enum class ESlateVisibility : uint8;
struct FDataTableRowHandle;
struct FKey;
struct FLineSystem;
struct FPanelSlotSetting;
struct FSourceTargetOffset;
#ifdef BDC_UI_LIBRARY_BDC_UI_FunctionLibrary_generated_h
#error "BDC_UI_FunctionLibrary.generated.h already included, missing '#pragma once' in BDC_UI_FunctionLibrary.h"
#endif
#define BDC_UI_LIBRARY_BDC_UI_FunctionLibrary_generated_h

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceTargetOffset_Statics; \
	BDC_UI_LIBRARY_API static class UScriptStruct* StaticStruct();


template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<struct FSourceTargetOffset>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineSystem_Statics; \
	BDC_UI_LIBRARY_API static class UScriptStruct* StaticStruct();


template<> BDC_UI_LIBRARY_API UScriptStruct* StaticStruct<struct FLineSystem>();

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_SPARSE_DATA
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisibleOfBool); \
	DECLARE_FUNCTION(execGetLinePointsBetween); \
	DECLARE_FUNCTION(execGetWidgetLookAt); \
	DECLARE_FUNCTION(execSetupPanelSlot); \
	DECLARE_FUNCTION(execGetEnhancedKeyOfInput); \
	DECLARE_FUNCTION(execGetKeyDataOfInput); \
	DECLARE_FUNCTION(execGetEnhancedKeys); \
	DECLARE_FUNCTION(execGetCommonKey); \
	DECLARE_FUNCTION(execGetKeyIcon);


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBDC_UI_FunctionLibrary(); \
	friend struct Z_Construct_UClass_UBDC_UI_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBDC_UI_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BDC_UI_Library"), NO_API) \
	DECLARE_SERIALIZER(UBDC_UI_FunctionLibrary)


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBDC_UI_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBDC_UI_FunctionLibrary(UBDC_UI_FunctionLibrary&&); \
	NO_API UBDC_UI_FunctionLibrary(const UBDC_UI_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBDC_UI_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBDC_UI_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBDC_UI_FunctionLibrary) \
	NO_API virtual ~UBDC_UI_FunctionLibrary();


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_58_PROLOG
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_SPARSE_DATA \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_INCLASS_NO_PURE_DECLS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BDC_UI_LIBRARY_API UClass* StaticClass<class UBDC_UI_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_FunctionLibrary_h


#define FOREACH_ENUM_EKEYHITRETURN(op) \
	op(EKeyHitReturn::KeyIsHit) \
	op(EKeyHitReturn::KeyIsNotHit) 

enum class EKeyHitReturn : uint8;
template<> struct TIsUEnumClass<EKeyHitReturn> { enum { Value = true }; };
template<> BDC_UI_LIBRARY_API UEnum* StaticEnum<EKeyHitReturn>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
