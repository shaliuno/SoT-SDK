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

// Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
struct ABP_AmmoChest_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
struct ABP_AmmoChest_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
struct ABP_AmmoChest_C_UserConstructionScript_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
struct ABP_AmmoChest_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
struct ABP_AmmoChest_C_Blueprint_OnInteract_Client_Params
{
	class AActor**                                     InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
struct ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params
{
	class AActor**                                     InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
struct ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
