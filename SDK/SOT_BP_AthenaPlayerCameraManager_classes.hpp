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

// BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C
// 0x0000 (0x1C80 - 0x1C80)
class ABP_AthenaPlayerCameraManager_C : public AAthenaPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
