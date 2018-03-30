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

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEndPlayHandler::OnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay"));}

	UEndPlayHandler_OnEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULinkEndpointIdUtilities::IsValid(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid"));}

	ULinkEndpointIdUtilities_IsValid_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULinkEndpointIdUtilities::IsPathed(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed"));}

	ULinkEndpointIdUtilities_IsPathed_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FString                 String                         (CPF_Parm, CPF_ZeroConstructor)
// struct FLinkEndpointId         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinkEndpointId ULinkEndpointIdUtilities::CreateEndpointId(const struct FString& String)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId"));}

	ULinkEndpointIdUtilities_CreateEndpointId_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ULinkEndpointIdUtilities::Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString"));}

	ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
// (FUNC_BlueprintCosmetic, FUNC_Delegate)
// Parameters:
// struct FLinkEndpointId         Root                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FLinkEndpointId         path                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FLinkEndpointId         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinkEndpointId ULinkEndpointIdUtilities::CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds"));}

	ULinkEndpointIdUtilities_CombineEndpointIds_Params params;
	params.Root = Root;
	params.path = path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_Parm)
// class AActor*                  Instance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinkEndpointInterface::ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink"));}

	ULinkEndpointInterface_ReceiveLink_Params params;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_Parm)

void ULinkEndpointInterface::LoseLink(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink"));}

	ULinkEndpointInterface_LoseLink_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         SourceId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FLinkEndpointId         TargetId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULinkerComponent::UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.UnregisterLink"));}

	ULinkerComponent_UnregisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULinkerComponent::UnregisterEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint"));}

	ULinkerComponent_UnregisterEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.SetParent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinkerComponent::SetParent(class AActor* Parent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.SetParent"));}

	ULinkerComponent_SetParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// struct FLinkEndpointId         SourceId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FLinkEndpointId         TargetId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EAddLinkResult>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EAddLinkResult> ULinkerComponent::RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.RegisterLink"));}

	ULinkerComponent_RegisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAddEndpointResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EAddEndpointResult> ULinkerComponent::RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint"));}

	ULinkerComponent_RegisterEndpoint_Params params;
	params.Id = Id;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Child                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULinkerComponent::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild"));}

	ULinkerComponent_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Child                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  Instance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinkerComponent::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild"));}

	ULinkerComponent_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
// (FUNC_Protected)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ULinkerComponent::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint"));}

	ULinkerComponent_LookupEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULinkerComponent::GetNumSetLinks()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks"));}

	ULinkerComponent_GetNumSetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULinkerComponent::GetNumRegisteredLinks()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks"));}

	ULinkerComponent_GetNumRegisteredLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULinkerComponent::GetNumRegisteredEndpoints()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints"));}

	ULinkerComponent_GetNumRegisteredEndpoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULinkerComponent::GetNumPendingLinks()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks"));}

	ULinkerComponent_GetNumPendingLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.SetParent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinkerInterface::SetParent(class AActor* Parent)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.SetParent"));}

	ULinkerInterface_SetParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         SourceId                       (CPF_Parm)
// struct FLinkEndpointId         TargetId                       (CPF_Parm)

void ULinkerInterface::RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.RemoveLink"));}

	ULinkerInterface_RemoveLink_Params params;
	params.SourceId = SourceId;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_Parm)

void ULinkerInterface::RemoveEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint"));}

	ULinkerInterface_RemoveEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Child                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinkEndpointId         Id                             (CPF_Parm)

void ULinkerInterface::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild"));}

	ULinkerInterface_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Child                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinkEndpointId         Id                             (CPF_Parm)
// class AActor*                  Instance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinkerInterface::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild"));}

	ULinkerInterface_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
// (FUNC_Protected)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_Parm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ULinkerInterface::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint"));}

	ULinkerInterface_LookupEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddLink
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// struct FLinkEndpointId         SourceId                       (CPF_Parm)
// struct FLinkEndpointId         TargetId                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULinkerInterface::AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.AddLink"));}

	ULinkerInterface_AddLink_Params params;
	params.SourceId = SourceId;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
// (FUNC_Final, FUNC_Delegate)
// Parameters:
// struct FLinkEndpointId         Id                             (CPF_Parm)
// class AActor*                  Instance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULinkerInterface::AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.AddEndpoint"));}

	ULinkerInterface_AddEndpoint_Params params;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
