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

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bShouldBlockAbilities          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities"));}

	UGameplayAbility_SetShouldBlockOtherAbilities_Params params;
	params.bShouldBlockAbilities = bShouldBlockAbilities;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bCanBeCanceled                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled"));}

	UGameplayAbility_SetCanBeCanceled_Params params;
	params.bCanBeCanceled = bCanBeCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            EventTag                       (CPF_Parm)
// struct FGameplayEventData      payload                        (CPF_Parm)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SendGameplayEvent"));}

	UGameplayAbility_SendGameplayEvent_Params params;
	params.EventTag = EventTag;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          OverrideBlendOutTime           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageStop"));}

	UGameplayAbility_MontageStop_Params params;
	params.OverrideBlendOutTime = OverrideBlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   FromSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ToSectionName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName"));}

	UGameplayAbility_MontageSetNextSectionName_Params params;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageJumpToSection"));}

	UGameplayAbility_MontageJumpToSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (FUNC_NetReliable, FUNC_Delegate)
// Parameters:
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent"));}

	UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (FUNC_Net)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor"));}

	UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec"));}

	UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Delegate, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm)
// struct FGameplayEventData      payload                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent"));}

	UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue"));}

	UGameplayAbility_K2_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayAbility::K2_OnEndAbility()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility"));}

	UGameplayAbility_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams"));}

	UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue"));}

	UGameplayAbility_K2_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayAbility::K2_EndAbility()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_EndAbility"));}

	UGameplayAbility_K2_EndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayAbility::K2_CommitExecute()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitExecute"));}

	UGameplayAbility_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (FUNC_RequiredAPI, FUNC_MulticastDelegate)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost"));}

	UGameplayAbility_K2_CommitAbilityCost_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (FUNC_RequiredAPI, FUNC_MulticastDelegate)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown"));}

	UGameplayAbility_K2_CommitAbilityCooldown_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CommitAbility()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbility"));}

	UGameplayAbility_K2_CommitAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost"));}

	UGameplayAbility_K2_CheckAbilityCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown"));}

	UGameplayAbility_K2_CheckAbilityCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (FUNC_Final, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm)
// struct FGameplayTagContainer   RelevantTags                   (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility"));}

	UGameplayAbility_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
// (FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget"));}

	UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
// (FUNC_Private, FUNC_Protected)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner"));}

	UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget"));}

	UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params;
	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner"));}

	UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// bool                           bRemoveOnAbilityEnd            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue"));}

	UGameplayAbility_K2_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayEventData      eventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& eventData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent"));}

	UGameplayAbility_K2_ActivateAbilityFromEvent_Params params;
	params.eventData = eventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayAbility::K2_ActivateAbility()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility"));}

	UGameplayAbility_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (FUNC_BlueprintCosmetic)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo"));}

	UGameplayAbility_GetOwningComponentFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo"));}

	UGameplayAbility_GetOwningActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec"));}

	UGameplayAbility_GetOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject"));}

	UGameplayAbility_GetCurrentSourceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentMontage"));}

	UGameplayAbility_GetCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle OptionalTargetData             (CPF_Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetContextFromOwner"));}

	UGameplayAbility_GetContextFromOwner_Params params;
	params.OptionalTargetData = OptionalTargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo"));}

	UGameplayAbility_GetAvatarActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetActorInfo"));}

	UGameplayAbility_GetActorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UGameplayAbility::GetAbilityLevel()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilityLevel"));}

	UGameplayAbility_GetAbilityLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName"));}

	UGameplayAbility_EndTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   OptionalStateNameToEnd         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndAbilityState"));}

	UGameplayAbility_EndAbilityState_Params params;
	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEndTask                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName"));}

	UGameplayAbility_ConfirmTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName"));}

	UGameplayAbility_CancelTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTagContainer   WithGrantedTags                (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags"));}

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params;
	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTagContainer   WithAssetTags                  (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags"));}

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params;
	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget"));}

	UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (FUNC_Private, FUNC_Protected)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner"));}

	UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent"));}

	UGameplayCueInterface_ForwardGameplayCueToParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler"));}

	UGameplayCueInterface_BlueprintCustomHandler_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin"));}

	UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult"));}

	UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint"));}

	UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor"));}

	UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax"));}

	UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// int                            StackCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount"));}

	UAbilitySystemBlueprintLibrary_SetStackCount_Params params;
	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration"));}

	UAbilitySystemBlueprintLibrary_SetDuration_Params params;
	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            EventTag                       (CPF_Parm)
// struct FGameplayEventData      payload                        (CPF_Parm)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor"));}

	UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params;
	params.Actor = Actor;
	params.EventTag = EventTag;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UGameplayEffect*         InGameplayEffect               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InInstigator                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InEffectCauser                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InLevel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle"));}

	UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params;
	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FGameplayTargetDataFilter Filter                         (CPF_Parm)
// class AActor*                  FilterActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle"));}

	UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params;
	params.Filter = Filter;
	params.FilterActor = FilterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (FUNC_Final, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer"));}

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (FUNC_Final, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled"));}

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (FUNC_Final, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult"));}

	UAbilitySystemBlueprintLibrary_HasHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (FUNC_Net, FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin"));}

	UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (FUNC_Net, FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform"));}

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint"));}

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin"));}

	UAbilitySystemBlueprintLibrary_GetOrigin_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform"));}

	UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor"));}

	UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData"));}

	UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (FUNC_NetRequest, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult"));}

	UAbilitySystemBlueprintLibrary_GetHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (FUNC_Final, FUNC_NetReliable, FUNC_NetServer, FUNC_HasDefaults)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal"));}

	UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_Private, FUNC_Delegate, FUNC_HasDefaults)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FVector                 Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection"));}

	UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (FUNC_BlueprintCosmetic, FUNC_Private, FUNC_Delegate)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute"));}

	UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData"));}

	UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData"));}

	UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount"));}

	UAbilitySystemBlueprintLibrary_GetActorCount_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex"));}

	UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params;
	params.Parameters = Parameters;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount"));}

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (FUNC_Protected)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent"));}

	UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget"));}

	UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params;
	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (CPF_Parm)
// struct FGameplayTargetDataFilterHandle ActorFilterClass               (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData"));}

	UAbilitySystemBlueprintLibrary_FilterTargetData_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled"));}

	UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult"));}

	UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (FUNC_BlueprintAuthorityOnly, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser"));}

	UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (FUNC_Final, FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor"));}

	UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (FUNC_Final, FUNC_NetRequest, FUNC_NetServer, FUNC_NetClient)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// struct FGameplayTagRequirements SourceTagReqs                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagRequirements TargetTagReqs                  (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements"));}

	UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (FUNC_Net, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FName                   DataName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude"));}

	UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (FUNC_NetServer)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetHandle                   (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle HandleToAdd                    (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle"));}

	UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params;
	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec       (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec"));}

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags"));}

	UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag"));}

	UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_HasOutParms)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags"));}

	UAbilitySystemBlueprintLibrary_AddAssetTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag"));}

	UAbilitySystemBlueprintLibrary_AddAssetTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo SourceLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayAbilityTargetingLocationInfo TargetLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations"));}

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params;
	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (FUNC_NetReliable, FUNC_HasDefaults)
// Parameters:
// struct FHitResult              HitResult                      (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult"));}

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// TArray<class AActor*>          ActorArray                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           OneTargetPerHandle             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray"));}

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params;
	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor"));}

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Protected)
// Parameters:
// class UClass*                  InAbilityToActivate            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass"));}

	UAbilitySystemComponent_TryActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Protected, FUNC_NetServer)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag"));}

	UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::TargetConfirm()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm"));}

	UAbilitySystemComponent_TargetConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::TargetCancel()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetCancel"));}

	UAbilitySystemComponent_TargetCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           NewInhibit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited"));}

	UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params;
	params.NewInhibit = NewInhibit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel"));}

	UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params;
	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData"));}

	UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility"));}

	UAbilitySystemComponent_ServerTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled"));}

	UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (CPF_Parm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData"));}

	UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent"));}

	UAbilitySystemComponent_ServerSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased"));}

	UAbilitySystemComponent_ServerSetInputReleased_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed"));}

	UAbilitySystemComponent_ServerSetInputPressed_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility"));}

	UAbilitySystemComponent_ServerEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ClientPosition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   NextSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName"));}

	UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName"));}

	UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility"));}

	UAbilitySystemComponent_ServerCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  GameplayEffect                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect"));}

	UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect"));}

	UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm)

void UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags"));}

	UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage"));}

	UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::OnRep_PredictionKey()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey"));}

	UAbilitySystemComponent_OnRep_PredictionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor"));}

	UAbilitySystemComponent_OnRep_OwningActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::OnRep_GameplayEffects()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects"));}

	UAbilitySystemComponent_OnRep_GameplayEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities"));}

	UAbilitySystemComponent_OnRep_ActivateAbilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams"));}

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec"));}

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted"));}

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec"));}

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded"));}

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (FUNC_Net, FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec"));}

	UAbilitySystemComponent_MakeOutgoingSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  Attributes                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats"));}

	UAbilitySystemComponent_K2_InitStats_Params params;
	params.Attributes = Attributes;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget"));}

	UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf"));}

	UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive"));}

	UAbilitySystemComponent_IsGameplayCueActive_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited"));}

	UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec"));}

	UAbilitySystemComponent_GetOutgoingSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude"));}

	UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params;
	params.Handle = Handle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate)
// Parameters:
// class UClass*                  SourceGameplayEffect           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount"));}

	UAbilitySystemComponent_GetGameplayEffectCount_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemComponent::GetEffectContext()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetEffectContext"));}

	UAbilitySystemComponent_GetEffectContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility"));}

	UAbilitySystemComponent_ClientTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent"));}

	UAbilitySystemComponent_ClientSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility"));}

	UAbilitySystemComponent_ClientEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility"));}

	UAbilitySystemComponent_ClientCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData"));}

	UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// struct FPredictionKey          PredictionKey                  (CPF_Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed"));}

	UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm)
// int16_t                        PredictionKey                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed"));}

	UAbilitySystemComponent_ClientActivateAbilityFailed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget"));}

	UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UClass*                  GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf"));}

	UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_NetServer)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget"));}

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf"));}

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature"));}

	UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InputID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature"));}

	UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts"));}

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns"));}

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (FUNC_BlueprintCosmetic, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveFloat*             OptionalInterpolationCurve     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCurveVector*            OptionalVectorInterpolationCurve (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_MoveToLocation* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation"));}

	UAbilityTask_MoveToLocation_MoveToLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAbilityTaskNetSyncType> SyncType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync"));}

	UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SyncType = SyncType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback"));}

	UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted"));}

	UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut"));}

	UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StartSection                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy"));}

	UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TimeBetweenActions             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TotalActionCount               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_Repeat*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction"));}

	UAbilityTask_Repeat_RepeatAction_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_SpawnActor* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor"));}

	UAbilityTask_SpawnActor_SpawnActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor"));}

	UAbilityTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor"));}

	UAbilityTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StateName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEndCurrentState               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_StartAbilityState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState"));}

	UAbilityTask_StartAbilityState_StartAbilityState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor"));}

	UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting"));}

	UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor"));}

	UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor"));}

	UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            WithTag                        (CPF_Parm)
// struct FGameplayTag            WithoutTag                     (CPF_Parm)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate"));}

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate"));}

	UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            WithTag                        (CPF_Parm)
// struct FGameplayTag            WithoutTage                    (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit"));}

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit"));}

	UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (FUNC_BlueprintCosmetic, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      InAttribute                    (CPF_Parm)
// struct FGameplayTag            InWithTag                      (CPF_Parm)
// struct FGameplayTag            InWithoutTag                   (CPF_Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InComparisonValue              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison"));}

	UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (FUNC_Protected, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (CPF_Parm)
// struct FGameplayTag            WithSrcTag                     (CPF_Parm)
// struct FGameplayTag            WithoutSrcTag                  (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange"));}

	UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel"));}

	UAbilityTask_WaitCancel_WaitCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback"));}

	UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback"));}

	UAbilityTask_WaitCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitConfirm* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm"));}

	UAbilityTask_WaitConfirm_WaitConfirm_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UGameplayAbility*        Ability                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* Ability)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback"));}

	UAbilityTask_WaitConfirm_OnConfirmCallback_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitConfirmCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel"));}

	UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback"));}

	UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback"));}

	UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback"));}

	UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback"));}

	UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UObject* WorldContextObject, float Time)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay"));}

	UAbilityTask_WaitDelay_WaitDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_Exec, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FGameplayEffectSpec     SpecApplied                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback"));}

	UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params;
	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (FUNC_Net, FUNC_NetReliable, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf"));}

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (FUNC_Net, FUNC_NetReliable, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTargetDataFilterHandle TargetFilter                   (CPF_ConstParm, CPF_Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget"));}

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm)
// class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved"));}

	UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved"));}

	UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback"));}

	UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd"));}

	UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove"));}

	UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestAlreadyPressed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitInputPress* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress"));}

	UAbilityTask_WaitInputPress_WaitInputPress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback"));}

	UAbilityTask_WaitInputPress_OnPressCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestAlreadyReleased           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitInputRelease* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease"));}

	UAbilityTask_WaitInputRelease_WaitInputRelease_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback"));}

	UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  PreviousCustomMode             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange"));}

	UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange"));}

	UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (FUNC_Protected)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitOverlap* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UObject* WorldContextObject)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap"));}

	UAbilityTask_WaitOverlap_WaitForOverlap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAbilityTask_WaitOverlap::OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback"));}

	UAbilityTask_WaitOverlap_OnOverlapCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAbilityTask_WaitOverlap::OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback"));}

	UAbilityTask_WaitOverlap_OnHitCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor"));}

	UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData"));}

	UAbilityTask_WaitTargetData_WaitTargetData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback"));}

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_Parm)
// struct FGameplayTag            ActivationTag                  (CPF_Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback"));}

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback"));}

	UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_Parm)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback"));}

	UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor"));}

	UAbilityTask_WaitTargetData_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor"));}

	UAbilityTask_WaitTargetData_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinimumMagnitude               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilityTask_WaitVelocityChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange"));}

	UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector"));}

	AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat"));}

	AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged"));}

	AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor"));}

	AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized"));}

	AGameplayAbilityWorldReticle_OnParametersInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bFaceIn2D                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource"));}

	AGameplayAbilityWorldReticle_FaceTowardSource_Params params;
	params.bFaceIn2D = bFaceIn2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting"));}

	AGameplayAbilityTargetActor_ConfirmTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting"));}

	AGameplayAbilityTargetActor_CancelTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive"));}

	AGameplayCueNotify_Actor_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove"));}

	AGameplayCueNotify_Actor_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AGameplayCueNotify_Actor::OnOwnerDestroyed()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed"));}

	AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute"));}

	AGameplayCueNotify_Actor_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive"));}

	AGameplayCueNotify_Actor_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue"));}

	AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive"));}

	UGameplayCueNotify_Static_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove"));}

	UGameplayCueNotify_Static_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute"));}

	UGameplayCueNotify_Static_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnActive"));}

	UGameplayCueNotify_Static_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue"));}

	UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParams                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayEffectCustomExecutionOutput OutExecutionOutput             (CPF_Parm, CPF_OutParm)

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute"));}

	UGameplayEffectExecutionCalculation_Execute_Params params;
	params.ExecutionParams = ExecutionParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Exec, FUNC_Protected, FUNC_Delegate, FUNC_HasDefaults, FUNC_DLLImport)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude"));}

	UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAbilitySystemComponent* ASC                            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent"));}

	UGameplayTagReponseTable_TagResponseEvent_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
