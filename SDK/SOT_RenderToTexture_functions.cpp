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

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture"));}

	URenderToTextureSceneDetails_GetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* URenderToTextureSceneDetails::GetInstance()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance"));}

	URenderToTextureSceneDetails_GetInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void URenderToTextureSceneDetails::DestroyTexture()
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture"));}

	URenderToTextureSceneDetails_DestroyTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
// (FUNC_Protected)
// Parameters:
// struct FName                   Identifier                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::GetRenderToTexture(const struct FName& Identifier)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture"));}

	URenderToTextureFunctionLibrary_GetRenderToTexture_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
// (FUNC_BlueprintCosmetic, FUNC_NetServer)
// Parameters:
// struct FName                   Identifier                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ClassToSpawn                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FIntPoint               Resolution                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bForceLinearGamma              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma)
{
	static UFunction* fn = 0;
	if(fn == 0) { fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture"));}

	URenderToTextureFunctionLibrary_CreateRenderToTexture_Params params;
	params.Identifier = Identifier;
	params.ClassToSpawn = ClassToSpawn;
	params.Resolution = Resolution;
	params.bForceLinearGamma = bForceLinearGamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
