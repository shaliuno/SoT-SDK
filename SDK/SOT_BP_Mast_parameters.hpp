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

// Function BP_Mast.BP_Mast_C.Customise Static Mesh
struct ABP_Mast_C_Customise_Static_Mesh_Params
{
	class UStaticMesh*                                 New_Static_Mesh;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UStaticMeshComponent*                        Static_Mesh_Component;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_Mast.BP_Mast_C.Trim Array Func
struct ABP_Mast_C_Trim_Array_Func_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	int                                                Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
struct ABP_Mast_C_Initialise_Sail_Parameters_Params
{
};

// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
struct ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.Cull Excess Components
struct ABP_Mast_C_Cull_Excess_Components_Params
{
	TArray<class UActorComponent*>                     TargetArray;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function BP_Mast.BP_Mast_C.Initialise Sails
struct ABP_Mast_C_Initialise_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.UserConstructionScript
struct ABP_Mast_C_UserConstructionScript_Params
{
};

// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
struct ABP_Mast_C_OnMastDescLoaded_Params
{
	class UMastDescAsset**                             MastDesc;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
struct ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
