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

// BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C
// 0x0000 (0x00F0 - 0x00F0)
class UXMarksTheSpot_TheJourneyForBuriedTreasure_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
