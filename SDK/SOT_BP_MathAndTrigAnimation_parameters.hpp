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

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
struct UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params
{
	class AAthenaCharacter*                            Athena_Character;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
struct UBP_MathAndTrigAnimation_C_DecrementFloat_Params
{
	float                                              Float;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              DecrementValue;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
struct UBP_MathAndTrigAnimation_C_Increment_Float_Params
{
	float                                              Float;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Incement_Value;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
struct UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params
{
	struct FTransform                                  RelativeTransform;                                        // (CPF_Parm, CPF_IsPlainOldData) 0000
	struct FTransform                                  BaseTransform;                                            // (CPF_Parm, CPF_IsPlainOldData) 0030
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FTransform                                  CombinedTransform;                                        // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0070
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
struct UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params
{
	struct FTransform                                  RelativeObjectsWorldTransform;                            // (CPF_Parm, CPF_IsPlainOldData) 0000
	struct FTransform                                  BaseObjectsWorldTransform;                                // (CPF_Parm, CPF_IsPlainOldData) 0030
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0060
	struct FTransform                                  RealtiveOffsetTransform;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData) 0070
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
