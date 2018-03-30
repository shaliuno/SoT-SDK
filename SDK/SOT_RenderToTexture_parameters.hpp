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

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
struct URenderToTextureSceneDetails_GetTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
struct URenderToTextureSceneDetails_GetInstance_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
struct URenderToTextureSceneDetails_DestroyTexture_Params
{
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
{
	struct FName                                       Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class URenderToTextureSceneDetails*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
{
	struct FName                                       Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UClass*                                      ClassToSpawn;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
	struct FIntPoint                                   Resolution;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	bool                                               bForceLinearGamma;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	class URenderToTextureSceneDetails*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0020
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
