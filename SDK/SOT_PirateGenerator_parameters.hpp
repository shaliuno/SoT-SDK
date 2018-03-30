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

// Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
struct UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params
{
	struct FPirateDescription                          Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0078
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FScriptDelegate                             AsyncResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USkeletalMesh*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshSpecification;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
{
	class UCharacterMeshBakeSpecification*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
{
	class USkeletalMesh*                               BaseMesh;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              BaseMeshWeight;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	TArray<float>                                      MeshPatchAssetWeights;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0020
	class USkeletalMesh*                               TargetMesh;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0030
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
{
	class UClass*                                      CharacterMeshBakeSpecificationClass;                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USkeletalMesh*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
{
	class USkeletalMesh*                               MeshA;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USkeletalMesh*                               MeshB;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0010
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
{
	struct FString                                     MeshPath;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     TypeName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0010
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0020
};

// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     TypeName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UMeshPatchAsset*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0018
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
{
	float                                              BaseMeshBlendWeight;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FString>                             BodyShapeBlendNames;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	TArray<float>                                      BodyShapeBlendWeights;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	float                                              Threshold;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0030
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
{
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate;                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0004
	float                                              BaseMeshBlendWeight;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	TArray<struct FString>                             BodyShapeBlendNames;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0010
	TArray<float>                                      BodyShapeBlendWeights;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0020
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0030
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
{
	struct FVector2D                                   UV;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRadialCoordinate                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0008
};

// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
{
	struct FRadialCoordinate                           Coord;                                                    // (CPF_Parm) 0000
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
{
	struct FString                                     RelativePath;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FPirateDescription                          InDesc;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0088
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
{
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FRadialCoordinate                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0004
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
{
	struct FString                                     RelativePath;                                             // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FPirateDescription                          OutDesc;                                                  // (CPF_Parm, CPF_OutParm) 0010
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0088
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
{
	struct FPirateDescription                          Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0078
	class USkeletalMesh*                               OutMesh;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0080
	struct FPirateDescription                          OutDesc;                                                  // (CPF_Parm, CPF_OutParm) 0088
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
{
	struct FString                                     RefName;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_ZeroConstructor) 0010
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FPirateGeneratorTextureReference>    OutReferences;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0008
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
{
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               bOverrideBodyShape;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
	struct FRadialCoordinate                           BodyShapeOverride;                                        // (CPF_Parm) 0008
	TEnumAsByte<EIPGGender>                            SpecificGender;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TEnumAsByte<EIPGEthnicity>                         SpecificEthnicity;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0011
	TArray<struct FIPGDynamicSlider>                   DynamicSliders;                                           // (CPF_Parm, CPF_ZeroConstructor) 0018
	TArray<struct FName>                               TextureReferences;                                        // (CPF_Parm, CPF_ZeroConstructor) 0028
	TArray<struct FIPGScalarParameter>                 ScalarParameters;                                         // (CPF_Parm, CPF_ZeroConstructor) 0038
	struct FPirateDescription                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm) 0048
};

// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0000
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0078
	struct FScriptDelegate                             AsyncResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 007C
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class USkeletalMesh*                               MeshWithBaseSkeleton;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	class USkeletonsDataAsset*                         SkeletonsDataAsset;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	struct FString                                     MeshTypeSkeletonFileFormat;                               // (CPF_Parm, CPF_ZeroConstructor) 0018
	float                                              BaseMeshBlendWeight;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0028
	TArray<struct FString>                             BodyShapeBlendNames;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0030
	TArray<float>                                      BodyShapeBlendWeights;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0040
};

// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
{
	class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class USkeletalMesh*>                       SubMeshes;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	float                                              BaseMeshBlendWeight;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	TArray<struct FString>                             BodyShapeBlendNames;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0020
	TArray<float>                                      BodyShapeBlendWeights;                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0030
};

// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
{
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
{
	TArray<struct FName>                               ClothingItemNames;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<struct FName>                               Tags;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0021
	struct FScriptDelegate                             AsyncResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0024
};

// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
struct UWardrobeFunctionLibrary_PickOutfit_Params
{
	TArray<struct FName>                               ClothingItemNames;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
	TArray<struct FName>                               Tags;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0010
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0020
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0021
	TArray<class USkeletalMesh*>                       Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor) 0028
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0038
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
{
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FName>                               InputItems;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0018
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0028
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
{
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FName>                               InputItems;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
{
	class UWardrobeOutfitDataAsset*                    Outfit;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Seed;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	TEnumAsByte<EIPGGender>                            Gender;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 000C
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0010
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0000
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
{
	struct FString                                     TypeName;                                                 // (CPF_Parm, CPF_ZeroConstructor) 0000
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0018
};

// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
{
	TEnumAsByte<EIPGPirateType>                        PirateType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<class USkeletalMesh*>                       Meshes;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
