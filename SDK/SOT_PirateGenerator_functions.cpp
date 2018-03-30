// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
// (FUNC_NetReliable, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FPirateDescription      Desc                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UAnimationSwitchDataAsset::GetAnimSetIdForDesc(const struct FPirateDescription& Desc)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc"));}

	UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync"));}

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
// (FUNC_Protected)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeFunctionLibrary::BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh"));}

	UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMesh*           Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature"));}

	UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshSpecification     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FIPGBlendShape>  BlendShapes                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCharacterMeshBakeFunctionLibrary::AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes"));}

	UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params params;
	params.CharacterMeshSpecification = CharacterMeshSpecification;
	params.BlendShapes = BlendShapes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCharacterMeshBakeSpecification* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::MakeCharacterMeshSpecification()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification"));}

	UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMesh*           BaseMesh                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseMeshWeight                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UMeshPatchAsset*> MeshPatchAssets                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  MeshPatchAssetWeights          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class USkeletalMesh*           TargetMesh                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterMeshBakeTestFunctionLibrary::BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets"));}

	UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params params;
	params.BaseMesh = BaseMesh;
	params.BaseMeshWeight = BaseMeshWeight;
	params.MeshPatchAssets = MeshPatchAssets;
	params.MeshPatchAssetWeights = MeshPatchAssetWeights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetMesh != nullptr)
		*TargetMesh = params.TargetMesh;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
// (FUNC_Protected)
// Parameters:
// class UClass*                  CharacterMeshBakeSpecificationClass (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault"));}

	UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params params;
	params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// class USkeletalMesh*           MeshA                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMesh*           MeshB                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCharacterMeshBakeTestFunctionLibrary::AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria"));}

	UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params params;
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
// (FUNC_NetServer)
// Parameters:
// struct FString                 MeshPath                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 TypeName                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UFileAccessFunctionLibrary::GetMeshPatchAssetPathFromMeshPathAndTypeName(const struct FString& MeshPath, const struct FString& TypeName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName"));}

	UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params params;
	params.MeshPath = MeshPath;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
// (FUNC_Protected, FUNC_Delegate)
// Parameters:
// class USkeletalMesh*           Mesh                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 TypeName                       (CPF_Parm, CPF_ZeroConstructor)
// class UMeshPatchAsset*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMeshPatchAsset* UFileAccessFunctionLibrary::GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const struct FString& TypeName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName"));}

	UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params params;
	params.Mesh = Mesh;
	params.TypeName = TypeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
// (FUNC_Net, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// float                          BaseMeshBlendWeight            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         BodyShapeBlendNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Threshold                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UPirateBodyShapeFunctionLibrary::GetHighestWeighted(float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted"));}

	UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params params;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
// (FUNC_Final, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// TEnumAsByte<EIPGGender>        Gender                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRadialCoordinate       BodyShapeWheelRadialCoordinate (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          BaseMeshBlendWeight            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         BodyShapeBlendNames            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<float>                  BodyShapeBlendWeights          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPirateBodyShapeFunctionLibrary::FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<struct FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate"));}

	UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params params;
	params.Gender = Gender;
	params.BodyShapeWheelRadialCoordinate = BodyShapeWheelRadialCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseMeshBlendWeight != nullptr)
		*BaseMeshBlendWeight = params.BaseMeshBlendWeight;
	if (BodyShapeBlendNames != nullptr)
		*BodyShapeBlendNames = params.BodyShapeBlendNames;
	if (BodyShapeBlendWeights != nullptr)
		*BodyShapeBlendWeights = params.BodyShapeBlendWeights;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
// (FUNC_Protected)
// Parameters:
// struct FVector2D               UV                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRadialCoordinate       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRadialCoordinate UPirateBodyShapeFunctionLibrary::ConvertToRadialCoordinate(const struct FVector2D& UV)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate"));}

	UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params params;
	params.UV = UV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
// (FUNC_Protected)
// Parameters:
// struct FRadialCoordinate       Coord                          (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UPirateBodyShapeFunctionLibrary::ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate"));}

	UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params params;
	params.Coord = Coord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FString                 RelativePath                   (CPF_Parm, CPF_ZeroConstructor)
// struct FPirateDescription      InDesc                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::SavePirateDescription(const struct FString& RelativePath, const struct FPirateDescription& InDesc)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription"));}

	UPirateGeneratorFunctionLibrary_SavePirateDescription_Params params;
	params.RelativePath = RelativePath;
	params.InDesc = InDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Private)
// Parameters:
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRadialCoordinate       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRadialCoordinate UPirateGeneratorFunctionLibrary::RandomBodyShape(int Seed)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape"));}

	UPirateGeneratorFunctionLibrary_RandomBodyShape_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FString                 RelativePath                   (CPF_Parm, CPF_ZeroConstructor)
// struct FPirateDescription      OutDesc                        (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPirateGeneratorFunctionLibrary::LoadPirateDescription(const struct FString& RelativePath, struct FPirateDescription* OutDesc)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription"));}

	UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params params;
	params.RelativePath = RelativePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
// (FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FPirateDescription      Desc                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMesh*           OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPirateDescription      OutDesc                        (CPF_Parm, CPF_OutParm)

void UPirateGeneratorFunctionLibrary::K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread"));}

	UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params params;
	params.Desc = Desc;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
	if (OutDesc != nullptr)
		*OutDesc = params.OutDesc;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
// (FUNC_BlueprintAuthorityOnly, FUNC_NetServer)
// Parameters:
// struct FString                 RefName                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Str                            (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPirateGeneratorFunctionLibrary::GetSeedFromString(const struct FString& RefName, const struct FString& Str)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString"));}

	UPirateGeneratorFunctionLibrary_GetSeedFromString_Params params;
	params.RefName = RefName;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMesh*           Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FPirateGeneratorTextureReference> OutReferences                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UPirateGeneratorFunctionLibrary::GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences"));}

	UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReferences != nullptr)
		*OutReferences = params.OutReferences;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FString> UPirateGeneratorFunctionLibrary::GetAllDescriptions()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions"));}

	UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
// (FUNC_Net, FUNC_NetReliable, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOverrideBodyShape             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRadialCoordinate       BodyShapeOverride              (CPF_Parm)
// TEnumAsByte<EIPGGender>        SpecificGender                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EIPGEthnicity>     SpecificEthnicity              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FIPGDynamicSlider> DynamicSliders                 (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FName>           TextureReferences              (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FIPGScalarParameter> ScalarParameters               (CPF_Parm, CPF_ZeroConstructor)
// struct FPirateDescription      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPirateDescription UPirateGeneratorFunctionLibrary::GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate"));}

	UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params params;
	params.Seed = Seed;
	params.bOverrideBodyShape = bOverrideBodyShape;
	params.BodyShapeOverride = BodyShapeOverride;
	params.SpecificGender = SpecificGender;
	params.SpecificEthnicity = SpecificEthnicity;
	params.DynamicSliders = DynamicSliders;
	params.TextureReferences = TextureReferences;
	params.ScalarParameters = ScalarParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FPirateDescription      Desc                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EPirateBakeFlags>  Flags                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPirateGeneratorFunctionLibrary::BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync"));}

	UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params params;
	params.Desc = Desc;
	params.Flags = Flags;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMesh*           MeshWithBaseSkeleton           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletonsDataAsset*     SkeletonsDataAsset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MeshTypeSkeletonFileFormat     (CPF_Parm, CPF_ZeroConstructor)
// float                          BaseMeshBlendWeight            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         BodyShapeBlendNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const struct FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification"));}

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.MeshWithBaseSkeleton = MeshWithBaseSkeleton;
	params.SkeletonsDataAsset = SkeletonsDataAsset;
	params.MeshTypeSkeletonFileFormat = MeshTypeSkeletonFileFormat;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class USkeletalMesh*>   SubMeshes                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          BaseMeshBlendWeight            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         BodyShapeBlendNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  BodyShapeBlendWeights          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPreparePirateMeshBakeTestFunctionLibrary::PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<struct FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification"));}

	UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params params;
	params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
	params.SubMeshes = SubMeshes;
	params.BaseMeshBlendWeight = BaseMeshBlendWeight;
	params.BodyShapeBlendNames = BodyShapeBlendNames;
	params.BodyShapeBlendWeights = BodyShapeBlendWeights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWardrobeOutfitDataAsset::GetBiasForCategory(const struct FName& Name)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory"));}

	UWardrobeOutfitDataAsset_GetBiasForCategory_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FName>           ClothingItemNames              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FName>           Tags                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         AsyncResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UWardrobeFunctionLibrary::PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const struct FScriptDelegate& AsyncResult)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync"));}

	UWardrobeFunctionLibrary_PickOutfitAsync_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;
	params.AsyncResult = AsyncResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// TArray<struct FName>           ClothingItemNames              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FName>           Tags                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TEnumAsByte<EIPGPirateType>    PirateType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class USkeletalMesh*>   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWardrobeFunctionLibrary::PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, TArray<class USkeletalMesh*>* Result)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit"));}

	UWardrobeFunctionLibrary_PickOutfit_Params params;
	params.ClothingItemNames = ClothingItemNames;
	params.Tags = Tags;
	params.PirateType = PirateType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_NetServer)
// Parameters:
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           InputItems                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias"));}

	UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;
	params.BiasPerCategory = BiasPerCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           InputItems                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems"));}

	UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params params;
	params.Seed = Seed;
	params.InputItems = InputItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
// (FUNC_Delegate)
// Parameters:
// class UWardrobeOutfitDataAsset* Outfit                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EIPGGender>        Gender                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit"));}

	UWardrobeFunctionLibrary_GetRandomOutfit_Params params;
	params.Outfit = Outfit;
	params.Seed = Seed;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeTypes()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes"));}

	UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FString                 TypeName                       (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EIPGPirateType>    PirateType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeItemsForType(const struct FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType"));}

	UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params params;
	params.TypeName = TypeName;
	params.PirateType = PirateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// TEnumAsByte<EIPGPirateType>    PirateType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UWardrobeFunctionLibrary::GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems"));}

	UWardrobeFunctionLibrary_GetAllWardrobeItems_Params params;
	params.PirateType = PirateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class USkeletalMesh*>   Meshes                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature"));}

	UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params params;
	params.Success = Success;
	params.Meshes = Meshes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
