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

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   StateGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StateValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState"));}

	UWwiseEmitterBlueprintLibrary_WwiseSetState_Params params;
	params.StateGroup = StateGroup;
	params.StateValue = StateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   RTPCName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC"));}

	UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWwiseEvent*             Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwisePostGlobalEvent(class UWwiseEvent* Event)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent"));}

	UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_Parm, CPF_OutParm)
// class UWwiseEvent*             Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Front                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation"));}

	UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params params;
	params.Event = Event;
	params.Location = Location;
	params.Front = Front;
	params.EmitterPool = EmitterPool;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
// (FUNC_Final, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FWwiseListenerInfo      InfoOut                        (CPF_Parm, CPF_OutParm)
// int                            Viewport                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo"));}

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params params;
	params.Viewport = Viewport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InfoOut != nullptr)
		*InfoOut = params.InfoOut;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_Parm, CPF_OutParm)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ListenerIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFollowOrientaion              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter"));}

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ListenerIndex = ListenerIndex;
	params.Name = Name;
	params.Offset = Offset;
	params.bFollowOrientaion = bFollowOrientaion;
	params.EmitterPool = EmitterPool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_Parm, CPF_OutParm)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Owner                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Offset                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter"));}

	UWwiseEmitterBlueprintLibrary_WwiseGetEmitter_Params params;
	params.Name = Name;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
// (FUNC_Final, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            PlayId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            PlayId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FadeTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected, FUNC_Delegate)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params params;
	params.Emitters = Emitters;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
// (FUNC_Final, FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_Public, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FWwiseEmitterParams     Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params params;
	params.Emitter = Emitter;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params params;
	params.Emitter = Emitter;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourcePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceObj                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params params;
	params.Emitters = Emitters;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWwiseEvent*             WwiseEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourcePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceObj                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params params;
	params.Emitter = Emitter;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params params;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWwiseEvent*             Event                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params params;
	params.Emitter = Emitter;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWwiseEmitterBlueprintLibrary::WwiseEmitterDestroy(struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected, FUNC_Delegate)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params params;
	params.EmitterComponent = EmitterComponent;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourcePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceObj                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_NetServer)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourcePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceObj                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent"));}

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params params;
	params.EmitterComponent = EmitterComponent;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
// (FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FWwiseEmitter           Emitter                        (CPF_Parm, CPF_OutParm)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWwiseEmitterCreationParams CreationParams                 (CPF_Parm)
// TEnumAsByte<EEmitterRelationship> Relationship                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Forward                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter"));}

	UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params params;
	params.Name = Name;
	params.EmitterPool = EmitterPool;
	params.Location = Location;
	params.CreationParams = CreationParams;
	params.Relationship = Relationship;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWwiseEvent*             in_eventID                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            in_iPosition                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           in_bSeekToNearestMarker        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            in_PlayingID                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent"));}

	UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_eventID = in_eventID;
	params.in_iPosition = in_iPosition;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            in_PlayingID                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PlaybackPositionInMs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition"));}

	UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlaybackPositionInMs != nullptr)
		*PlaybackPositionInMs = params.PlaybackPositionInMs;

	return params.ReturnValue;
}


// Function RareAudio.AudioEventToComponentMap.ClearMappings
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AAudioEventToComponentMap::ClearMappings()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.ClearMappings"));}

	AAudioEventToComponentMap_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAudioEventToComponentMap::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent"));}

	AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMap.AddMapping
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAudioEventToComponentMap::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMapping"));}

	AAudioEventToComponentMap_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAudioEventToComponentMapComponent::ClearMappings()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.ClearMappings"));}

	UAudioEventToComponentMapComponent_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent"));}

	UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMapping"));}

	UAudioEventToComponentMapComponent_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UAudioSpaceDataAsset::GetRtpcName()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceDataAsset.GetRtpcName"));}

	UAudioSpaceDataAsset_GetRtpcName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalComponent.SetParentShip
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ParentShip                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalComponent.SetParentShip"));}

	UAudioPortalComponent_SetParentShip_Params params;
	params.ParentShip = ParentShip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.UnregisterPortal
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.UnregisterPortal"));}

	UAudioPortalInterface_UnregisterPortal_Params params;
	params.AudioPortal = AudioPortal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.RegisterPortal
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OwningActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.RegisterPortal"));}

	UAudioPortalInterface_RegisterPortal_Params params;
	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (FUNC_Delegate)
// Parameters:
// class UAudioSpaceDataAsset*    AudioSpace                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OwningActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (CPF_ConstParm, CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace"));}

	UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params params;
	params.AudioSpace = AudioSpace;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
// ()
// Parameters:
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (CPF_ConstParm, CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals"));}

	UAudioPortalInterface_GetAllRegisteredPortals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioSpaceComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapEnd"));}

	UAudioSpaceComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FromSweep                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAudioSpaceComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapBegin"));}

	UAudioSpaceComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAudioSpaceDataAsset*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace"));}

	UAudioSpaceTrackerComponent_GetCurrentSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations"));}

	UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (CPF_Parm, CPF_OutParm)
// struct FName                   InNameOfEmitterToRetrieve      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InActorToFindEmitterOn         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter"));}

	UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params params;
	params.InNameOfEmitterToRetrieve = InNameOfEmitterToRetrieve;
	params.InActorToFindEmitterOn = InActorToFindEmitterOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// TArray<struct FWwiseEmitter>   OutEmitters                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FVector                 InFromPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            InNumEmittersToFind            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters"));}

	UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params params;
	params.InFromPosition = InFromPosition;
	params.InNumEmittersToFind = InNumEmittersToFind;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitters != nullptr)
		*OutEmitters = params.OutEmitters;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (CPF_Parm, CPF_OutParm)
// struct FVector                 InFromPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter"));}

	UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params params;
	params.InFromPosition = InFromPosition;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
