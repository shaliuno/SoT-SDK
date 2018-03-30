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

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetDockableInfo
struct ABP_CustomisableLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Construct Ladder
struct ABP_CustomisableLadder_C_Construct_Ladder_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Total Height Before Cap
struct ABP_CustomisableLadder_C_Get_Total_Height_Before_Cap_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Steps
struct ABP_CustomisableLadder_C_Get_Steps_Params
{
	int                                                Num_Steps;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetBottomLadderRungTransform
struct ABP_CustomisableLadder_C_GetBottomLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetTopLadderRungTransform
struct ABP_CustomisableLadder_C_GetTopLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get World Loc at Height Along Z
struct ABP_CustomisableLadder_C_Get_World_Loc_at_Height_Along_Z_Params
{
	float                                              Relative_Z;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.SetupSpline
struct ABP_CustomisableLadder_C_SetupSpline_Params
{
	class USplineComponent*                            Spline_Component;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FVector>                             Positions;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.UserConstructionScript
struct ABP_CustomisableLadder_C_UserConstructionScript_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ReceiveBeginPlay
struct ABP_CustomisableLadder_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ExecuteUbergraph_BP_CustomisableLadder
struct ABP_CustomisableLadder_C_ExecuteUbergraph_BP_CustomisableLadder_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
