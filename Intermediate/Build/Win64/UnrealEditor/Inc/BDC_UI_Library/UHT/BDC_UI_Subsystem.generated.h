// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BDC_UI_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef BDC_UI_LIBRARY_BDC_UI_Subsystem_generated_h
#error "BDC_UI_Subsystem.generated.h already included, missing '#pragma once' in BDC_UI_Subsystem.h"
#endif
#define BDC_UI_LIBRARY_BDC_UI_Subsystem_generated_h

#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_SPARSE_DATA
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverrideLast); \
	DECLARE_FUNCTION(execInvalidateLastOfUI); \
	DECLARE_FUNCTION(execInvalidateSelections); \
	DECLARE_FUNCTION(execGetSelections); \
	DECLARE_FUNCTION(execSetCurrentUI); \
	DECLARE_FUNCTION(execGetLastOfUI); \
	DECLARE_FUNCTION(execSetLastofUI); \
	DECLARE_FUNCTION(execSelectNewWidget);


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_ACCESSORS
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBDC_UI_Subsystem(); \
	friend struct Z_Construct_UClass_UBDC_UI_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UBDC_UI_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BDC_UI_Library"), NO_API) \
	DECLARE_SERIALIZER(UBDC_UI_Subsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UBDC_UI_Subsystem*>(this); }


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBDC_UI_Subsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBDC_UI_Subsystem(UBDC_UI_Subsystem&&); \
	NO_API UBDC_UI_Subsystem(const UBDC_UI_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBDC_UI_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBDC_UI_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBDC_UI_Subsystem) \
	NO_API virtual ~UBDC_UI_Subsystem();


#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_15_PROLOG
#define FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_SPARSE_DATA \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_ACCESSORS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BDC_UI_LIBRARY_API UClass* StaticClass<class UBDC_UI_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_UI_Subsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
