// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ASSIGNMENT_BaseAmmoReload_generated_h
#error "BaseAmmoReload.generated.h already included, missing '#pragma once' in BaseAmmoReload.h"
#endif
#define FPS_ASSIGNMENT_BaseAmmoReload_generated_h

#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_SPARSE_DATA
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_RPC_WRAPPERS
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAmmoReload(); \
	friend struct Z_Construct_UClass_ABaseAmmoReload_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmoReload, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmoReload)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABaseAmmoReload(); \
	friend struct Z_Construct_UClass_ABaseAmmoReload_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmoReload, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmoReload)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAmmoReload(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAmmoReload) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmoReload); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmoReload); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmoReload(ABaseAmmoReload&&); \
	NO_API ABaseAmmoReload(const ABaseAmmoReload&); \
public:


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmoReload(ABaseAmmoReload&&); \
	NO_API ABaseAmmoReload(const ABaseAmmoReload&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmoReload); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmoReload); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAmmoReload)


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_PRIVATE_PROPERTY_OFFSET
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_15_PROLOG
#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_RPC_WRAPPERS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_INCLASS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_INCLASS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_ASSIGNMENT_API UClass* StaticClass<class ABaseAmmoReload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Assignment_Source_FPS_Assignment_BaseAmmoReload_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::E_AssaultRifle) 

enum class EWeaponType : uint8;
template<> FPS_ASSIGNMENT_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
