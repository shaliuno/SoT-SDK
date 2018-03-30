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

// BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Rare.BP_BountyRewardSkull_Proxy_Rare_C
// 0x0008 (0x0870 - 0x0868)
class ABP_BountyRewardSkull_Proxy_Rare_C : public ABP_BountyRewardSkull_Proxy_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0868(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Rare.BP_BountyRewardSkull_Proxy_Rare_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
