// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_ASSIGNMENT_FPSProjectile_generated_h
#error "FPSProjectile.generated.h already included, missing '#pragma once' in FPSProjectile.h"
#endif
#define FPS_ASSIGNMENT_FPSProjectile_generated_h

#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_SPARSE_DATA
#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public:


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectile)


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_11_PROLOG
#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_RPC_WRAPPERS \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_INCLASS \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_ASSIGNMENT_API UClass* StaticClass<class AFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Assignment_Source_FPS_Assignment_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
