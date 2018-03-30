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

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params
{
	class APlayerController*                           CurrentPlayer;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      VoiceChatRendererClass;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                             // (CPF_Parm, CPF_OutParm) 0000
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
struct ATestVoiceChatEmitter_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
struct ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                             // (CPF_Parm, CPF_OutParm) 0000
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
struct ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
