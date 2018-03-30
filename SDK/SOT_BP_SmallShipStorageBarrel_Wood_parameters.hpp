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

// Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
struct ABP_SmallShipStorageBarrel_Wood_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor**                                     InInteractor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     DesiredTooltipWorldPosition;                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

// Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.UserConstructionScript
struct ABP_SmallShipStorageBarrel_Wood_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
