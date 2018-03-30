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

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UCoherentUIGTJSEvent*                        eventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
struct UCoherentUIGTBaseComponent_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
{
	bool                                               show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
{
	float                                              Threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
struct UCoherentUIGTBaseComponent_Resize_Params
{
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
struct UCoherentUIGTBaseComponent_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
struct UCoherentUIGTBaseComponent_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
struct UCoherentUIGTBaseComponent_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
struct UCoherentUIGTBaseComponent_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
struct UCoherentUIGTBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
struct UCoherentUIGTBaseComponent_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
struct UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
struct UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
struct UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UObject*                                     Model;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
struct UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
{
	class UCoherentUIGTBaseComponent*                  BaseComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0008
	int                                                Width;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	int                                                Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
struct UCoherentUIGTJSEvent_AddStructArg_Params
{
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
struct UCoherentUIGTJSEvent_AddString_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
struct UCoherentUIGTJSEvent_AddObject_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
struct UCoherentUIGTJSEvent_AddInt32_Params
{
	int                                                integer;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
struct UCoherentUIGTJSEvent_AddFloat_Params
{
	float                                              fl;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
struct UCoherentUIGTJSEvent_AddByte_Params
{
	unsigned char                                      byte;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
struct UCoherentUIGTJSEvent_AddBool_Params
{
	bool                                               B;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
struct UCoherentUIGTJSEvent_AddArray_Params
{
	TArray<int>                                        Array;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
struct UCoherentUIGTJSPayload_ReadObject_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
struct UCoherentUIGTJSPayload_GetString_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
struct UCoherentUIGTJSPayload_GetNumber_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
struct UCoherentUIGTJSPayload_GetInt32_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
struct UCoherentUIGTJSPayload_GetBool_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0004
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params
{
	class UCoherentUIGTBaseComponent*                  Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
	struct FString                                     EventName;                                                // (CPF_Parm, CPF_ZeroConstructor) 0008
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
struct UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FCoherentUIGTLoadingScreenSettings          Settings;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
struct UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
struct UCoherentUIGTBlueprintFunctionLibrary_AddString_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	struct FString                                     Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
struct UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	class UObject*                                     Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
struct UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	int                                                Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
struct UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	float                                              Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
struct UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	unsigned char                                      Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
struct UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	bool                                               Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
struct UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<int>                                        Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
struct UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TArray<int>                                        Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm) 0008
	int                                                ArrayType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
struct ACoherentUIGTGameHUD_SetupUIGTView_Params
{
	struct FString                                     PageUrl;                                                  // (CPF_Parm, CPF_ZeroConstructor) 0000
	bool                                               bIsTransparent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
	float                                              ClickThroughAlphaThreshold;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0014
	float                                              AnimationFrameDefer;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0018
	bool                                               bDelayedUpdate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 001C
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
struct ACoherentUIGTInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<EGTInputWidgetLineTraceMode>           Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
{
	class UCoherentUIGTBaseComponent*                  NewFocusedView;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
{
	bool                                               FocusUI;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
struct ACoherentUIGTInputActor_Initialize_Params
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
	TEnumAsByte<ETextureAddress>                       AddressMode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0001
	TEnumAsByte<EGTInputWidgetRaycastQuality>          RaycastQuality;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0002
	int                                                UVChannel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0004
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
{
	bool                                               bAllow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
struct UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
struct UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
struct UCoherentUIGTWidget_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UCoherentUIGTJSEvent*                        eventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
struct UCoherentUIGTWidget_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
struct UCoherentUIGTWidget_ShowPaintRects_Params
{
	bool                                               show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
{
	float                                              Threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
struct UCoherentUIGTWidget_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
struct UCoherentUIGTWidget_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
struct UCoherentUIGTWidget_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
struct UCoherentUIGTWidget_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
struct UCoherentUIGTWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
struct UCoherentUIGTWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
struct UCoherentUIGTWidget_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
struct UCoherentUIGTWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
struct UCoherentUIGTWidget_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
struct UCoherentUIGTWidget_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
struct UCoherentUIGTWidget_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData) 0000
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
struct UCoherentUIGTWidget_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
struct UCoherentUIGTWidget_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor) 0000
	class UObject*                                     Model;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData) 0010
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
struct UCoherentUIGTWidget_BeginDebugFrameSave_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
