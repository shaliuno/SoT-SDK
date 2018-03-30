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

// BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C
// 0x0000 (0x05E8 - 0x05E8)
class ABP_Cannon_PlayerLoadingInteractionPoint_C : public APlayerLoadingInteractionPoint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
