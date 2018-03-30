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

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
struct ABP_DistantLightProxy_C_FindExistingLight_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	int                                                Index;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
struct ABP_DistantLightProxy_C_Create_Lights_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
struct ABP_DistantLightProxy_C_UserConstructionScript_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
struct ABP_DistantLightProxy_C_Add_Light_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0018
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
struct ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
