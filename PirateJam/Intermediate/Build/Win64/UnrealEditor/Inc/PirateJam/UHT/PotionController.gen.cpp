// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateJam/PotionController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotionController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PIRATEJAM_API UClass* Z_Construct_UClass_APotionController();
PIRATEJAM_API UClass* Z_Construct_UClass_APotionController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateJam();
// End Cross Module References

// Begin Class APotionController
void APotionController::StaticRegisterNativesAPotionController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APotionController);
UClass* Z_Construct_UClass_APotionController_NoRegister()
{
	return APotionController::StaticClass();
}
struct Z_Construct_UClass_APotionController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PotionController.h" },
		{ "ModuleRelativePath", "PotionController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotionController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APotionController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotionController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APotionController_Statics::ClassParams = {
	&APotionController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APotionController_Statics::Class_MetaDataParams), Z_Construct_UClass_APotionController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APotionController()
{
	if (!Z_Registration_Info_UClass_APotionController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APotionController.OuterSingleton, Z_Construct_UClass_APotionController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APotionController.OuterSingleton;
}
template<> PIRATEJAM_API UClass* StaticClass<APotionController>()
{
	return APotionController::StaticClass();
}
APotionController::APotionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APotionController);
APotionController::~APotionController() {}
// End Class APotionController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APotionController, APotionController::StaticClass, TEXT("APotionController"), &Z_Registration_Info_UClass_APotionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APotionController), 2843886433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionController_h_2269879781(TEXT("/Script/PirateJam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PotionController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
