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

// BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C
// 0x0000 (0x0FE0 - 0x0FE0)
class ABP_OnlineAthenaPlayerController_C : public AOnlineAthenaPlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
