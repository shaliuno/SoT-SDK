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

// BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_Proxy.BP_cmn_cannon_ball_01_a_Proxy_C
// 0x0000 (0x0698 - 0x0698)
class ABP_cmn_cannon_ball_01_a_Proxy_C : public ABP_CannonBallProxy_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_Proxy.BP_cmn_cannon_ball_01_a_Proxy_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
