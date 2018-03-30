// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameLiveStreamingFunctionLibrary::StopBroadcastingGame()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame"));}

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            FrameRate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScreenScaling                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnableWebCam                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamWidth             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DesiredWebCamHeight            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMirrorWebCamImage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromComputer      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCaptureAudioFromMicrophone    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawSimpleWebCamVideo         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameLiveStreamingFunctionLibrary::StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame"));}

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bEnableWebCam = bEnableWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameLiveStreamingFunctionLibrary::IsBroadcastingGame()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame"));}

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FString                 GameName                       (CPF_Parm, CPF_ZeroConstructor)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::QueryLiveStreams(const struct FString& GameName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams"));}

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
