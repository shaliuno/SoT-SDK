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

// BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C
// 0x0028 (0x0490 - 0x0468)
class ABP_DistantLightProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPointLightProxy>                    LightList;                                                // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C")); }
		return ptr;
	}


	void FindExistingLight(const struct FString& Name, bool* Result, int* Index);
	void Create_Lights();
	void UserConstructionScript();
	void Add_Light(const struct FVector& Location, float Size, class UMaterialInterface* Material, const struct FString& Name);
	void ExecuteUbergraph_BP_DistantLightProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
