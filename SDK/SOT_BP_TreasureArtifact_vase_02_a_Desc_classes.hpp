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

// BlueprintGeneratedClass BP_TreasureArtifact_vase_02_a_Desc.BP_TreasureArtifact_vase_02_a_Desc_C
// 0x0000 (0x0100 - 0x0100)
class UBP_TreasureArtifact_vase_02_a_Desc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_vase_02_a_Desc.BP_TreasureArtifact_vase_02_a_Desc_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
