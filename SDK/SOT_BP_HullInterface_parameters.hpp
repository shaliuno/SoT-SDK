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

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
struct UBP_HullInterface_C_Apply_Hit_Params
{
	struct FVector                                     HitPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              HitStrength;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Has_Decal;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
	class UDecalComponent*                             Decal;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
