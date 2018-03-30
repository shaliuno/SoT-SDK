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

// Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaLoadingScreenBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary")); }
		return ptr;
	}


	bool IsLoadingScreenVisible();
	bool IsLoadingScreenRegistered();
};


// Class AthenaLoadingScreen.SlateLoadingScreenParams
// 0x0190 (0x01B8 - 0x0028)
class USlateLoadingScreenParams : public UDataAsset
{
public:
	unsigned char                                      DrawBackground;                                           // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DrawBackgroundImage;                                      // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DrawTips;                                                 // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DrawSpinner;                                              // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FStringAssetReference                       PlaceholderSpinnerTexture;                                // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringAssetReference                       PlaceholderBackgroundTexture;                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FLinearColor                                BackgroundColour;                                         // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FStringAssetReference>               LoadingScreenImages;                                      // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxNumImagesPerLoad;                                      // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FText                                       SpinnerText;                                              // 0x0078(0x0028) (CPF_Edit)
	struct FSlateColor                                 SpinnerTextColour;                                        // 0x00A0(0x0028) (CPF_Edit)
	struct FSlateFontInfo                              SpinnerTextFont;                                          // 0x00C8(0x0038) (CPF_Edit)
	float                                              SpinnerSize;                                              // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     SpinnerMargin;                                            // 0x0104(0x0010) (CPF_Edit)
	float                                              SpinnerPadding;                                           // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStringAssetReference                       SpinnerIcon;                                              // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FMargin                                     TipsMargin;                                               // 0x0128(0x0010) (CPF_Edit)
	float                                              TipWrapLength;                                            // 0x0138(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TipDisplayDuration;                                       // 0x013C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TipDurationBetweenTips;                                   // 0x0140(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumTipsPerImage;                                          // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateFontInfo                              LoadingTipFont;                                           // 0x0148(0x0038) (CPF_Edit)
	TArray<struct FText>                               LoadingScreenTips;                                        // 0x0180(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FSlateColor                                 LoadingScreenTipColour;                                   // 0x0190(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaLoadingScreen.SlateLoadingScreenParams")); }
		return ptr;
	}

};


// Class AthenaLoadingScreen.AthenaLoadingScreenParams
// 0x0030 (0x0068 - 0x0038)
class UAthenaLoadingScreenParams : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       GameLoadingScreen;                                        // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       BootLoadingScreen;                                        // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       TeleportLoadingScreen;                                    // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaLoadingScreen.AthenaLoadingScreenParams")); }
		return ptr;
	}

};


// Class AthenaLoadingScreen.LoadingUtilities
// 0x0000 (0x0028 - 0x0028)
class ULoadingUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class AthenaLoadingScreen.LoadingUtilities")); }
		return ptr;
	}


	bool IsStreaming(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
