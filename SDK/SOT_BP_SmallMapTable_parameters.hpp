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

// Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect
struct ABP_SmallMapTable_C_UpdateBlurEffect_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint
struct ABP_SmallMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript
struct ABP_SmallMapTable_C_UserConstructionScript_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay
struct ABP_SmallMapTable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose
struct ABP_SmallMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate
struct ABP_SmallMapTable_C_OnMapActivate_Params
{
	bool*                                              IsMapActive;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTextureRenderTarget2D**                     Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove
struct ABP_SmallMapTable_C_OnMapMove_Params
{
	struct FVector2D*                                  CentreLocation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float*                                             ZoomLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable
struct ABP_SmallMapTable_C_ExecuteUbergraph_BP_SmallMapTable_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
