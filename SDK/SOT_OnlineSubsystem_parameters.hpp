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

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct UTurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
	struct FString                                     Match;                                                    // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               bDidBecomeActive;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct UTurnBasedMatchInterface_OnMatchEnded_Params
{
	struct FString                                     Match;                                                    // (CPF_Parm, CPF_ZeroConstructor) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
