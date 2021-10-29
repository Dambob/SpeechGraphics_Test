// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/Explosion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosion() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_AExplosion_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_AExplosion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AExplosion::StaticRegisterNativesAExplosion()
	{
	}
	UClass* Z_Construct_UClass_AExplosion_NoRegister()
	{
		return AExplosion::StaticClass();
	}
	struct Z_Construct_UClass_AExplosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Explosion.h" },
		{ "ModuleRelativePath", "Explosion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosion_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "/**\n\x09* Root component of the Block\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Explosion.h" },
		{ "ToolTip", "Root component of the Block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosion_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosion, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosion_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosion_Statics::NewProp_DefaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosion_Statics::NewProp_collisionBox_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/**\n\x09* Contains the mesh and material of this block\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Explosion.h" },
		{ "ToolTip", "Contains the mesh and material of this block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosion_Statics::NewProp_collisionBox = { "collisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosion, collisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosion_Statics::NewProp_collisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosion_Statics::NewProp_collisionBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosion_Statics::NewProp_DefaultSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosion_Statics::NewProp_collisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosion_Statics::ClassParams = {
		&AExplosion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosion, 3354299667);
	template<> BOMBERMAN3D_API UClass* StaticClass<AExplosion>()
	{
		return AExplosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosion(Z_Construct_UClass_AExplosion, &AExplosion::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("AExplosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
