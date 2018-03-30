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

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
struct UInstancedRopeComponent_SetUnderwater_Params
{
	bool                                               Underwater;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaRigging.InstancedRopeComponent.SetRopes
struct UInstancedRopeComponent_SetRopes_Params
{
	TArray<struct FInstancedRopeParams>                InRopes;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
struct URiggingSystemComponent_SetSocketLookupSource_Params
{
	class AActor*                                      InSocketSource;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaRigging.RopeInterface.SetRopeUVOffset
struct URopeInterface_SetRopeUVOffset_Params
{
	float                                              InUVOffset;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function AthenaRigging.RopeInterface.SetRopeEndpoints
struct URopeInterface_SetRopeEndpoints_Params
{
	struct FVector                                     InWorldSpaceStart;                                        // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     InWorldSpaceEnd;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
