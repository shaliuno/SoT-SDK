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

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.GetDockableInfo
struct ABP_LargeShipLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.Setup Spline
struct ABP_LargeShipLadder_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FVector>                             Positions;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.CanInteract
struct ABP_LargeShipLadder_C_CanInteract_Params
{
	class AActor**                                     InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function BP_LargeShipLadder.BP_LargeShipLadder_C.UserConstructionScript
struct ABP_LargeShipLadder_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
