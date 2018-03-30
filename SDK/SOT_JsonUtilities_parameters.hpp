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

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
struct UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params
{
	struct FGenericStruct                              Struct;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	struct FString                                     OutJsonString;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
struct UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params
{
	struct FString                                     InJsonString;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FGenericStruct                              Struct;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0014
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
