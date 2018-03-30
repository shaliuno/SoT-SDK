#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x004C(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0058(0x000C) (CPF_Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Multiplier;                                               // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRange;                                                // 0x0074(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeMin;                                                 // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeMax;                                                 // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMin;                                              // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x0088(0x000C) (CPF_Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x0098(0x0001) (CPF_Edit BITFIELD: 0101)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x0098(0x0001) (CPF_Edit BITFIELD: 0202)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x0098(0x0001) (CPF_Edit BITFIELD: 0404)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x0098(0x0001) (CPF_Edit BITFIELD: 0808)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x0098(0x0001) (CPF_Edit BITFIELD: 1010)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x0098(0x0001) (CPF_Edit BITFIELD: 2020)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x0098(0x0001) (CPF_Edit BITFIELD: 4040)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0098(0x0001) (CPF_Edit BITFIELD: 8080)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0099(0x0001) (CPF_Edit BITFIELD: 0101)
	TEnumAsByte<EDrivenBoneModificationMode>           ModificationMode;                                         // 0x009C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCopyTranslation;                                         // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyRotation;                                            // 0x0071(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCopyScale;                                               // 0x0072(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0078 (0x00D0 - 0x0058)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              EffectorTransformBone;                                    // 0x0094(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              TipBone;                                                  // 0x00A4(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x00B0(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Precision;                                                // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableDebugDraw;                                         // 0x00C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x007C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0068 (0x00C0 - 0x0058)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     LookAtLocation;                                           // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x007C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseLookUpAxis;                                           // 0x007D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x007E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LookAtClamp;                                              // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x0084(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableDebug;                                             // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0091(0x002F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     Translation;                                              // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x007C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0089(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x008A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x008B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x008D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x0058(0x000C) (CPF_Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelativeToRefPose;                                       // 0x0065(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0068(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0074(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0020 (0x0078 - 0x0058)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Multiplier;                                               // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAdditive;                                              // 0x0075(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0050 (0x00A8 - 0x0058)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bLimitDisplacement;                                       // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNoZSpring;                                               // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bTranslateX;                                              // 0x0079(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTranslateY;                                              // 0x007A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTranslateZ;                                              // 0x007B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateX;                                                 // 0x007C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateY;                                                 // 0x007D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRotateZ;                                                 // 0x007E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x29];                                      // 0x007F(0x0029) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0088 (0x00E0 - 0x0058)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ChainLength;                                              // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis;                                     // 0x0069(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLimitStretch;                                            // 0x006A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrailRelaxation;                                          // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x0074(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bActorSpaceFakeVel;                                       // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0081(0x005F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     EffectorLocation;                                         // 0x0064(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   StretchLimits;                                            // 0x007C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x0084(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible BITFIELD: 0202)
	unsigned char                                      bAllowStretching : 1;                                     // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible BITFIELD: 0404)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x0094(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_WheelHandler
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	class UWheeledVehicleMovementComponent*            VehicleSimComponent;                                      // 0x0058(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
