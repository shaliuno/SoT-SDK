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

// BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_NPC_AnimatedItemInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C")); }
		return ptr;
	}


	void PlayItemAnimation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
