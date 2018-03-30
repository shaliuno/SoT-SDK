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

// Function BP_Innkeeper.BP_Innkeeper_C.GetClosestInteractionPoint
struct ABP_Innkeeper_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_Innkeeper.BP_Innkeeper_C.UserConstructionScript
struct ABP_Innkeeper_C_UserConstructionScript_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveBeginPlay
struct ABP_Innkeeper_C_ReceiveBeginPlay_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveEndPlay
struct ABP_Innkeeper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Innkeeper.BP_Innkeeper_C.ExecuteUbergraph_BP_Innkeeper
struct ABP_Innkeeper_C_ExecuteUbergraph_BP_Innkeeper_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
