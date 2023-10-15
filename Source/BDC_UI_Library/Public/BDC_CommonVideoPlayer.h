#pragma once
#include "CoreMinimal.h"
#include "CommonVideoPlayer.h"
#include "BDC_CommonVideoPlayer.generated.h"

UCLASS(DisplayName = "Element_MediaPlayer")
class BDC_UI_LIBRARY_API UBDC_CommonVideoPlayer : public UCommonVideoPlayer
{
	GENERATED_BODY()

public:
	// Start playing the current Set Mediafile from the first Frame
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void PlayMediaFromStart();

	// Start the current Set Mediafile
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void PlayMediaInternal();

	// Pause the Mediafile playback
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void PauseMedia();

	// Start playing the current Set Mediafile from the first Frame
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void PlayMedia();

	// Start playing the current Set Mediafile from the last frame on, reversed
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void PlayMediaReverse();

	// Set if the Media should play in a loop (true) or not (false)
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void LoopMedia(bool bShouldLoop);

	/*
	//The SetMedia function causes Compiler Errors and is not working right now
	//UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	//void SetMedia(UMediaSource* NewMedia);
	*/

	// Set the speed of the playback
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void SetMediaPlaybackRate(float PlaybackRate);

	// Mute the Audio of the Mediafile
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void MuteMedia(bool bMakeMuted);

	// Set the current Frame of the Media from which you want to play on
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void SeekMedia(float PlaybackTime);

	// Ticking Media is important in paused Games, where no auto Tick is available.
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void TickMedia(double InCurrentTime, float InDeltaTime);

	// Finish this Mediafile to load another
	UFUNCTION(BlueprintCallable, Category="BDC_CommonUI|Elements|MediaPlayer")
	void CloseMedia();

	// Returns the Playback times and speed
	UFUNCTION(BlueprintCallable, BlueprintPure=true, Category="BDC_CommonUI|Elements|MediaPlayer")
	void GetMediaTimes(float& PlaybackRate, float& PlaybackTime, float&Duration);

	// Returns the Playback settings
	UFUNCTION(BlueprintCallable, BlueprintPure=true, Category="BDC_CommonUI|Elements|MediaPlayer")
	void GetMediaSettings(bool& bLooping, bool& bMuted, bool& bPaused, bool& bPlaying);
};