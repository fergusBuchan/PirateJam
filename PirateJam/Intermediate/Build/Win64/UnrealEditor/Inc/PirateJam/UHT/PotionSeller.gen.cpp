// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateJam/PotionSeller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotionSeller() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PIRATEJAM_API UClass* Z_Construct_UClass_APotionSeller();
PIRATEJAM_API UClass* Z_Construct_UClass_APotionSeller_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateJam();
// End Cross Module References

// Begin Class APotionSeller
void APotionSeller::StaticRegisterNativesAPotionSeller()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APotionSeller);
UClass* Z_Construct_UClass_APotionSeller_NoRegister()
{
	return APotionSeller::StaticClass();
}
struct Z_Construct_UClass_APotionSeller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PotionSeller.h" },
		{ "ModuleRelativePath", "PotionSeller.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotionSeller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APotionSeller_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotionSeller_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APotionSeller_Statics::ClassParams = {
	&APotionSeller::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APotionSeller_Statics::Class_MetaDataParams), Z_Construct_UClass_APotionSeller_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APotionSeller()
{
	if (!Z_Registration_Info_UClass_APotionSeller.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APotionSeller.OuterSingleton, Z_Construct_UClass_APotionSeller_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APotionSeller.OuterSingleton;
}
template<> PIRATEJAM_API UClass* StaticClass<APotionSeller>()
{
	return APotionSeller::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APotionSeller);
APotionSeller::~APotionSeller() {}
// End Class APotionSeller

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionSeller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APotionSeller, APotionSeller::StaticClass, TEXT("APotionSeller"), &Z_Registration_Info_UClass_APotionSeller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APotionSeller), 2822664176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionSeller_h_3476643439(TEXT("/Script/PirateJam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionSeller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionSeller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
