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

// Class DebugMenu.DebugMenuComponent
// 0x0048 (0x0118 - 0x00D0)
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET
	class ADebugMenu*                                  DebugMenuInstance;                                        // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenuComponent")); }
		return ptr;
	}

};


// Class DebugMenu.DebugMenuEntryGenerator
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuEntryGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenuEntryGenerator")); }
		return ptr;
	}

};


// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (0x0068 - 0x0028)
class UDebugMenuDataAsset : public UDataAsset
{
public:
	TArray<class UDebugMenuDataAsset*>                 DataAssets;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FDebugMenuDataAssetEntry>            MenuEntires;                                              // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FDebugMenuButtonShortcut>            ButtonShortcuts;                                          // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UDebugMenuEntryGenerator*>            MenuEntryGenerators;                                      // 0x0058(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenuDataAsset")); }
		return ptr;
	}

};


// Class DebugMenu.DebugMenu
// 0x0050 (0x04B8 - 0x0468)
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0468(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenu")); }
		return ptr;
	}

};


// Class DebugMenu.DebugMenuComponentMock
// 0x0008 (0x0120 - 0x0118)
class UDebugMenuComponentMock : public UDebugMenuComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenuComponentMock")); }
		return ptr;
	}

};


// Class DebugMenu.DebugMenuTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class DebugMenu.DebugMenuTestFunctions")); }
		return ptr;
	}


	bool IsDebugMenuReady(class UObject* WorldContextObject);
	bool IsDebugMenuOpen(class UObject* WorldContextObject);
	bool IsDebugMenuAvailable();
	struct FKey GetDebugMenuToggleKeyComboBetaKeyboard();
	struct FKey GetDebugMenuToggleKeyComboAlphaKeyboard();
	struct FKey GetDebugMenuToggleButtonComboBetaGamepad();
	struct FKey GetDebugMenuToggleButtonComboAlphaGamepad();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
