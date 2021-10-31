// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/Public/Actors/BlockDestructible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockDestructible() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABlockDestructible_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABlockDestructible();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	void ABlockDestructible::StaticRegisterNativesABlockDestructible()
	{
	}
	UClass* Z_Construct_UClass_ABlockDestructible_NoRegister()
	{
		return ABlockDestructible::StaticClass();
	}
	struct Z_Construct_UClass_ABlockDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DropClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DropClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dropChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dropChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockDestructible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/BlockDestructible.h" },
		{ "ModuleRelativePath", "Public/Actors/BlockDestructible.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses_Inner = { "DropClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickups" },
		{ "Comment", "// Reference BP Asset in the Editor\n//TSubclassOf<APickup> pickupBPClass;\n" },
		{ "ModuleRelativePath", "Public/Actors/BlockDestructible.h" },
		{ "ToolTip", "Reference BP Asset in the Editor\nTSubclassOf<APickup> pickupBPClass;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses = { "DropClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockDestructible, DropClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockDestructible_Statics::NewProp_dropChance_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "Public/Actors/BlockDestructible.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockDestructible_Statics::NewProp_dropChance = { "dropChance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockDestructible, dropChance), METADATA_PARAMS(Z_Construct_UClass_ABlockDestructible_Statics::NewProp_dropChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockDestructible_Statics::NewProp_dropChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockDestructible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockDestructible_Statics::NewProp_DropClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockDestructible_Statics::NewProp_dropChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockDestructible_Statics::ClassParams = {
		&ABlockDestructible::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockDestructible_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockDestructible_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockDestructible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockDestructible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockDestructible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockDestructible, 3675756326);
	template<> BOMBERMAN3D_API UClass* StaticClass<ABlockDestructible>()
	{
		return ABlockDestructible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockDestructible(Z_Construct_UClass_ABlockDestructible, &ABlockDestructible::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("ABlockDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
