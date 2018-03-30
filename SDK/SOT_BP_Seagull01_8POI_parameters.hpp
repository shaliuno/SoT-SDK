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

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade
struct ABP_Seagull01_8POI_C_seagull_Fade_Params
{
	class UMaterialInstance*                           Seagull_Material;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UMaterialInstance*                           Seagull_MT_LOD;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript
struct ABP_Seagull01_8POI_C_UserConstructionScript_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay
struct ABP_Seagull01_8POI_C_ReceiveBeginPlay_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn
struct ABP_Seagull01_8POI_C_FadeIn_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut
struct ABP_Seagull01_8POI_C_FadeOut_Params
{
};

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI
struct ABP_Seagull01_8POI_C_ExecuteUbergraph_BP_Seagull01_8POI_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
