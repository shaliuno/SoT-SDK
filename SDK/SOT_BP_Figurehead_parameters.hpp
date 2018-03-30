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

// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
struct ABP_Figurehead_C_UserConstructionScript_Params
{
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartMeshLoaded
struct ABP_Figurehead_C_OnPartMeshLoaded_Params
{
	class UStaticMesh**                                Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartDescLoaded
struct ABP_Figurehead_C_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset**                      Desc;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Figurehead.BP_Figurehead_C.ExecuteUbergraph_BP_Figurehead
struct ABP_Figurehead_C_ExecuteUbergraph_BP_Figurehead_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
