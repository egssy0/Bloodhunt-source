﻿#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_EmoteWheel.TBP_UI_EmoteWheel_C
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UTBP_UI_EmoteWheel_C : public UTigerEmoteWheelWidget
{
public:
	class UTBP_UI_WheelInterface_C*                    WheelInterface;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_EmoteWheel.TBP_UI_EmoteWheel_C");
		return ptr;
	}



	class UTigerWheelInterfaceWidget* GetInterfaceWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
