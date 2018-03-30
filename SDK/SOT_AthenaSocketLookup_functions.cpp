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

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
// (FUNC_Delegate)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor)
// struct FSocketId               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSocketId USocketIdTestFunctions::MakeSocketIdWithInvalidName(const struct FString& InPath)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName"));}

	USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params params;
	params.InPath = InPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
// (FUNC_BlueprintCosmetic, FUNC_Protected)
// Parameters:
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSocketId USocketIdTestFunctions::MakeSocketIdWithEmptyPath(const struct FName& InSocketName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath"));}

	USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
// (FUNC_BlueprintCosmetic, FUNC_Protected, FUNC_Delegate)
// Parameters:
// struct FString                 InPath                         (CPF_Parm, CPF_ZeroConstructor)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSocketId USocketIdTestFunctions::MakeSocketId(const struct FString& InPath, const struct FName& InSocketName)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId"));}

	USocketIdTestFunctions_MakeSocketId_Params params;
	params.InPath = InPath;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
// (FUNC_Final, FUNC_Net, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FSocketLookupCache      InCache                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupCacheTestFunctions::IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache"));}

	USocketLookupCacheTestFunctions_IsInCache_Params params;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// struct FSocketLookupCache      InCache                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm)
// class USceneComponent*         InSceneComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupCacheTestFunctions::AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache"));}

	USocketLookupCacheTestFunctions_AddToCache_Params params;
	params.InSocketId = InSocketId;
	params.InSceneComponent = InSceneComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
// (FUNC_Final, FUNC_NetReliable, FUNC_Delegate, FUNC_NetServer, FUNC_HasDefaults)
// Parameters:
// struct FSocketLookupCache      Cache                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache"));}

	USocketLookupFunctions_TryGetSocketTransformWithCache_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cache != nullptr)
		*Cache = params.Cache;
	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
// (FUNC_RequiredAPI, FUNC_Net, FUNC_MulticastDelegate, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform"));}

	USocketLookupFunctions_TryGetSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.Space = Space;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
// (FUNC_Final, FUNC_Net, FUNC_NetServer, FUNC_HasOutParms)
// Parameters:
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class USceneComponent*         RelativeTo                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupFunctions::TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform"));}

	USocketLookupFunctions_TryGetRelativeSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.RelativeTo = RelativeTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
// (FUNC_Protected, FUNC_NetServer)
// Parameters:
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* USocketLookupFunctions::TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner"));}

	USocketLookupFunctions_TryFindSocketOwner_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
// (FUNC_Final, FUNC_Net, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FSocketId               InSocketId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USocketLookupInterface::FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupInterface.FindSocket"));}

	USocketLookupInterface_FindSocket_Params params;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
