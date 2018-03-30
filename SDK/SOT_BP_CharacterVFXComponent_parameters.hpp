#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService
struct UBP_CharacterVFXComponent_C_GetWindService_Params
{
	class UObject*                                     WindInterface;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_CanProcessWind
struct UBP_CharacterVFXComponent_C_WindVFX_CanProcessWind_Params
{
	bool                                               CanProcess;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
struct UBP_CharacterVFXComponent_C_WindVFX_DebugTick_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
struct UBP_CharacterVFXComponent_C_WindVFX_Destroy_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
struct UBP_CharacterVFXComponent_C_WindVFX_Create_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Update
struct UBP_CharacterVFXComponent_C_WindVFX_Update_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
struct UBP_CharacterVFXComponent_C_WindVFX_Deactivate_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Activate
struct UBP_CharacterVFXComponent_C_WindVFX_Activate_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
struct UBP_CharacterVFXComponent_C_Play_View_Under_Water_FX_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Event;                                                    // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
struct UBP_CharacterVFXComponent_C_Play_Falling_Splash_Params
{
	float                                              FallingSpeed;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
struct UBP_CharacterVFXComponent_C_Play_Foot_Splash_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
struct UBP_CharacterVFXComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveTick
struct UBP_CharacterVFXComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
struct UBP_CharacterVFXComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
struct UBP_CharacterVFXComponent_C_PlayerViewUnderWaterEvent_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Event;                                                    // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
struct UBP_CharacterVFXComponent_C_FallingIntoWaterEvent_Params
{
	struct FAthena_FFallingIntoWaterEvent              Event;                                                    // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
struct UBP_CharacterVFXComponent_C_WaterStateChanged_Params
{
	struct FEventPlayerViewUnderWaterStateChanged      Under_water_state_changed;                                // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
struct UBP_CharacterVFXComponent_C_On_Foot_Enter_Water_Params
{
	struct FEventCharacterFootEnterWater               Enter_Water;                                              // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.DeadEvent
struct UBP_CharacterVFXComponent_C_DeadEvent_Params
{
	struct FEventCharacterDead                         EventDead;                                                // (CPF_Parm) 0000
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
struct UBP_CharacterVFXComponent_C_ExecuteUbergraph_BP_CharacterVFXComponent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
