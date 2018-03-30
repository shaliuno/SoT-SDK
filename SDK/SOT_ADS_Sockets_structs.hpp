#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_Sockets.ADS_Sockets
// 0x0002
struct FADS_Sockets
{
	TEnumAsByte<EAthenaAnimationSocketGroup>           ControllableHandSocketGroup_4_E2B44462485C20DD896BBF943561D191;// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> HipStashSocket_11_2893BE234613BF11CA9E87BDEC3F8FBC;       // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
