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

// Class Slate.ButtonWidgetStyle
// 0x0288 (0x02B8 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0288) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ButtonWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0598 (0x05C8 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0598) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.CheckBoxWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x03F8 (0x0428 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x03F8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ComboBoxWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03B0 (0x03E0 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03B0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ComboButtonWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x07D8 (0x0808 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x07D8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.EditableTextBoxWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0200 (0x0230 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0200) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.EditableTextWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D0 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01A0) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ProgressWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (0x0500 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x04D0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ScrollBarWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0258 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0228) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.ScrollBoxWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x02E8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.SpinBoxWidgetStyle")); }
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0140 (0x0170 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0140) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = 0;
		if(ptr == 0) { ptr = UObject::FindClass(_xor_("Class Slate.TextBlockWidgetStyle")); }
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
