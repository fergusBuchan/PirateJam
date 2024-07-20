// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIRATEJAM_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define PIRATEJAM_PlayerHUD_generated_h

#define FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUD(); \
	friend struct Z_Construct_UClass_UPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PirateJam"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUD)


#define FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerHUD(UPlayerHUD&&); \
	UPlayerHUD(const UPlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUD) \
	NO_API virtual ~UPlayerHUD();


#define FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_12_PROLOG
#define FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIRATEJAM_API UClass* StaticClass<class UPlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_PirateJam_PirateJam_PirateJam_Source_PirateJam_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
