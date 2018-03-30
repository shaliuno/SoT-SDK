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

// BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_goblet_01_a.BP_Treasure_Artifact_Proxy_goblet_01_a_C
// 0x0000 (0x0838 - 0x0838)
class ABP_Treasure_Artifact_Proxy_goblet_01_a_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_goblet_01_a.BP_Treasure_Artifact_Proxy_goblet_01_a_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
