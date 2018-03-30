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

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire
struct UBP_Anim_FlintlockPistol_C_AnimNotify_ExitedFire_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered
struct UBP_Anim_FlintlockPistol_C_OnOneShotUseTriggered_Params
{
	class UClass**                                     InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted
struct UBP_Anim_FlintlockPistol_C_OnUseStarted_Params
{
	class UClass**                                     InputID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation
struct UBP_Anim_FlintlockPistol_C_BlueprintInitializeAnimation_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate
struct UBP_Anim_FlintlockPistol_C_ReloadEventDelegate_Params
{
	struct FEventProjectileWeaponReload                Event;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation
struct UBP_Anim_FlintlockPistol_C_BlueprintUninitializeAnimation_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload
struct UBP_Anim_FlintlockPistol_C_AnimNotify_ResetReload_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol
struct UBP_Anim_FlintlockPistol_C_ExecuteUbergraph_BP_Anim_FlintlockPistol_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
