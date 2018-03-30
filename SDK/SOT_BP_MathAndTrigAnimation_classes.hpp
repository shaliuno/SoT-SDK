#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MathAndTrigAnimation_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C")); }
		return ptr;
	}


	void DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext);
	void DecrementFloat(float DecrementValue, class UObject* __WorldContext, float* Float);
	void Increment_Float(float Incement_Value, class UObject* __WorldContext, float* Float);
	void Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform);
	void Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
