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

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 HitPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HitStrength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Has_Decal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDecalComponent*         Decal                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_HullInterface_C::Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullInterface.BP_HullInterface_C.Apply Hit"));}

	UBP_HullInterface_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
