// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ASSIGNMENT_BaseAmmoPickup_generated_h
#error "BaseAmmoPickup.generated.h already included, missing '#pragma once' in BaseAmmoPickup.h"
#endif
#define FPS_ASSIGNMENT_BaseAmmoPickup_generated_h

#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_SPARSE_DATA
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_RPC_WRAPPERS
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAmmoPickup(); \
	friend struct Z_Construct_UClass_ABaseAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmoPickup)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseAmmoPickup(); \
	friend struct Z_Construct_UClass_ABaseAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmoPickup)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAmmoPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmoPickup(ABaseAmmoPickup&&); \
	NO_API ABaseAmmoPickup(const ABaseAmmoPickup&); \
public:


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmoPickup(ABaseAmmoPickup&&); \
	NO_API ABaseAmmoPickup(const ABaseAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAmmoPickup)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_PRIVATE_PROPERTY_OFFSET
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_16_PROLOG
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_RPC_WRAPPERS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_INCLASS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_INCLASS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_ASSIGNMENT_API UClass* StaticClass<class ABaseAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Assignment_Source_FPS_Assignment_BaseAmmoPickup_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::E_AssaultRifle) 

enum class EAmmoType : uint8;
template<> FPS_ASSIGNMENT_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
