// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/Public/Game/BomberMan3DGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan3DGameStateBase() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABomberMan3DGameStateBase_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABomberMan3DGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	void ABomberMan3DGameStateBase::StaticRegisterNativesABomberMan3DGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ABomberMan3DGameStateBase_NoRegister()
	{
		return ABomberMan3DGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ABomberMan3DGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_score_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Game state that is held for the map. Wiped when map changed.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game/BomberMan3DGameStateBase.h" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Game state that is held for the map. Wiped when map changed." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score_Inner = { "score", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score_MetaData[] = {
		{ "Category", "BomberMan3DGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan3DGameStateBase, score), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_result_MetaData[] = {
		{ "Category", "BomberMan3DGameStateBase" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan3DGameStateBase, result), METADATA_PARAMS(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::NewProp_result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan3DGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::ClassParams = {
		&ABomberMan3DGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberMan3DGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberMan3DGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberMan3DGameStateBase, 3201298018);
	template<> BOMBERMAN3D_API UClass* StaticClass<ABomberMan3DGameStateBase>()
	{
		return ABomberMan3DGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberMan3DGameStateBase(Z_Construct_UClass_ABomberMan3DGameStateBase, &ABomberMan3DGameStateBase::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("ABomberMan3DGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan3DGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
