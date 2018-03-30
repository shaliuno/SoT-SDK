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

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
struct ABP_Cannon_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
struct ABP_Cannon_C_UserConstructionScript_Params
{
};

// Function BP_Cannon.BP_Cannon_C.ReceiveBeginPlay
struct ABP_Cannon_C_ReceiveBeginPlay_Params
{
};

// Function BP_Cannon.BP_Cannon_C.ReceiveEndPlay
struct ABP_Cannon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredPitch
struct ABP_Cannon_C_CannonAimingCenteredPitch_Params
{
	struct FEventCannonAimingCenteredPitch             Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedPitch
struct ABP_Cannon_C_CannonAimingStartedPitch_Params
{
	struct FEventCannonAimingStartedPitch              Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedPitch
struct ABP_Cannon_C_CannonAimingStoppedPitch_Params
{
	struct FEventCannonAimingStoppedPitch              Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingCenteredYaw
struct ABP_Cannon_C_CannonAimingCenteredYaw_Params
{
	struct FEventCannonAimingCenteredYaw               Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStartedYaw
struct ABP_Cannon_C_CannonAimingStartedYaw_Params
{
	struct FEventCannonAimingStartedYaw                Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.CannonAimingStoppedYaw
struct ABP_Cannon_C_CannonAimingStoppedYaw_Params
{
	struct FEventCannonAimingStoppedYaw                Event;                                                    // (CPF_Parm) 0000
};

// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
struct ABP_Cannon_C_OnCannonDescLoaded_Params
{
	class UCannonDescAsset**                           CannonDesc;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
struct ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
