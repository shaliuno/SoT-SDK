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

// BlueprintGeneratedClass wsp_sea_rock_cluster_d.wsp_sea_rock_cluster_d_C
// 0x0018 (0x0480 - 0x0468)
class Awsp_sea_rock_cluster_d_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent01;                                    // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass wsp_sea_rock_cluster_d.wsp_sea_rock_cluster_d_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
