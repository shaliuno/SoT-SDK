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

// Class AuthenticationTokenRequest.DevAuthenticationTokenRequestSettings
// 0x0088 (0x00B0 - 0x0028)
class UDevAuthenticationTokenRequestSettings : public UObject
{
public:
	struct FString                                     SandboxId;                                                // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ClientTitleId;                                            // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ServerTitleId;                                            // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     TokenServiceUrl;                                          // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UseDevTokenOnXbox;                                        // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     ClientId;                                                 // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ClientSecret;                                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ClientCertificateThumbprint;                              // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LivePrivileges;                                           // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AuthenticationTokenRequest.DevAuthenticationTokenRequestSettings")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
