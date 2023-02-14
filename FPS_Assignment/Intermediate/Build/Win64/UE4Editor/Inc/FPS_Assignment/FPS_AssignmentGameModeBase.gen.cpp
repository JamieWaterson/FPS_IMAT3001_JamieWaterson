// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Assignment/FPS_AssignmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_AssignmentGameModeBase() {}
// Cross Module References
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_AFPS_AssignmentGameModeBase_NoRegister();
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_AFPS_AssignmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPS_Assignment();
// End Cross Module References
	void AFPS_AssignmentGameModeBase::StaticRegisterNativesAFPS_AssignmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFPS_AssignmentGameModeBase_NoRegister()
	{
		return AFPS_AssignmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPS_AssignmentGameModeBase.h" },
		{ "ModuleRelativePath", "FPS_AssignmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::NewProp_TimerCount_MetaData[] = {
		{ "Category", "FPS_AssignmentGameModeBase" },
		{ "Comment", "//Setting the timer\n" },
		{ "ModuleRelativePath", "FPS_AssignmentGameModeBase.h" },
		{ "ToolTip", "Setting the timer" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::NewProp_TimerCount = { "TimerCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPS_AssignmentGameModeBase, TimerCount), METADATA_PARAMS(Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::NewProp_TimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::NewProp_TimerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::NewProp_TimerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_AssignmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::ClassParams = {
		&AFPS_AssignmentGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_AssignmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_AssignmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_AssignmentGameModeBase, 3248142193);
	template<> FPS_ASSIGNMENT_API UClass* StaticClass<AFPS_AssignmentGameModeBase>()
	{
		return AFPS_AssignmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_AssignmentGameModeBase(Z_Construct_UClass_AFPS_AssignmentGameModeBase, &AFPS_AssignmentGameModeBase::StaticClass, TEXT("/Script/FPS_Assignment"), TEXT("AFPS_AssignmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_AssignmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
