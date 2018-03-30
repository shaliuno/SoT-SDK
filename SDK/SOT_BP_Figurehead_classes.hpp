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

// BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C
// 0x0010 (0x0480 - 0x0470)
class ABP_Figurehead_C : public AGenericPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Figurehead;                                               // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C")); }
		return ptr;
	}


	void UserConstructionScript();
	void OnPartMeshLoaded(class UStaticMesh** Mesh);
	void OnPartDescLoaded(class UGenericPartDescAsset** Desc);
	void ExecuteUbergraph_BP_Figurehead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
