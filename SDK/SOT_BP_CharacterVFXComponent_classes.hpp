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

// BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C
// 0x0228 (0x02F8 - 0x00D0)
class UBP_CharacterVFXComponent_C : public UCharacterVfxComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FObjectMessagingHandle                      EnterWaterEvent;                                          // 0x00D8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      UnderwaterStateChanged;                                   // 0x0110(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystemComponent*                    Splash_Emitter;                                           // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Large_Foot_Splash;                                        // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Small_Foot_Splash;                                        // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Threshold_for_run;                                        // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Threshold_for_large_foot_impact;                          // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FObjectMessagingHandle                      FallingIntoWaterHandle;                                   // 0x0168(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystem*                             Large_Falling_Splash;                                     // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FObjectMessagingHandle                      PlayerViewUnderWaterHandle;                               // 0x01A8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      EnterShipEventHandle;                                     // 0x01E0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      ExitShipEventHandle;                                      // 0x0218(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystemComponent*                    WindVFX;                                                  // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WindOffsetFromShip;                                       // 0x0258(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DEBUG_WindActive;                                         // 0x0264(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DEBUG_WindToggleTimer;                                    // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      WindDirectionChangedHandle;                               // 0x0270(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FObjectMessagingHandle                      PlayerDeadHandle;                                         // 0x02A8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UObject*                                     NewVar_1;                                                 // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_particle_underwater_ambient;                          // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    vfx_player_underwater_ambient;                            // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C")); }
		return ptr;
	}


	void GetWindService(class UObject** WindInterface);
	void WindVFX_CanProcessWind(bool* CanProcess);
	void WindVFX_DebugTick();
	void WindVFX_Destroy();
	void WindVFX_Create();
	void WindVFX_Update();
	void WindVFX_Deactivate();
	void WindVFX_Activate();
	void Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void Play_Falling_Splash(float FallingSpeed);
	void Play_Foot_Splash(const struct FVector& Location);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event);
	void WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed);
	void On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water);
	void DeadEvent(const struct FEventCharacterDead& EventDead);
	void ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
