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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemPreview
struct UTBP_UI_OutfitItemListener_C_OnItemPreview_Params
{
	struct FTigerVendorStoreCategoryItem               InItem;                                                    // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemUnhovered
struct UTBP_UI_OutfitItemListener_C_OnItemUnhovered_Params
{
};

// Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemSelected
struct UTBP_UI_OutfitItemListener_C_OnItemSelected_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UTBP_UI_OutfitItem_C*                        OutfitItem;                                                // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemHovered
struct UTBP_UI_OutfitItemListener_C_OnItemHovered_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
