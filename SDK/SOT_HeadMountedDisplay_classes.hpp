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

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0020 (0x0670 - 0x0650)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x0650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EControllerHand>                       Hand;                                                     // 0x0654(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x0658(0x0001) (CPF_Edit, CPF_BlueprintVisible BITFIELD: 0101)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0659(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class HeadMountedDisplay.MotionControllerComponent")); }
		return ptr;
	}


	bool IsTracked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
