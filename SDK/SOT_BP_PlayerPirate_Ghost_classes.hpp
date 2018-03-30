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

// BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C
// 0x0044 (0x1134 - 0x10F0)
class ABP_PlayerPirate_Ghost_C : public AAthenaGhostPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBP_GhostCharacterAudioComponent_C*          BP_GhostCharacterAudioComponent;                          // 0x10F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1100(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                          // 0x1108(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBodyLightControllerComponent*               BodyLightController;                                      // 0x1110(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1118(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAmbientLightSourceComponent*                BodyLight;                                                // 0x1120(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1128(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Default_Ghost_Parameter;                                  // 0x1130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C")); }
		return ptr;
	}


	void GetAllMaterialParents(class UMaterialInstance* MaterialInstance, TArray<class UMaterialInstance*>* Parents);
	void CheckBaseMaterial(class UMaterialInstance* MaterialInstance, class UMaterial* MaterialToCheck, bool* Result);
	void Set_Up_Ghost_Materials(class USkeletalMeshComponent* Input_Mesh, float Ghost_Fade_Parameter, bool EnableDither);
	struct FVector GetMouthPosition();
	void UserConstructionScript();
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void ReceiveBeginPlay();
	void OnMeshSet();
	void ExecuteUbergraph_BP_PlayerPirate_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
