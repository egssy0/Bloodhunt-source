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

// BlueprintGeneratedClass TBP_RangedWeapon_SMG.TBP_RangedWeapon_SMG_C
// 0x0000 (FullSize[0x0201] - InheritedSize[0x0201])
class UTBP_RangedWeapon_SMG_C : public UTBP_RangedWeapon_SMG_Master_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RangedWeapon_SMG.TBP_RangedWeapon_SMG_C");
		return ptr;
	}



	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
