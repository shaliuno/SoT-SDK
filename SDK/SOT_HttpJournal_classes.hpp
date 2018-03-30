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

// Class HttpJournal.HttpJournalSettings
// 0x0028 (0x0050 - 0x0028)
class UHttpJournalSettings : public UObject
{
public:
	struct FString                                     JournalUrl;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     JournalAuthKey;                                           // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                MaxLogVerbosity;                                          // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class HttpJournal.HttpJournalSettings")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
