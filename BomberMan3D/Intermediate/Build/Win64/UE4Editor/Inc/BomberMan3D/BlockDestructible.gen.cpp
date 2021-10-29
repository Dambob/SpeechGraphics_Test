// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/BlockDestructible.h"
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
		{ "IncludePath", "BlockDestructible.h" },
		{ "ModuleRelativePath", "BlockDestructible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockDestructible_Statics::ClassParams = {
		&ABlockDestructible::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ABlockDestructible, 3451179465);
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
