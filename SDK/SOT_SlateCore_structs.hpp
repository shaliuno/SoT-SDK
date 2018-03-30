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

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0088
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x000C(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x001C(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSlateColor                                 TintColor;                                                // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x005A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	class UObject*                                     ResourceObject;                                           // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDynamicallyLoaded;                                     // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasUObject;                                              // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FBox2D                                      UVRegion;                                                 // 0x0074(0x0014) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.InputEvent
// 0x0028
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0050 (0x0078 - 0x0028)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x0280 (0x0288 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0248(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0260(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03A8 (0x03B0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0290(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0318(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x03F0 (0x03F8 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03B0) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03B8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x03D0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       SelectionChangeSound;                                     // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0038
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Size;                                                     // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FontName;                                                 // 0x002C(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x01F8 (0x0200 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0040(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0068(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x00F0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0178(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x02B0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0338(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x03C0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0448(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07D0 (0x07D8 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0238(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0270(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0298(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x02C0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0308(0x04D0) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0138 (0x0140 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0040(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0080(0x0028) (CPF_Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00B8(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x02B0(0x0028)
	struct FMargin                                     TextPadding;                                              // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UFontBulkData*                               BulkDataPtr;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<unsigned char>                              FontData;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0030) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0028
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              ScalingFactor;                                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x0F40 (0x0F48 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0290(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0518(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x07A0(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0A28(0x0140) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0B68(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0BF0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0C78(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0D00(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0D88(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0DB0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0E38(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0EC0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x0680 (0x0688 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x0288) (CPF_Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0290(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0318(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x03A0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0428(0x0088) (CPF_Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x04B0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0538(0x0088) (CPF_Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x05C0(0x0088) (CPF_Edit)
	struct FMargin                                     TabPadding;                                               // 0x0648(0x0010) (CPF_Edit)
	float                                              OverlapWidth;                                             // 0x0658(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	struct FSlateColor                                 FlashColor;                                               // 0x0660(0x0028) (CPF_Edit)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x0088) (CPF_Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0090(0x0088) (CPF_Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0118(0x0088) (CPF_Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x01A0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0228(0x0088) (CPF_Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x02B0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0338(0x0088) (CPF_Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x03C0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0448(0x0088) (CPF_Edit)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x04D0) (CPF_Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x04D8(0x04D0) (CPF_Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x09A8(0x0118) (CPF_Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0AC0(0x0088) (CPF_Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0B48(0x0028) (CPF_Edit)
};

// ScriptStruct SlateCore.TableRowStyle
// 0x06B0 (0x06B8 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x02B0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0338(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x03C0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0448(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x04D0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x04F8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0520(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x05A8(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0630(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0088) (CPF_Edit)
	int16_t                                            Baseline;                                                 // 0x0090(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0220 (0x0228 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x04D0 (0x04D8 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0228) (CPF_Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0230(0x0088) (CPF_Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x02B8(0x0088) (CPF_Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0340(0x0088) (CPF_Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x03C8(0x0088) (CPF_Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x0450(0x0088) (CPF_Edit)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A48 (0x0A50 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x07D8) (CPF_Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x07E0(0x0038) (CPF_Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0818(0x0088) (CPF_Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x08A0(0x0088) (CPF_Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0928(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x09B0(0x0088) (CPF_Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0A38(0x0010) (CPF_Edit)
	unsigned char                                      bLeftAlignButtons;                                        // 0x0A48(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0110 (0x0118 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x0088) (CPF_Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0090(0x0088) (CPF_Edit)
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0918 (0x0920 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x07D8) (CPF_Edit, CPF_BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x07E0(0x0140) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x0288) (CPF_Edit, CPF_BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0290(0x0140) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0590 (0x0598 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x0098(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0120(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x01A8(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0230(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x02B8(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0340(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x03C8(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0450(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x04D8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x04E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0510(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0538(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0550(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0568(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0030 - 0x0028)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0058 - 0x0028)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0020 (0x0048 - 0x0028)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0030 - 0x0028)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0048 - 0x0028)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0050 - 0x0048)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
