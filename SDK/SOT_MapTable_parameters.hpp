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

// Function MapTable.MapTable_C.UpdateBlurEffect
struct AMapTable_C_UpdateBlurEffect_Params
{
};

// Function MapTable.MapTable_C.GetClosestInteractionPoint
struct AMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              OutInteractionPointRadius;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function MapTable.MapTable_C.UserConstructionScript
struct AMapTable_C_UserConstructionScript_Params
{
};

// Function MapTable.MapTable_C.ReceiveBeginPlay
struct AMapTable_C_ReceiveBeginPlay_Params
{
};

// Function MapTable.MapTable_C.SetEffectActiveWhenClose
struct AMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function MapTable.MapTable_C.OnMapActivate
struct AMapTable_C_OnMapActivate_Params
{
	bool*                                              IsMapActive;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UTextureRenderTarget2D**                     Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function MapTable.MapTable_C.OnMapMove
struct AMapTable_C_OnMapMove_Params
{
	struct FVector2D*                                  CentreLocation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float*                                             ZoomLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
struct AMapTable_C_ExecuteUbergraph_MapTable_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
