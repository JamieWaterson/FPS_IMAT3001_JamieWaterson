// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Assignment/BaseAmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAmmoPickup() {}
// Cross Module References
	FPS_ASSIGNMENT_API UEnum* Z_Construct_UEnum_FPS_Assignment_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_FPS_Assignment();
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_ABaseAmmoPickup_NoRegister();
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_ABaseAmmoPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EAmmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPS_Assignment_EAmmoType, Z_Construct_UPackage__Script_FPS_Assignment(), TEXT("EAmmoType"));
		}
		return Singleton;
	}
	template<> FPS_ASSIGNMENT_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmmoType(EAmmoType_StaticEnum, TEXT("/Script/FPS_Assignment"), TEXT("EAmmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPS_Assignment_EAmmoType_Hash() { return 171745288U; }
	UEnum* Z_Construct_UEnum_FPS_Assignment_EAmmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPS_Assignment();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmmoType"), 0, Get_Z_Construct_UEnum_FPS_Assignment_EAmmoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmmoType::E_AssaultRifle", (int64)EAmmoType::E_AssaultRifle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_AssaultRifle.DisplayName", "ASSAULT_RIFLE" },
				{ "E_AssaultRifle.Name", "EAmmoType::E_AssaultRifle" },
				{ "ModuleRelativePath", "BaseAmmoPickup.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPS_Assignment,
				nullptr,
				"EAmmoType",
				"EAmmoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABaseAmmoPickup::StaticRegisterNativesABaseAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_ABaseAmmoPickup_NoRegister()
	{
		return ABaseAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoAmount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ammoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ammoType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseAmmoPickup.h" },
		{ "ModuleRelativePath", "BaseAmmoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//creating editable Categorys within the blueprints for the ammo\n" },
		{ "ModuleRelativePath", "BaseAmmoPickup.h" },
		{ "ToolTip", "creating editable Categorys within the blueprints for the ammo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoAmount = { "ammoAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoPickup, ammoAmount), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoAmount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType = { "ammoType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoPickup, ammoType), Z_Construct_UEnum_FPS_Assignment_EAmmoType, METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoPickup_Statics::NewProp_ammoType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAmmoPickup_Statics::ClassParams = {
		&ABaseAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAmmoPickup, 3944180832);
	template<> FPS_ASSIGNMENT_API UClass* StaticClass<ABaseAmmoPickup>()
	{
		return ABaseAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAmmoPickup(Z_Construct_UClass_ABaseAmmoPickup, &ABaseAmmoPickup::StaticClass, TEXT("/Script/FPS_Assignment"), TEXT("ABaseAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
