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

// BlueprintGeneratedClass BP_AudioIslandStaticMeshAssociator.BP_AudioIslandStaticMeshAssociator_C
// 0x0008 (0x0470 - 0x0468)
class ABP_AudioIslandStaticMeshAssociator_C : public AAudioIslandStaticMeshAssociatorBase
{
public:
	class UStaticMeshAudioEmittersComponent*           StaticMeshAudioEmitters;                                  // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_AudioIslandStaticMeshAssociator.BP_AudioIslandStaticMeshAssociator_C")); }
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
