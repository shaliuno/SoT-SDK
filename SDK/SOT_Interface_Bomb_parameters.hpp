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

// Function Interface_Bomb.Interface_Bomb_C.Interface Trigger
struct UInterface_Bomb_C_Interface_Trigger_Params
{
};

// Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters
struct UInterface_Bomb_C_Set_Bomb_Parameters_Params
{
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
