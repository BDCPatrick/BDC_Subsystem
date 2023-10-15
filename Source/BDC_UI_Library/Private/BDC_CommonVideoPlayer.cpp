#include "BDC_CommonVideoPlayer.h"


void UBDC_CommonVideoPlayer::PlayMediaFromStart()
{
	PlayFromStart();
}

void UBDC_CommonVideoPlayer::PlayMediaInternal()
{
	PlayInternal();
}

void UBDC_CommonVideoPlayer::PlayMedia()
{
	Play();
}

void UBDC_CommonVideoPlayer::PlayMediaReverse()
{
	Reverse();
}

void UBDC_CommonVideoPlayer::LoopMedia(const bool bShouldLoop)
{
	SetLooping(bShouldLoop);
}

void UBDC_CommonVideoPlayer::SetMediaPlaybackRate(const float PlaybackRate)
{
	SetPlaybackRate(PlaybackRate);
}

void UBDC_CommonVideoPlayer::MuteMedia(const bool bMakeMuted)
{
	SetIsMuted(bMakeMuted);
}

void UBDC_CommonVideoPlayer::SeekMedia(const float PlaybackTime)
{
	Seek(PlaybackTime);
}

void UBDC_CommonVideoPlayer::TickMedia(const double InCurrentTime, const float InDeltaTime)
{
	PlaybackTick(InCurrentTime, InDeltaTime);
}

void UBDC_CommonVideoPlayer::PauseMedia()
{
	Pause();
}

void UBDC_CommonVideoPlayer::CloseMedia()
{
	Close();
}

void UBDC_CommonVideoPlayer::GetMediaTimes(float& PlaybackRate, float& PlaybackTime, float&Duration)
{
	PlaybackRate = GetPlaybackRate();
	PlaybackTime = GetPlaybackTime();
	Duration = GetVideoDuration();
}

void UBDC_CommonVideoPlayer::GetMediaSettings(bool& bLooping, bool& bMuted, bool& bPaused, bool& bPlaying)
{
	bLooping = IsLooping();
	bMuted = IsMuted();
	bPaused = IsPaused();
	bPlaying = IsPlaying();
}