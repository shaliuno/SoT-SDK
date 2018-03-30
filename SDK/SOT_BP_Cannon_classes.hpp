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

// BlueprintGeneratedClass BP_Cannon.BP_Cannon_C
// 0x0170 (0x0AE8 - 0x0978)
class ABP_Cannon_C : public ACannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGroupedInteractableAreaComponent*           GroupedInteractableArea;                                  // 0x0980(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0988(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Collision;                                                // 0x0990(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FObjectMessagingHandle                      CannonAimingCenteredPitchEvent;                           // 0x0998(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStartedPitchEvent;                            // 0x09D0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStoppedPitchEvent;                            // 0x0A08(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingCenteredYawEvent;                             // 0x0A40(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStartedYawEvent;                              // 0x0A78(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStoppedYawEvent;                              // 0x0AB0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Cannon.BP_Cannon_C")); }
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void CannonAimingCenteredPitch(const struct FEventCannonAimingCenteredPitch& Event);
	void CannonAimingStartedPitch(const struct FEventCannonAimingStartedPitch& Event);
	void CannonAimingStoppedPitch(const struct FEventCannonAimingStoppedPitch& Event);
	void CannonAimingCenteredYaw(const struct FEventCannonAimingCenteredYaw& Event);
	void CannonAimingStartedYaw(const struct FEventCannonAimingStartedYaw& Event);
	void CannonAimingStoppedYaw(const struct FEventCannonAimingStoppedYaw& Event);
	void OnCannonDescLoaded(class UCannonDescAsset** CannonDesc);
	void ExecuteUbergraph_BP_Cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
