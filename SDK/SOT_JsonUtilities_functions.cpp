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

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FGenericStruct          Struct                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 OutJsonString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString"));}

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;

	return params.ReturnValue;
}


// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Private, FUNC_Delegate)
// Parameters:
// struct FString                 InJsonString                   (CPF_Parm, CPF_ZeroConstructor)
// struct FGenericStruct          Struct                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct"));}

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
