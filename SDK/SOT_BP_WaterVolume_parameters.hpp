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

// Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators
struct ABP_WaterVolume_C_CollectRippleGenerators_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript
struct ABP_WaterVolume_C_UserConstructionScript_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay
struct ABP_WaterVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap
struct ABP_WaterVolume_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap
struct ABP_WaterVolume_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume
struct ABP_WaterVolume_C_ExecuteUbergraph_BP_WaterVolume_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
