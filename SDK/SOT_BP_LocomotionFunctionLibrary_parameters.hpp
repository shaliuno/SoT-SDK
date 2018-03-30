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

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
struct UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              Min;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Max;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Hit_Min;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               Hit_Max;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0019
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
struct UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params
{
	struct FVector                                     Animation_Hand_IK_Location;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FVector                                     LowerRopeLocation;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FVector                                     UpperRopeLocation;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FVector                                     Location_On_Rope;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params
{
	TArray<class UBlendSpace*>                         TargetArrayBlendspace;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<class UBlendSpace*>                         LoadedArrayDataBlendspace;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UBlendSpace*                                 FallbackBlendspace;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params
{
	TArray<class UBlendSpace1D*>                       TargetArray_1D;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<class UBlendSpace1D*>                       LoadedArrayData_1D;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UBlendSpace1D*                               FallbackBlendspace1D;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params
{
	TArray<class UAnimSequence*>                       TargetArray;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<class UAnimSequence*>                       LoadedArrayData;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	class UAnimSequence*                               FallbackAnimation;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
struct UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<EIKLimbName>                           Limb_ID;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0009
	TEnumAsByte<ELimbIKSpace>                          Coordinate_Space;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000A
	float                                              Translation_Strength;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              Rotation_Strength;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FTransform                                  Transform;                                                // (CPF_Parm, CPF_IsPlainOldData) 0020
	float                                              BlendIn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0050
	float                                              BlendOut;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0054
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0058
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
struct UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                Decrement;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
struct UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params
{
	int                                                integer;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	int                                                Increment;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
struct UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params
{
	bool                                               TurnLeft;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CurrentControllerYaw;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              PreviousControllerYaw;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
struct UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params
{
	bool                                               InZone;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Min;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Max;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
struct UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params
{
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	bool                                               InZone;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
struct UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Min;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Max;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params
{
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params
{
	bool                                               TurningLeft;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CurrentTurnAngle;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0004
	float                                              Reset_Angle;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Previous_Controller_Yaw;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	float                                              Current_Controller_Yaw;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Animation_Time;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
struct UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params
{
	class ACharacter*                                  PlayerCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              MovementSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              FrameDelta;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	float                                              JumpImpactTimerMax;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0010
	TEnumAsByte<EJumping>                              JumpingState;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0014
	float                                              PreImpactTime;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0018
	float                                              JumpImpactTimer;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 001C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
struct UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params
{
	float                                              BlendCounter;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	bool                                               IKON;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Translation_Strength;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	float                                              Rotation_Strength;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 000C
	TEnumAsByte<EEasingFunc>                           EaseingType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              BlendMax;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              FrameDeltaTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
struct UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params
{
	float                                              Counter;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CounterMax;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Hit_Max_Count;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              IncrementedCounter;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
struct UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params
{
	float                                              Counter;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CounterMin;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               Hit_Min_Count;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	float                                              DecrementedCounter;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
struct UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params
{
	float                                              CurrentTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              MaxTime;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	TEnumAsByte<EEasingFunc>                           EasingType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Return_Val___0_1;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params
{
	bool                                               TurningLeft;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Current_Controller_Yaw;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              Previous_Controller_Yaw;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0008
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 000C
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
struct UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params
{
	bool                                               TurningLeft;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	float                                              PreviousYaw;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              FrameDeltaTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	struct FBP_Turning                                 Turning;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0010
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
struct UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params
{
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              PreviousYaw;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              NewPreviousYaw;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
struct UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params
{
	float                                              Direction_A;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Direction_B;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReflexAngle;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
struct UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	float                                              Pitch;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Yaw;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
struct UBP_LocomotionFunctionLibrary_C_Character_Speed_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              Speed;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
