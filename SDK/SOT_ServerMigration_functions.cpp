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

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OffsetFromDriverTime           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime"));}

	UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params;
	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ResumePropertyTracking(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking"));}

	UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::PausePropertyTrackingOnNextSend(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend"));}

	UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNetworkTestingBlueprintFunctionLibrary::IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor"));}

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UNetworkTestingBlueprintFunctionLibrary::GetReliableBufferBunchCount(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount"));}

	UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer"));}

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNetworkTestingBlueprintFunctionLibrary::ClearRecentRelevanceTimer(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer"));}

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress"));}

	UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic"));}

	UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void UServerMigrationBlueprintFunctionLibrary::WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent"));}

	UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel"));}

	UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorToBuffer(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
// (FUNC_Delegate)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params;
	params.ActorGroup = ActorGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
// (FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Offset                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Offset                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Buffer                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UServerMigrationBlueprintFunctionLibrary::TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer"));}

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FServerSettings         Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings"));}

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FClientSettings         Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerMigrationBlueprintFunctionLibrary::SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings"));}

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PacketLag                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PacketLagVariance              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PacketLoss                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings"));}

	UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PacketLag = PacketLag;
	params.PacketLagVariance = PacketLagVariance;
	params.PacketLoss = PacketLoss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::ResumeReplication(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication"));}

	UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 IdentificationName             (CPF_Parm, CPF_ZeroConstructor)

void UServerMigrationBlueprintFunctionLibrary::RegisterPersistentDynamicActor(class AActor* TargetActor, const struct FString& IdentificationName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor"));}

	UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params;
	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDropUnreliableRPCsWhilePaused (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerMigrationBlueprintFunctionLibrary::PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication"));}

	UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params;
	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::HasActorChannelFromServer(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer"));}

	UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveDormantActor(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor"));}

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UServerMigrationBlueprintFunctionLibrary::ClientsHaveActorChannel(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel"));}

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
