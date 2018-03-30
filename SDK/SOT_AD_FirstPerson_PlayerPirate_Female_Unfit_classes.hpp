#pragma once

// SOT: Sea of Thieves (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Female_Unfit.AD_FirstPerson_PlayerPirate_Female_Unfit_C
// 0x0000 (0x0310 - 0x0310)
class UAD_FirstPerson_PlayerPirate_Female_Unfit_C : public UAD_FirstPerson_PlayerPirate_Female_Default_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Female_Unfit.AD_FirstPerson_PlayerPirate_Female_Unfit_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
