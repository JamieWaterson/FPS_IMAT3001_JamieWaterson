// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Assignment/BaseAmmoReload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAmmoReload() {}
// Cross Module References
	FPS_ASSIGNMENT_API UEnum* Z_Construct_UEnum_FPS_Assignment_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_FPS_Assignment();
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_ABaseAmmoReload_NoRegister();
	FPS_ASSIGNMENT_API UClass* Z_Construct_UClass_ABaseAmmoReload();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPS_Assignment_EWeaponType, Z_Construct_UPackage__Script_FPS_Assignment(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> FPS_ASSIGNMENT_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/FPS_Assignment"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPS_Assignment_EWeaponType_Hash() { return 355179381U; }
	UEnum* Z_Construct_UEnum_FPS_Assignment_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPS_Assignment();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_FPS_Assignment_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::E_AssaultRifle", (int64)EWeaponType::E_AssaultRifle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_AssaultRifle.DisplayName", "Assault_Rifle" },
				{ "E_AssaultRifle.Name", "EWeaponType::E_AssaultRifle" },
				{ "ModuleRelativePath", "BaseAmmoReload.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPS_Assignment,
				nullptr,
				"EWeaponType",
				"EWeaponType",
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
	void ABaseAmmoReload::StaticRegisterNativesABaseAmmoReload()
	{
	}
	UClass* Z_Construct_UClass_ABaseAmmoReload_NoRegister()
	{
		return ABaseAmmoReload::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAmmoReload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxMagSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxMagSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_weaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAmmoReload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseAmmoReload.h" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxTotalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Allowing the properties to be editable within the blueprints to easily change values\n" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
		{ "ToolTip", "Allowing the properties to be editable within the blueprints to easily change values" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxTotalAmmo = { "maxTotalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, maxTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxMagSize_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxMagSize = { "maxMagSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, maxMagSize), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxMagSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxMagSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_magAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_magAmmo = { "magAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, magAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_magAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_magAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, reloadTime), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_reloadTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmoReload.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmoReload, weaponType), Z_Construct_UEnum_FPS_Assignment_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAmmoReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxTotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_maxMagSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_totalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_magAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmoReload_Statics::NewProp_weaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAmmoReload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAmmoReload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAmmoReload_Statics::ClassParams = {
		&ABaseAmmoReload::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAmmoReload_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAmmoReload_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmoReload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAmmoReload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAmmoReload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAmmoReload, 462703117);
	template<> FPS_ASSIGNMENT_API UClass* StaticClass<ABaseAmmoReload>()
	{
		return ABaseAmmoReload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAmmoReload(Z_Construct_UClass_ABaseAmmoReload, &ABaseAmmoReload::StaticClass, TEXT("/Script/FPS_Assignment"), TEXT("ABaseAmmoReload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAmmoReload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
