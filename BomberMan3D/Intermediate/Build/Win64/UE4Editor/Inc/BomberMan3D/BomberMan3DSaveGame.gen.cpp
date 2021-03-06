// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/Public/Game/BomberMan3DSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan3DSaveGame() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UBomberMan3DSaveGame_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UBomberMan3DSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	void UBomberMan3DSaveGame::StaticRegisterNativesUBomberMan3DSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UBomberMan3DSaveGame_NoRegister()
	{
		return UBomberMan3DSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UBomberMan3DSaveGame_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBomberMan3DSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomberMan3DSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Save game file contents.\n */" },
		{ "IncludePath", "Game/BomberMan3DSaveGame.h" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DSaveGame.h" },
		{ "ToolTip", "Save game file contents." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score_Inner = { "score", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score_MetaData[] = {
		{ "Category", "BomberMan3DSaveGame" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBomberMan3DSaveGame, score), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBomberMan3DSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomberMan3DSaveGame_Statics::NewProp_score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBomberMan3DSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBomberMan3DSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBomberMan3DSaveGame_Statics::ClassParams = {
		&UBomberMan3DSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBomberMan3DSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBomberMan3DSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBomberMan3DSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBomberMan3DSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBomberMan3DSaveGame, 2673900578);
	template<> BOMBERMAN3D_API UClass* StaticClass<UBomberMan3DSaveGame>()
	{
		return UBomberMan3DSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBomberMan3DSaveGame(Z_Construct_UClass_UBomberMan3DSaveGame, &UBomberMan3DSaveGame::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("UBomberMan3DSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBomberMan3DSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
