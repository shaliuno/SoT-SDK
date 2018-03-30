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

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Centre                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Segments                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Positions                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_Placement_Functions_C::GenerateRadialXYPositionsAroundPoint(const struct FVector& Centre, float Radius, int Segments, class UObject* __WorldContext, TArray<struct FVector>* Positions)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint"));}

	UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params params;
	params.Centre = Centre;
	params.Radius = Radius;
	params.Segments = Segments;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FHitResult>      Hits                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Valid_Hit                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_Parm, CPF_OutParm)

void UBP_Placement_Functions_C::Get_First_Valid_Hit(class UObject* __WorldContext, TArray<struct FHitResult>* Hits, bool* Is_Valid_Hit, struct FHitResult* Hit)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit"));}

	UBP_Placement_Functions_C_Get_First_Valid_Hit_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (Is_Valid_Hit != nullptr)
		*Is_Valid_Hit = params.Is_Valid_Hit;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Centre                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Extent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_Start                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_End                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Rotated_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, const struct FRotator& Rotation, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast"));}

	UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Spawn                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius_Overlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii_Out                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_Placement_Functions_C::Detonate_Charge(class AActor* Spawn, const struct FVector& Position, float Radius, float Radius_Overlap, int Seed, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, TArray<struct FLinearColor>* Blast_Radii_Out)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge"));}

	UBP_Placement_Functions_C_Detonate_Charge_Params params;
	params.Spawn = Spawn;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.Seed = Seed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Blast_Radii_Out != nullptr)
		*Blast_Radii_Out = params.Blast_Radii_Out;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 A_String                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 B_String                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Does_A_Delete_B(const struct FString& A_String, const struct FString& B_String, class UObject* __WorldContext, bool* Return)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B"));}

	UBP_Placement_Functions_C_Does_A_Delete_B_Params params;
	params.A_String = A_String;
	params.B_String = B_String;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Input_Actor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Returning_Tag                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Asset_Tag                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_Placement_Functions_C::Get_Actor_Placement_Asset_Type(class AActor* Input_Actor, class UObject* __WorldContext, bool* Returning_Tag, struct FString* Asset_Tag)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type"));}

	UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Returning_Tag != nullptr)
		*Returning_Tag = params.Returning_Tag;
	if (Asset_Tag != nullptr)
		*Asset_Tag = params.Asset_Tag;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Input_Actor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Delete_Actor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          Overlaps_to_Delete             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_Placement_Functions_C::Check_Actor_Overlap(class AActor* Input_Actor, class UObject* __WorldContext, bool* Delete_Actor, TArray<class AActor*>* Overlaps_to_Delete)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap"));}

	UBP_Placement_Functions_C_Check_Actor_Overlap_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delete_Actor != nullptr)
		*Delete_Actor = params.Delete_Actor;
	if (Overlaps_to_Delete != nullptr)
		*Overlaps_to_Delete = params.Overlaps_to_Delete;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FPlacementGardenSeed    Selected_Mesh                  (CPF_Parm)
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Get_Mesh_Instance_Transform(const struct FPlacementGardenSeed& Selected_Mesh, const struct FVector& Location, const struct FVector& Normal, class UObject* __WorldContext, struct FRandomStream* Random, struct FTransform* Transform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform"));}

	UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params params;
	params.Selected_Mesh = Selected_Mesh;
	params.Location = Location;
	params.Normal = Normal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FPlacementGardenSeed> Charges                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  Charge_Probabilities           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Mesh_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities"));}

	UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FPlacementGardenSeed> Meshes                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  Mesh_Probabilities             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Generator_Radius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Clustering               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UObject*>         Physical_Materials             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FLinearColor>    Mesh_Radii                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Spawn_Permission               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Mesh_Index                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPlacementGardenSeed    Mesh                           (CPF_Parm, CPF_OutParm)

void UBP_Placement_Functions_C::Set_Mesh(float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Mesh_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FTransform* Transform, float* Radius, int* Mesh_Index, struct FPlacementGardenSeed* Mesh)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh"));}

	UBP_Placement_Functions_C_Set_Mesh_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Mesh_Probabilities != nullptr)
		*Mesh_Probabilities = params.Mesh_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Mesh_Radii != nullptr)
		*Mesh_Radii = params.Mesh_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Mesh_Index != nullptr)
		*Mesh_Index = params.Mesh_Index;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FPlacementBombCharge> Charges                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  Charge_Probabilities           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Generator_Radius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Clustering               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Box_Distribution               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UObject*>         Physical_Materials             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FLinearColor>    Blast_Radii                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Spawn_Permission               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPlacementBombCharge    Charge                         (CPF_Parm, CPF_OutParm)

void UBP_Placement_Functions_C::Set_Charge(float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Blast_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FVector* Position, float* Radius, struct FPlacementBombCharge* Charge)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge"));}

	UBP_Placement_Functions_C_Set_Charge_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Box_Distribution = Box_Distribution;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Position != nullptr)
		*Position = params.Position;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Charge != nullptr)
		*Charge = params.Charge;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UObject*>         Physical_Materials             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 Placement_Material             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Placement_Permission           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Check_Surface_Materials(class UObject* Placement_Material, class UObject* __WorldContext, TArray<class UObject*>* Physical_Materials, bool* Placement_Permission)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials"));}

	UBP_Placement_Functions_C_Check_Surface_Materials_Params params;
	params.Placement_Material = Placement_Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Slope_Range                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Placement_Permission           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Check_Slope(const struct FVector& Normal, const struct FVector2D& Slope_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope"));}

	UBP_Placement_Functions_C_Check_Slope_Params params;
	params.Normal = Normal;
	params.Slope_Range = Slope_Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Height_Range                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Placement_Permission           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Check_Height(const struct FVector& Position, const struct FVector2D& Height_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height"));}

	UBP_Placement_Functions_C_Check_Height_Params params;
	params.Position = Position;
	params.Height_Range = Height_Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius_Overlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Placement_Permission           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Check_Radius_Overlap(const struct FVector& Position, float Radius, float Radius_Overlap, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, bool* Placement_Permission)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap"));}

	UBP_Placement_Functions_C_Check_Radius_Overlap_Params params;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Cast_Success                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Set_Spawn_Properties(class UObject* Object, int Seed, float Radius, class UObject* __WorldContext, bool* Cast_Success)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties"));}

	UBP_Placement_Functions_C_Set_Spawn_Properties_Params params;
	params.Object = Object;
	params.Seed = Seed;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cast_Success != nullptr)
		*Cast_Success = params.Cast_Success;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Centre                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Extent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_Start                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_End                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast"));}

	UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Seed_Density                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Sample_Count                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Get_Box_Sample_Count(class AActor* Actor, float Seed_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count"));}

	UBP_Placement_Functions_C_Get_Box_Sample_Count_Params params;
	params.Actor = Actor;
	params.Seed_Density = Seed_Density;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRandomStream           Random                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Centre                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Clustering               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Actor_Transform                (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_Start                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Raycast_End                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Radial_Raycast(float Radius, const struct FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const struct FTransform& Actor_Transform, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast"));}

	UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params params;
	params.Radius = Radius;
	params.Centre = Centre;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor_Transform = Actor_Transform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Random_Float                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<float>                  Charge_Probabilities           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Calculate_Index_from_Probabilities(float Random_Float, class UObject* __WorldContext, TArray<float>* Charge_Probabilities, int* Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities"));}

	UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params params;
	params.Random_Float = Random_Float;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spawn_Sample_Density           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Sample_Count                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count"));}

	UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params params;
	params.Radius = Radius;
	params.Spawn_Sample_Density = Spawn_Sample_Density;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FPlacementBombCharge> Charges                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  Charge_Probabilities           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Charge_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities"));}

	UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
