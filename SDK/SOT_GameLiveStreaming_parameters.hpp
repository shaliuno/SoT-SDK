#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	int                                                FrameRate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ScreenScaling;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	bool                                               bEnableWebCam;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                DesiredWebCamWidth;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	int                                                DesiredWebCamHeight;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bMirrorWebCamImage;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	bool                                               bCaptureAudioFromComputer;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0015
	bool                                               bCaptureAudioFromMicrophone;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0016
	bool                                               bDrawSimpleWebCamVideo;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0017
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	struct FString                                     GameName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
