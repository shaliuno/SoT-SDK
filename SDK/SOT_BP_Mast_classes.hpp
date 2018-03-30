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

// BlueprintGeneratedClass BP_Mast.BP_Mast_C
// 0x00B8 (0x0770 - 0x06B8)
class ABP_Mast_C : public AMast
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UChildActorComponent*                        TopgallantActor;                                          // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        TopsailActor;                                             // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mast_Top_StaticMesh;                                      // 0x06D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mast_Bottom_StaticMesh;                                   // 0x06D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Topgallant_Yard;                                          // 0x06E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Top_Yard;                                                 // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Main_Yard;                                                // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChildActorComponent*                        MainsailActor;                                            // 0x06F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mast_Mesh;                                                // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Mast_Scale;                                               // 0x0708(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	TArray<struct FBP_SailStructure>                   Sail_Parameters;                                          // 0x0718(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UStaticMeshComponent*>                Yards;                                                    // 0x0728(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UChildActorComponent*>                Sails;                                                    // 0x0738(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UStaticMesh*                                 Mast_Base_Mesh;                                           // 0x0748(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mast_Falling_Limit;                                       // 0x0750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	class UMaterialInstance*                           Sail_Material;                                            // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABP_Sail_C*>                          SailActors;                                               // 0x0760(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Mast.BP_Mast_C")); }
		return ptr;
	}


	void Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component);
	void Trim_Array_Func(int Size, TArray<class UObject*>* TargetArray);
	void Initialise_Sail_Parameters();
	void Populate_Lists_of_Yards_and_Sails();
	void Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray);
	void Initialise_Sails();
	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
