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

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder
struct ABP_CustomisableLadder_PointToPoint_C_Orientate_Ladder_Params
{
	struct FVector                                     Point_A;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Point_B;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript
struct ABP_CustomisableLadder_PointToPoint_C_UserConstructionScript_Params
{
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay
struct ABP_CustomisableLadder_PointToPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint
struct ABP_CustomisableLadder_PointToPoint_C_ExecuteUbergraph_BP_CustomisableLadder_PointToPoint_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
