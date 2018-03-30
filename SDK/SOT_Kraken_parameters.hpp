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

// Function Kraken.KrakenTentacle.OnDamageToTentacle
struct AKrakenTentacle_OnDamageToTentacle_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
};

// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
struct AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params
{
};

// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
struct AKraken_Multicast_OnTentacleTakenDamage_Params
{
};

// Function Kraken.Kraken.AddActorToKnownTargets
struct AKraken_AddActorToKnownTargets_Params
{
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function Kraken.KrakenService.RequestKrakenWithLocation
struct AKrakenService_RequestKrakenWithLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	class AActor*                                      SpawnedForActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function Kraken.KrakenService.IsKrakenActive
struct AKrakenService_IsKrakenActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function Kraken.KrakenService.DismissKraken
struct AKrakenService_DismissKraken_Params
{
};

// Function Kraken.KrakenService.CanSpawnKraken
struct AKrakenService_CanSpawnKraken_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
