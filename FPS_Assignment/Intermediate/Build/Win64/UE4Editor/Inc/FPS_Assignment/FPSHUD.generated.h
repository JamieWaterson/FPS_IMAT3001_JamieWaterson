// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ASSIGNMENT_FPSHUD_generated_h
#error "FPSHUD.generated.h already included, missing '#pragma once' in FPSHUD.h"
#endif
#define FPS_ASSIGNMENT_FPSHUD_generated_h

#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_SPARSE_DATA
#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_RPC_WRAPPERS
#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public:


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD)


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairTexture() { return STRUCT_OFFSET(AFPSHUD, CrosshairTexture); }


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_13_PROLOG
#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_RPC_WRAPPERS \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_INCLASS \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_INCLASS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_ASSIGNMENT_API UClass* StaticClass<class AFPSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Assignment_Source_FPS_Assignment_FPSHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
