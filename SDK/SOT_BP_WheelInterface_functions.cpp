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

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                WheelRotation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WheelAnimationTime             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EWheel>            EWheel                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WheelRate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_WheelInterface_C::Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State"));}

	UBP_WheelInterface_C_Receive_Animation_State_Params params;
	params.WheelRotation = WheelRotation;
	params.WheelAnimationTime = WheelAnimationTime;
	params.EWheel = EWheel;
	params.Direction = Direction;
	params.WheelRate = WheelRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
