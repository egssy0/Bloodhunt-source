﻿// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.GetToolTipWidget_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTBP_UI_ScoutedPlayerMarker_C::GetToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.GetToolTipWidget_1");

	UTBP_UI_ScoutedPlayerMarker_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.GetColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_UI_ScoutedPlayerMarker_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.GetColorAndOpacity_1");

	UTBP_UI_ScoutedPlayerMarker_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ScoutedPlayerMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.Tick");

	UTBP_UI_ScoutedPlayerMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.OnIsOnMinimapIsSet
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnMinimap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ScoutedPlayerMarker_C::OnIsOnMinimapIsSet(bool bInIsOnMinimap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.OnIsOnMinimapIsSet");

	UTBP_UI_ScoutedPlayerMarker_C_OnIsOnMinimapIsSet_Params params;
	params.bInIsOnMinimap = bInIsOnMinimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.ExecuteUbergraph_TBP_UI_ScoutedPlayerMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ScoutedPlayerMarker_C::ExecuteUbergraph_TBP_UI_ScoutedPlayerMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ScoutedPlayerMarker.TBP_UI_ScoutedPlayerMarker_C.ExecuteUbergraph_TBP_UI_ScoutedPlayerMarker");

	UTBP_UI_ScoutedPlayerMarker_C_ExecuteUbergraph_TBP_UI_ScoutedPlayerMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
