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

// BlueprintGeneratedClass BP_Sail.BP_Sail_C
// 0x0020 (0x0620 - 0x0600)
class ABP_Sail_C : public ASail
{
public:
	TArray<struct FVector>                             Sail_Positions_Top;                                       // 0x0600(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             Sail_Positions_Bottom;                                    // 0x0610(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Sail.BP_Sail_C")); }
		return ptr;
	}


	void Debug();
	void Initialise(bool IsMainSail, float SailForceScalar);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
