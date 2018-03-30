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

// Function Interface_Garden.Interface_Garden_C.Set Garden Parameters
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Int                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Instances_Created              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInterface_Garden_C::Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function Interface_Garden.Interface_Garden_C.Set Garden Parameters"));}

	UInterface_Garden_C_Set_Garden_Parameters_Params params;
	params.Radius = Radius;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instances_Created != nullptr)
		*Instances_Created = params.Instances_Created;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
