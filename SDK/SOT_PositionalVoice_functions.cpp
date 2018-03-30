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

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class APlayerController*       CurrentPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers"));}

	UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params params;
	params.CurrentPlayer = CurrentPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  VoiceChatRendererClass         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject, class UClass* VoiceChatRendererClass)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters"));}

	UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params params;
	params.WorldContextObject = WorldContextObject;
	params.VoiceChatRendererClass = VoiceChatRendererClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPositionalVoiceTestFunctionLibrary::GetMaxNumberOfAudibleChatEmitters()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters"));}

	UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation"));}

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (CPF_Parm, CPF_OutParm)

void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy"));}

	UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler"));}

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ATestVoiceChatEmitter::GetVoiceLocation()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation"));}

	ATestVoiceChatEmitter_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (CPF_Parm, CPF_OutParm)

void ATestVoiceChatEmitter::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy"));}

	ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATestVoiceChatEmitter::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler"));}

	ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
