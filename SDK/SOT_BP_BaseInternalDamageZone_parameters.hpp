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

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted
struct ABP_BaseInternalDamageZone_C_OnRepairMounted_Params
{
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation
struct ABP_BaseInternalDamageZone_C_GetRepairMountLocation_Params
{
	class USceneComponent*                             MountLocation;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FName                                       MountSocket;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace
struct ABP_BaseInternalDamageZone_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor**                                     InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     DesiredTooltipWorldPosition;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript
struct ABP_BaseInternalDamageZone_C_UserConstructionScript_Params
{
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay
struct ABP_BaseInternalDamageZone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone
struct ABP_BaseInternalDamageZone_C_ExecuteUbergraph_BP_BaseInternalDamageZone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
