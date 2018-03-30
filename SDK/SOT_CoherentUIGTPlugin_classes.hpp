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

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0270 (0x0340 - 0x00D0)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x0150(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0160(0x0048) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput;                                            // 0x01B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent;                             // 0x01B2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings;                                 // 0x01B3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles;                           // 0x01D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDelayedUpdate;                                           // 0x01D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x16E];                                     // 0x01D2(0x016E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent")); }
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* eventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0038 (0x0378 - 0x0340)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	struct FString                                     URL;                                                      // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Width;                                                    // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ManualTexture;                                            // 0x0358(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClickThroughAlphaThreshold;                               // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent;                                              // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0361(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTComponent")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x0100 - 0x00D0)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                                 // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTLiveView")); }
		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const struct FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// 0x0008 (0x0108 - 0x0100)
class UCoherentUIGTRenderToTextureLiveView : public UCoherentUIGTLiveView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0040 (0x04A8 - 0x0468)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0468(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTSystem")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0080 (0x00A8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTJSEvent")); }
		return ptr;
	}


	void AddStructArg(class UStructProperty* Arg);
	void AddString(const struct FString& Str);
	void AddObject(class UObject* Object);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTJSPayload")); }
		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	struct FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0028 (0x0368 - 0x0340)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	struct FStringAssetReference                       HUDMaterialName;                                          // 0x0340(0x0010) (CPF_ZeroConstructor)
	class UMaterial*                                   HUDMaterial;                                              // 0x0350(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTHUD")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary")); }
		return ptr;
	}


	void TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings);
	class UCoherentUIGTJSEvent* CreateJSEvent(class UObject* WorldContextObject);
	void AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg);
	void AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0088 (0x05E8 - 0x0560)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                          // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0568(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTGameHUD")); }
		return ptr;
	}


	void SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0058 (0x04C0 - 0x0468)
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;                  // 0x0468(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;                    // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                          // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                            // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x04A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTInputActor")); }
		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	unsigned char                                      EnableLiveReload;                                         // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                InspectorPort;                                            // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableWebSecurity;                                        // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableLocalization;                                       // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      RunAsynchronous;                                          // 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRecursivelyBindUStructs;                                 // 0x0037(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      LoadSystemFonts;                                          // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarningsInEditor;                         // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      ShowWarningsOnScreen;                                     // 0x003A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ECoherentUIGTSettingsSeverity>         LogSeverity;                                              // 0x003B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRespectTitleSafeZone;                                    // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRespectLetterboxing;                                     // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     HUDMaterialName;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CoUIResourcesRoot;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      TickWhileGameIsPaused;                                    // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ECoherentUIGTMSAA>                     MSAA;                                                     // 0x0061(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTSettings")); }
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x02C8 (0x03E0 - 0x0118)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0130(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x48];                                      // 0x01B8(0x0048) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x0200(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput;                                            // 0x0209(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent;                             // 0x020A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGammaCorrectedMaterial;                                  // 0x020B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings;                                 // 0x020C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles;                           // 0x022C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x19B];                                     // 0x022D(0x019B) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent;                                              // 0x03DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTWidget")); }
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* eventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
