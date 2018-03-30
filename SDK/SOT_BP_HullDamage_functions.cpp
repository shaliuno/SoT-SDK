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

// Function BP_HullDamage.BP_HullDamage_C.Apply Hit
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 HitPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HitStrength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Has_Decal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDecalComponent*         Decal                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Apply Hit"));}

	ABP_HullDamage_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 HitLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HitStrenght                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::PlayHitSFX(const struct FVector& HitLocation, float HitStrenght)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX"));}

	ABP_HullDamage_C_PlayHitSFX_Params params;
	params.HitLocation = HitLocation;
	params.HitStrenght = HitStrenght;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 HitPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HitStrength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasDecal                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDecalComponent*         Decal                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit"));}

	ABP_HullDamage_C_Apply_Visual_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.HasDecal = HasDecal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_HullDamage.BP_HullDamage_C.Process Hit
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  DamagerType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitVelocity                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumDamageZones                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Process_Hit(class UClass* DamagerType, const struct FVector& HitPosition, const struct FVector& HitNormal, const struct FVector& HitVelocity, int NumDamageZones)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Process Hit"));}

	ABP_HullDamage_C_Process_Hit_Params params;
	params.DamagerType = DamagerType;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitVelocity = HitVelocity;
	params.NumDamageZones = NumDamageZones;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Hit_Normal                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Hit_Velocity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Hit_Strength                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Strength                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasDecal                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag"));}

	ABP_HullDamage_C_Scale_Hit_Strength_and_Get_Decal_Flag_Params params;
	params.Hit_Normal = Hit_Normal;
	params.Hit_Velocity = Hit_Velocity;
	params.Hit_Strength = Hit_Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strength != nullptr)
		*Strength = params.Strength;
	if (HasDecal != nullptr)
		*HasDecal = params.HasDecal;
}


// Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UMaterialInterface*      Decal_Material                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal"));}

	ABP_HullDamage_C_Get_Random_Deferred_Decal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal_Material != nullptr)
		*Decal_Material = params.Decal_Material;
}


// Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTexture2D*              Decal_Texture                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal"));}

	ABP_HullDamage_C_Get_Random_Persistent_Decal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal_Texture != nullptr)
		*Decal_Texture = params.Decal_Texture;
}


// Function BP_HullDamage.BP_HullDamage_C.Add Hit To HitList
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 HitPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Hit_Normal                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HitStrength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasDecal                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageZone                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            HitLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::Add_Hit_To_HitList(const struct FVector& HitPosition, const struct FVector& Hit_Normal, float HitStrength, bool HasDecal, class AActor* DamageZone, int HitLevel)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Add Hit To HitList"));}

	ABP_HullDamage_C_Add_Hit_To_HitList_Params params;
	params.HitPosition = HitPosition;
	params.Hit_Normal = Hit_Normal;
	params.HitStrength = HitStrength;
	params.HasDecal = HasDecal;
	params.DamageZone = DamageZone;
	params.HitLevel = HitLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UStaticMeshComponent*> StaticMeshes                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_HullDamage_C::Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials"));}

	ABP_HullDamage_C_Initialize_Damage_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMeshes != nullptr)
		*StaticMeshes = params.StaticMeshes;
}


// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_HullDamage_C::UserConstructionScript()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript"));}

	ABP_HullDamage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ABP_HullDamage_C::ReceiveBeginPlay()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay"));}

	ABP_HullDamage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_HullDamage_C::BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature"));}

	ABP_HullDamage_C_BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature_Params params;
	params.ImpactDamageEvent = ImpactDamageEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HullDamage_C::ExecuteUbergraph_BP_HullDamage(int EntryPoint)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage"));}

	ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
