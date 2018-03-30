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

// ScriptStruct AthenaRigging.RopeCatenaryLengthParams
// 0x0010
struct FRopeCatenaryLengthParams
{
	float                                              MinTautLength;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTautLength;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CatenaryScaleAtMinLength;                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CatenaryScaleAtMaxLength;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenarySlopeBlendParams
// 0x0008
struct FRopeCatenarySlopeBlendParams
{
	float                                              MinSlopeForTautBlend;                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSlopeForTautBlend;                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryShapeParams
// 0x0018
struct FRopeCatenaryShapeParams
{
	struct FRopeCatenaryLengthParams                   Length;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FRopeCatenarySlopeBlendParams               Slope;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AthenaRigging.RopeCatenarySwingParams
// 0x0008
struct FRopeCatenarySwingParams
{
	float                                              LengthForNeutralSwing;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LengthBias;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryDynamicsParams
// 0x0008
struct FRopeCatenaryDynamicsParams
{
	float                                              CatenaryToTautLengthRatioToConsiderCatenary;              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ReactsToWind;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.InstancedRopeParams
// 0x0050
struct FInstancedRopeParams
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Thickness;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UVScale;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UVOffset;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roughness;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FRopeCatenarySwingParams                    Swing;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FRopeCatenaryDynamicsParams                 Dynamics;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AthenaRigging.RiggingSystemLine
// 0x0010
struct FRiggingSystemLine
{
	uint32_t                                           RopeStart;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SocketStart;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           PulleyStart;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           NumRopes;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyData
// 0x0060
struct FRiggingSystemPulleyData
{
	TArray<class UStaticMeshComponent*>                Meshes;                                                   // 0x0000(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<float>                                      AttachmentSag;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      AttachmentLength;                                         // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Scale;                                                    // 0x0030(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      ScaledOffset;                                             // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      ScaledRadius;                                             // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeStyleParams
// 0x0020
struct FRopeStyleParams
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  DiffuseTexture;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  NormalTexture;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShadowLOD;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.PulleyVisualParams
// 0x0010
struct FPulleyVisualParams
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeVisualParams
// 0x000C
struct FRopeVisualParams
{
	float                                              Thickness;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UVScale;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roughness;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyAttachmentParams
// 0x0014
struct FRiggingSystemPulleyAttachmentParams
{
	struct FRopeVisualParams                           Visuals;                                                  // 0x0000(0x000C) (CPF_Edit)
	float                                              Length;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sag;                                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyParams
// 0x0050
struct FRiggingSystemPulleyParams
{
	struct FSocketId                                   Anchor;                                                   // 0x0000(0x0020) (CPF_Edit)
	float                                              OffsetFromAnchor;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FPulleyVisualParams                         Visuals;                                                  // 0x0028(0x0010) (CPF_Edit)
	struct FRiggingSystemPulleyAttachmentParams        AttachmentRope;                                           // 0x0038(0x0014) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RiggingSystemLineParams
// 0x0078
struct FRiggingSystemLineParams
{
	struct FSocketId                                   Start;                                                    // 0x0000(0x0020) (CPF_Edit)
	TArray<struct FRiggingSystemPulleyParams>          Pulleys;                                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FSocketId                                   End;                                                      // 0x0030(0x0020) (CPF_Edit)
	struct FRopeVisualParams                           Visuals;                                                  // 0x0050(0x000C) (CPF_Edit)
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x005C(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RopeAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FRopeAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RiggingSystemAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FRiggingSystemAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	TArray<class ARiggingSystem*>                      RiggingSystems;                                           // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeCatenaryLengthPair
// 0x0008
struct FRopeCatenaryLengthPair
{
	float                                              Taut;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Catenary;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
