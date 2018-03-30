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

// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript
struct ABP_PiratePreview_Lighting_C_UserConstructionScript_Params
{
};

// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature
struct ABP_PiratePreview_Lighting_C_PreviewReady__DelegateSignature_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                     // (CPF_Parm) 0000
};

// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature
struct ABP_PiratePreview_Lighting_C_PreviewBusy__DelegateSignature_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                     // (CPF_Parm) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
