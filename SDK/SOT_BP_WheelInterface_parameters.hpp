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

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
struct UBP_WheelInterface_C_Receive_Animation_State_Params
{
	struct FRotator                                    WheelRotation;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              WheelAnimationTime;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	TEnumAsByte<EWheel>                                EWheel;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              WheelRate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
