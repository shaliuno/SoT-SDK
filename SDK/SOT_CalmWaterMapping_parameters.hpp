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

// Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor
struct UCalmWaterMappingInterface_GetDampeningFactor_Params
{
	struct FVector2D                                   InPosition;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
struct UCalmWaterMappingInterface_GetChoppinessFactor_Params
{
	struct FVector2D                                   InPosition;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed
struct UCalmWaterMappingService_GetMaxWindSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
