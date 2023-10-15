// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BDC_CommonVideoPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDC_CommonVideoPlayer() {}
// Cross Module References
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_CommonVideoPlayer();
	BDC_UI_LIBRARY_API UClass* Z_Construct_UClass_UBDC_CommonVideoPlayer_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer();
	UPackage* Z_Construct_UPackage__Script_BDC_UI_Library();
// End Cross Module References
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execGetMediaSettings)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bLooping);
		P_GET_UBOOL_REF(Z_Param_Out_bMuted);
		P_GET_UBOOL_REF(Z_Param_Out_bPaused);
		P_GET_UBOOL_REF(Z_Param_Out_bPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMediaSettings(Z_Param_Out_bLooping,Z_Param_Out_bMuted,Z_Param_Out_bPaused,Z_Param_Out_bPlaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execGetMediaTimes)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PlaybackRate);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PlaybackTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMediaTimes(Z_Param_Out_PlaybackRate,Z_Param_Out_PlaybackTime,Z_Param_Out_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execCloseMedia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMedia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execTickMedia)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InCurrentTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickMedia(Z_Param_InCurrentTime,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execSeekMedia)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekMedia(Z_Param_PlaybackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execMuteMedia)
	{
		P_GET_UBOOL(Z_Param_bMakeMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MuteMedia(Z_Param_bMakeMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execSetMediaPlaybackRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaPlaybackRate(Z_Param_PlaybackRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execLoopMedia)
	{
		P_GET_UBOOL(Z_Param_bShouldLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoopMedia(Z_Param_bShouldLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execPlayMediaReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMediaReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execPlayMedia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMedia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execPauseMedia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseMedia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execPlayMediaInternal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMediaInternal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBDC_CommonVideoPlayer::execPlayMediaFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMediaFromStart();
		P_NATIVE_END;
	}
	void UBDC_CommonVideoPlayer::StaticRegisterNativesUBDC_CommonVideoPlayer()
	{
		UClass* Class = UBDC_CommonVideoPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseMedia", &UBDC_CommonVideoPlayer::execCloseMedia },
			{ "GetMediaSettings", &UBDC_CommonVideoPlayer::execGetMediaSettings },
			{ "GetMediaTimes", &UBDC_CommonVideoPlayer::execGetMediaTimes },
			{ "LoopMedia", &UBDC_CommonVideoPlayer::execLoopMedia },
			{ "MuteMedia", &UBDC_CommonVideoPlayer::execMuteMedia },
			{ "PauseMedia", &UBDC_CommonVideoPlayer::execPauseMedia },
			{ "PlayMedia", &UBDC_CommonVideoPlayer::execPlayMedia },
			{ "PlayMediaFromStart", &UBDC_CommonVideoPlayer::execPlayMediaFromStart },
			{ "PlayMediaInternal", &UBDC_CommonVideoPlayer::execPlayMediaInternal },
			{ "PlayMediaReverse", &UBDC_CommonVideoPlayer::execPlayMediaReverse },
			{ "SeekMedia", &UBDC_CommonVideoPlayer::execSeekMedia },
			{ "SetMediaPlaybackRate", &UBDC_CommonVideoPlayer::execSetMediaPlaybackRate },
			{ "TickMedia", &UBDC_CommonVideoPlayer::execTickMedia },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finish this Mediafile to load another\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finish this Mediafile to load another" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "CloseMedia", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics
	{
		struct BDC_CommonVideoPlayer_eventGetMediaSettings_Parms
		{
			bool bLooping;
			bool bMuted;
			bool bPaused;
			bool bPlaying;
		};
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static void NewProp_bMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuted;
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventGetMediaSettings_Parms*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventGetMediaSettings_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bMuted_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventGetMediaSettings_Parms*)Obj)->bMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bMuted = { "bMuted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventGetMediaSettings_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bMuted_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventGetMediaSettings_Parms*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventGetMediaSettings_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventGetMediaSettings_Parms*)Obj)->bPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventGetMediaSettings_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bMuted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::NewProp_bPlaying,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Playback settings\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Playback settings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "GetMediaSettings", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::BDC_CommonVideoPlayer_eventGetMediaSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::BDC_CommonVideoPlayer_eventGetMediaSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics
	{
		struct BDC_CommonVideoPlayer_eventGetMediaTimes_Parms
		{
			float PlaybackRate;
			float PlaybackTime;
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventGetMediaTimes_Parms, PlaybackRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventGetMediaTimes_Parms, PlaybackTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventGetMediaTimes_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_PlaybackRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_PlaybackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Playback times and speed\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Playback times and speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "GetMediaTimes", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::BDC_CommonVideoPlayer_eventGetMediaTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::BDC_CommonVideoPlayer_eventGetMediaTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics
	{
		struct BDC_CommonVideoPlayer_eventLoopMedia_Parms
		{
			bool bShouldLoop;
		};
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventLoopMedia_Parms*)Obj)->bShouldLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventLoopMedia_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::NewProp_bShouldLoop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set if the Media should play in a loop (true) or not (false)\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set if the Media should play in a loop (true) or not (false)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "LoopMedia", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::BDC_CommonVideoPlayer_eventLoopMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::BDC_CommonVideoPlayer_eventLoopMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics
	{
		struct BDC_CommonVideoPlayer_eventMuteMedia_Parms
		{
			bool bMakeMuted;
		};
		static void NewProp_bMakeMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeMuted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::NewProp_bMakeMuted_SetBit(void* Obj)
	{
		((BDC_CommonVideoPlayer_eventMuteMedia_Parms*)Obj)->bMakeMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::NewProp_bMakeMuted = { "bMakeMuted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BDC_CommonVideoPlayer_eventMuteMedia_Parms), &Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::NewProp_bMakeMuted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::NewProp_bMakeMuted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mute the Audio of the Mediafile\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mute the Audio of the Mediafile" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "MuteMedia", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::BDC_CommonVideoPlayer_eventMuteMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::BDC_CommonVideoPlayer_eventMuteMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pause the Mediafile playback\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause the Mediafile playback" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "PauseMedia", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start playing the current Set Mediafile from the first Frame\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing the current Set Mediafile from the first Frame" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "PlayMedia", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start playing the current Set Mediafile from the first Frame\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing the current Set Mediafile from the first Frame" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "PlayMediaFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start the current Set Mediafile\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the current Set Mediafile" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "PlayMediaInternal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start playing the current Set Mediafile from the last frame on, reversed\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing the current Set Mediafile from the last frame on, reversed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "PlayMediaReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics
	{
		struct BDC_CommonVideoPlayer_eventSeekMedia_Parms
		{
			float PlaybackTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventSeekMedia_Parms, PlaybackTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::NewProp_PlaybackTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the current Frame of the Media from which you want to play on\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the current Frame of the Media from which you want to play on" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "SeekMedia", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::BDC_CommonVideoPlayer_eventSeekMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::BDC_CommonVideoPlayer_eventSeekMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics
	{
		struct BDC_CommonVideoPlayer_eventSetMediaPlaybackRate_Parms
		{
			float PlaybackRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventSetMediaPlaybackRate_Parms, PlaybackRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::NewProp_PlaybackRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09//The SetMedia function causes Compiler Errors and is not working right now\n\x09//UFUNCTION(BlueprintCallable, Category=\"BDC_CommonUI|Elements|MediaPlayer\")\n\x09//void SetMedia(UMediaSource* NewMedia);\n\x09*/// Set the speed of the playback\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//The SetMedia function causes Compiler Errors and is not working right now\n//UFUNCTION(BlueprintCallable, Category=\"BDC_CommonUI|Elements|MediaPlayer\")\n//void SetMedia(UMediaSource* NewMedia);\n// Set the speed of the playback" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "SetMediaPlaybackRate", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::BDC_CommonVideoPlayer_eventSetMediaPlaybackRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::BDC_CommonVideoPlayer_eventSetMediaPlaybackRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics
	{
		struct BDC_CommonVideoPlayer_eventTickMedia_Parms
		{
			double InCurrentTime;
			float InDeltaTime;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InCurrentTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::NewProp_InCurrentTime = { "InCurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventTickMedia_Parms, InCurrentTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BDC_CommonVideoPlayer_eventTickMedia_Parms, InDeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::NewProp_InCurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "BDC_CommonUI|Elements|MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ticking Media is important in paused Games, where no auto Tick is available.\n" },
#endif
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ticking Media is important in paused Games, where no auto Tick is available." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBDC_CommonVideoPlayer, nullptr, "TickMedia", nullptr, nullptr, Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::BDC_CommonVideoPlayer_eventTickMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::BDC_CommonVideoPlayer_eventTickMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDC_CommonVideoPlayer);
	UClass* Z_Construct_UClass_UBDC_CommonVideoPlayer_NoRegister()
	{
		return UBDC_CommonVideoPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonVideoPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_BDC_UI_Library,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_CloseMedia, "CloseMedia" }, // 3649850469
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaSettings, "GetMediaSettings" }, // 2966022257
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_GetMediaTimes, "GetMediaTimes" }, // 1133770029
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_LoopMedia, "LoopMedia" }, // 2890277635
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_MuteMedia, "MuteMedia" }, // 480639117
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_PauseMedia, "PauseMedia" }, // 2225602087
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMedia, "PlayMedia" }, // 954872019
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaFromStart, "PlayMediaFromStart" }, // 770635727
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaInternal, "PlayMediaInternal" }, // 2675512248
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_PlayMediaReverse, "PlayMediaReverse" }, // 2904710789
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_SeekMedia, "SeekMedia" }, // 1669022551
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_SetMediaPlaybackRate, "SetMediaPlaybackRate" }, // 1088055411
		{ &Z_Construct_UFunction_UBDC_CommonVideoPlayer_TickMedia, "TickMedia" }, // 3731904720
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Element_MediaPlayer" },
		{ "IncludePath", "BDC_CommonVideoPlayer.h" },
		{ "ModuleRelativePath", "Public/BDC_CommonVideoPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBDC_CommonVideoPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::ClassParams = {
		&UBDC_CommonVideoPlayer::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBDC_CommonVideoPlayer()
	{
		if (!Z_Registration_Info_UClass_UBDC_CommonVideoPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDC_CommonVideoPlayer.OuterSingleton, Z_Construct_UClass_UBDC_CommonVideoPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBDC_CommonVideoPlayer.OuterSingleton;
	}
	template<> BDC_UI_LIBRARY_API UClass* StaticClass<UBDC_CommonVideoPlayer>()
	{
		return UBDC_CommonVideoPlayer::StaticClass();
	}
	UBDC_CommonVideoPlayer::UBDC_CommonVideoPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBDC_CommonVideoPlayer);
	UBDC_CommonVideoPlayer::~UBDC_CommonVideoPlayer() {}
	struct Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_CommonVideoPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_CommonVideoPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBDC_CommonVideoPlayer, UBDC_CommonVideoPlayer::StaticClass, TEXT("UBDC_CommonVideoPlayer"), &Z_Registration_Info_UClass_UBDC_CommonVideoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDC_CommonVideoPlayer), 578265731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_CommonVideoPlayer_h_3705214657(TEXT("/Script/BDC_UI_Library"),
		Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_CommonVideoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Design_Unreal_Projekte_LoH_TheTavern_Plugins_BDC_UI_Library_Source_BDC_UI_Library_Public_BDC_CommonVideoPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
