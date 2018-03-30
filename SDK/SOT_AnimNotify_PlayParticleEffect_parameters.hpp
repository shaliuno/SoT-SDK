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

// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName
struct UAnimNotify_PlayParticleEffect_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify
struct UAnimNotify_PlayParticleEffect_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
