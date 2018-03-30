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

// BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_CharacterInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_CharacterInterface.BP_CharacterInterface_C")); }
		return ptr;
	}


	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanRotationSpeed(float RotationSpeed);
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
