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

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_FlintlockPistol_C::AnimNotify_ExitedFire()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire"));}

	UBP_Anim_FlintlockPistol_C_AnimNotify_ExitedFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass**                 InputID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWieldableItemActionVisuals* ActionVisuals                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_Anim_FlintlockPistol_C::OnOneShotUseTriggered(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered"));}

	UBP_Anim_FlintlockPistol_C_OnOneShotUseTriggered_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass**                 InputID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWieldableItemActionVisuals* ActionVisuals                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_Anim_FlintlockPistol_C::OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted"));}

	UBP_Anim_FlintlockPistol_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_FlintlockPistol_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation"));}

	UBP_Anim_FlintlockPistol_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FEventProjectileWeaponReload Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Anim_FlintlockPistol_C::ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate"));}

	UBP_Anim_FlintlockPistol_C_ReloadEventDelegate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_FlintlockPistol_C::BlueprintUninitializeAnimation()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation"));}

	UBP_Anim_FlintlockPistol_C_BlueprintUninitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_Anim_FlintlockPistol_C::AnimNotify_ResetReload()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload"));}

	UBP_Anim_FlintlockPistol_C_AnimNotify_ResetReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Anim_FlintlockPistol_C::ExecuteUbergraph_BP_Anim_FlintlockPistol(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol"));}

	UBP_Anim_FlintlockPistol_C_ExecuteUbergraph_BP_Anim_FlintlockPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
