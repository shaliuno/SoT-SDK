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

// BlueprintGeneratedClass BP_BountyRewardSkull_Rare.BP_BountyRewardSkull_Rare_C
// 0x0010 (0x0778 - 0x0768)
class ABP_BountyRewardSkull_Rare_C : public ABP_BountyRewardSkull_C
{
public:
	class UParticleSystemComponent*                    VFX_Skull_Glow_1st;                                       // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Skull_Glow_3rd;                                       // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BountyRewardSkull_Rare.BP_BountyRewardSkull_Rare_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
