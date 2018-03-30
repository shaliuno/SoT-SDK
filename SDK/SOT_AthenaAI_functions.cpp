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

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAthenaAIFormComponent::OnRep_FormData()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData"));}

	UAthenaAIFormComponent_OnRep_FormData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (CPF_Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression"));}

	UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (CPF_Parm)

void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset"));}

	UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (CPF_Parm)

void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout"));}

	UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (CPF_Parm)

void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm"));}

	UAIEncounterServiceInterface_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (CPF_Parm)

void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter"));}

	UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (CPF_Parm)

void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression"));}

	AAIEncounterService_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (CPF_Parm)

void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset"));}

	AAIEncounterService_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (CPF_Parm)

void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout"));}

	AAIEncounterService_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedForm
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (CPF_Parm)

void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedForm"));}

	AAIEncounterService_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (CPF_Parm)

void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter"));}

	AAIEncounterService_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   AIActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI"));}

	UAIManagerServiceInterface_StartDespawnAI_Params params;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAIManagerServiceInterface::GetNumOfSpawnedPawns()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns"));}

	UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAISpawner::GetNumOfSpawnRequests()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AISpawner.GetNumOfSpawnRequests"));}

	UAISpawner_GetNumOfSpawnRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.TickService
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaSeconds                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIManagerService::TickService(float DeltaSeconds)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.TickService"));}

	AAIManagerService_TickService_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerService.StartDespawnAI
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   AIActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIManagerService::StartDespawnAI(class APawn* AIActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.StartDespawnAI"));}

	AAIManagerService_StartDespawnAI_Params params;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIManagerService.GetRegionSpawner
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FName                   Region                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Index                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAISpawner*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAISpawner* AAIManagerService::GetRegionSpawner(const struct FName& Region, int Index)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.GetRegionSpawner"));}

	AAIManagerService_GetRegionSpawner_Params params;
	params.Region = Region;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.GetNumOfSpawnRequests
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AAIManagerService::GetNumOfSpawnRequests()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIManagerService.GetNumOfSpawnRequests"));}

	AAIManagerService_GetNumOfSpawnRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors"));}

	UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion"));}

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld"));}

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Ignore                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits"));}

	UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer"));}

	UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer"));}

	UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCloseByCharactersRadius      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy"));}

	UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors"));}

	ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion"));}

	ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld"));}

	ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Ignore                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits"));}

	ADebugAIManagerService_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer"));}

	ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer"));}

	ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCloseByCharactersRadius      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy"));}

	ADebugAIManagerService_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup"));}

	UAIFaunaSpawner_SpawnFaunaGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath"));}

	UAIPerPlayerSpawner_PlayerDeath_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAIPerPlayerSpawner::GetNumOfPlayers()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AIPerPlayerSpawner.GetNumOfPlayers"));}

	UAIPerPlayerSpawner_GetNumOfPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FVector                 Target                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                OutAimConfig                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, struct FRotator* OutAimConfig)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget"));}

	UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.StopBehaviourLogic
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AAthenaAIController::StopBehaviourLogic()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.StopBehaviourLogic"));}

	AAthenaAIController_StopBehaviourLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ExpirationAge                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Sense                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor"));}

	AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params;
	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.SetNamedControllerParam
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ParamName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaAIController::SetNamedControllerParam(const struct FName& ParamName, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.SetNamedControllerParam"));}

	AAthenaAIController_SetNamedControllerParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  TriggerActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TriggerActorLocation           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 SpawnPosition                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor, const struct FVector& TriggerActorLocation, const struct FVector& SpawnPosition)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus"));}

	AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params;
	params.TriggerActor = TriggerActor;
	params.TriggerActorLocation = TriggerActorLocation;
	params.SpawnPosition = SpawnPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (CPF_Parm, CPF_ZeroConstructor)

void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnPerceptionUpdated"));}

	AAthenaAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnNewlySpawned
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AAthenaAIController::OnNewlySpawned()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnNewlySpawned"));}

	AAthenaAIController_OnNewlySpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.OnFinishDespawn
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AAthenaAIController::OnFinishDespawn()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.OnFinishDespawn"));}

	AAthenaAIController_OnFinishDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIController.IsActorPerceived
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class AActor*                  TargetActor                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.IsActorPerceived"));}

	AAthenaAIController_IsActorPerceived_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetTargetActor
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AAthenaAIController::GetTargetActor()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetTargetActor"));}

	AAthenaAIController_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAthenaAIPerceptionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent"));}

	AAthenaAIController_GetAthenaAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAllSeenActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          SeenActors                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.GetAllSeenActors"));}

	AAthenaAIController_GetAllSeenActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;
}


// Function AthenaAI.AthenaAIController.FindNamedWeightedRangesControllerParam
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FName                   ParamName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FWeightedProbabilityRangeOfRanges ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWeightedProbabilityRangeOfRanges AAthenaAIController::FindNamedWeightedRangesControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.FindNamedWeightedRangesControllerParam"));}

	AAthenaAIController_FindNamedWeightedRangesControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.FindNamedControllerParam
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FName                   ParamName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AAthenaAIController::FindNamedControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.FindNamedControllerParam"));}

	AAthenaAIController_FindNamedControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.ApplyControllerParams
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   InPawn                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIController.ApplyControllerParams"));}

	AAthenaAIController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InItemCategory                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ParamName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam"));}

	AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params;
	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed"));}

	AAthenaFaunaAIController_LeaderDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaFaunaAIController.GetLeader
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AAthenaFaunaAIController::GetLeader()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetLeader"));}

	AAthenaFaunaAIController_GetLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetCourage
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AAthenaFaunaAIController::GetCourage()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetCourage"));}

	AAthenaFaunaAIController_GetCourage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp"));}

	AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaSwimmingAIController.TargetActorDestroyed
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaSwimmingAIController::TargetActorDestroyed(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaSwimmingAIController.TargetActorDestroyed"));}

	AAthenaSwimmingAIController_TargetActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaSwimmingAIController.SetTargetActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAthenaSwimmingAIController::SetTargetActor(class AActor* Actor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaSwimmingAIController.SetTargetActor"));}

	AAthenaSwimmingAIController_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UClass>        AIType                         (CPF_ConstParm, CPF_Parm)
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (CPF_ConstParm, CPF_Parm)
// TAssetPtr<class ULoadoutAsset> Loadout                        (CPF_ConstParm, CPF_Parm)
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (CPF_ConstParm, CPF_Parm)
// class UClass*                  ClassId                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Pos                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                Rot                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   Region                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  TriggerActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delay                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, float Delay)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings"));}

	UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params;
	params.AIType = AIType;
	params.Skillset = Skillset;
	params.Loadout = Loadout;
	params.Form = Form;
	params.ClassId = ClassId;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Region = Region;
	params.TriggerActor = TriggerActor;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIBySpawner
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   RegionName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  TriggerActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SpawnAIBySpawner(const struct FName& RegionName, class AActor* TriggerActor)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIBySpawner"));}

	UAthenaAIDebugFunctionLibrary_SpawnAIBySpawner_Params params;
	params.RegionName = RegionName;
	params.TriggerActor = TriggerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TAssetPtr<class UClass>        AIClass                        (CPF_ConstParm, CPF_Parm)
// class UAIEncounterSettings*    EncounterSettings              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Pos                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                Rot                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           RequireNavMesh                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delay                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           MakeAIPermanentlyNetRelevant   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI"));}

	UAthenaAIDebugFunctionLibrary_SpawnAI_Params params;
	params.AIClass = AIClass;
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.RequireNavMesh = RequireNavMesh;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InMaxAllowedSeconds            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 QueryOwner                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds"));}

	UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params;
	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// class UObject*                 QueryOwner                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAthenaAIDebugFunctionLibrary::GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries"));}

	UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AAthenaAIController*     AIController                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAthenaAIControllerParamsDataAsset* ControllerParams               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings"));}

	UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params;
	params.AIController = AIController;
	params.ControllerParams = ControllerParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::EnableBehaviorTreeLogging(class UObject* WorldContext)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging"));}

	UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIDebugFunctionLibrary::DespawnAIPawn(class APawn* Pawn)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn"));}

	UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
// (FUNC_Net, FUNC_Private, FUNC_Delegate, FUNC_NetServer)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 QueryExtent                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAthenaAIDebugFunctionLibrary::CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation"));}

	UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params;
	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled"));}

	UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  Sense                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Enable                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense"));}

	UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params;
	params.Sense = Sense;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           Enable                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception"));}

	UAthenaAIPerceptionComponent_EnableAllPerception_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
