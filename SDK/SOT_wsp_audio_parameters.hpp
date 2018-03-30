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

// Function wsp_audio.wsp_audio_C.ReceiveTick
struct Awsp_audio_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function wsp_audio.wsp_audio_C.ReceiveBeginPlay
struct Awsp_audio_C_ReceiveBeginPlay_Params
{
};

// Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio
struct Awsp_audio_C_ExecuteUbergraph_wsp_audio_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
