// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAnimNotify_PlayParticleEffect_C::GetNotifyName()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName"));}

	UAnimNotify_PlayParticleEffect_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimNotify_PlayParticleEffect_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify"));}

	UAnimNotify_PlayParticleEffect_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
