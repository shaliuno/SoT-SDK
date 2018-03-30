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

// Function BP_SailAngle.BP_SailAngle_C.GetDockableInfo
struct ABP_SailAngle_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_SailAngle.BP_SailAngle_C.UserConstructionScript
struct ABP_SailAngle_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
