// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAmmoType : uint8;
#ifdef FPS_ASSIGNMENT_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPS_ASSIGNMENT_FPSCharacter_generated_h

#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_SPARSE_DATA
#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execAddAmmo);


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execAddAmmo);


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacter*>(this); }


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacter*>(this); }


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET
#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_22_PROLOG
#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_RPC_WRAPPERS \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_INCLASS \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_SPARSE_DATA \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_ASSIGNMENT_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Assignment_Source_FPS_Assignment_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
