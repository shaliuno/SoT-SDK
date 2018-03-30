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

// Function BP_Sail.BP_Sail_C.Debug
struct ABP_Sail_C_Debug_Params
{
};

// Function BP_Sail.BP_Sail_C.Initialise
struct ABP_Sail_C_Initialise_Params
{
	bool                                               IsMainSail;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              SailForceScalar;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function BP_Sail.BP_Sail_C.UserConstructionScript
struct ABP_Sail_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
