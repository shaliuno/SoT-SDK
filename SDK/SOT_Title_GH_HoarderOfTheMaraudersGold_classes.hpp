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

// BlueprintGeneratedClass Title_GH_HoarderOfTheMaraudersGold.Title_GH_HoarderOfTheMaraudersGold_C
// 0x0000 (0x00C0 - 0x00C0)
class UTitle_GH_HoarderOfTheMaraudersGold_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Title_GH_HoarderOfTheMaraudersGold.Title_GH_HoarderOfTheMaraudersGold_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
