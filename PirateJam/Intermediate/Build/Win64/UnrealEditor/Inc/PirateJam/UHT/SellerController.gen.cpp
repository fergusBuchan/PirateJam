// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateJam/SellerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSellerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PIRATEJAM_API UClass* Z_Construct_UClass_ASellerController();
PIRATEJAM_API UClass* Z_Construct_UClass_ASellerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateJam();
// End Cross Module References

// Begin Class ASellerController
void ASellerController::StaticRegisterNativesASellerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASellerController);
UClass* Z_Construct_UClass_ASellerController_NoRegister()
{
	return ASellerController::StaticClass();
}
struct Z_Construct_UClass_ASellerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  sellercontroller handles player inputs and interfaces with the UI\n *  this is just so that the main potionSeller class is less cluttered\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SellerController.h" },
		{ "ModuleRelativePath", "SellerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sellercontroller handles player inputs and interfaces with the UI\nthis is just so that the main potionSeller class is less cluttered" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASellerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASellerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASellerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASellerController_Statics::ClassParams = {
	&ASellerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASellerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASellerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASellerController()
{
	if (!Z_Registration_Info_UClass_ASellerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASellerController.OuterSingleton, Z_Construct_UClass_ASellerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASellerController.OuterSingleton;
}
template<> PIRATEJAM_API UClass* StaticClass<ASellerController>()
{
	return ASellerController::StaticClass();
}
ASellerController::ASellerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASellerController);
ASellerController::~ASellerController() {}
// End Class ASellerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_SellerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASellerController, ASellerController::StaticClass, TEXT("ASellerController"), &Z_Registration_Info_UClass_ASellerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASellerController), 3603396657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_SellerController_h_2728146203(TEXT("/Script/PirateJam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_SellerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_SellerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
