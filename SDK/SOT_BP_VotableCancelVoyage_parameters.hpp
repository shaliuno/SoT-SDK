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

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation
struct ABP_VotableCancelVoyage_C_PlayShowTokenAnimation_Params
{
	class UPrimitiveComponent*                         Token;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked
struct ABP_VotableCancelVoyage_C_Is_Session_Locked_Params
{
	bool                                               IsLocked;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName
struct ABP_VotableCancelVoyage_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0000
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript
struct ABP_VotableCancelVoyage_C_UserConstructionScript_Params
{
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay
struct ABP_VotableCancelVoyage_C_ReceiveBeginPlay_Params
{
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded
struct ABP_VotableCancelVoyage_C_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>*           Voter;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved
struct ABP_VotableCancelVoyage_C_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>*           Voter;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
};

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage
struct ABP_VotableCancelVoyage_C_ExecuteUbergraph_BP_VotableCancelVoyage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
