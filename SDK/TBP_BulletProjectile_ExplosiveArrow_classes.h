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

// BlueprintGeneratedClass TBP_BulletProjectile_ExplosiveArrow.TBP_BulletProjectile_ExplosiveArrow_C
// 0x000B (FullSize[0x03E0] - InheritedSize[0x03D5])
class ATBP_BulletProjectile_ExplosiveArrow_C : public ATBP_BulletProjectile_C
{
public:
	unsigned char                                      UnknownData_RAJ8[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BulletProjectile_ExplosiveArrow.TBP_BulletProjectile_ExplosiveArrow_C");
		return ptr;
	}



	void HandleParticlesSpawning(const struct FVector& Impact_Point, const struct FRotator& Rotation, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type, class UPrimitiveComponent* Potential_Scene_Component);
	void ExecuteUbergraph_TBP_BulletProjectile_ExplosiveArrow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
