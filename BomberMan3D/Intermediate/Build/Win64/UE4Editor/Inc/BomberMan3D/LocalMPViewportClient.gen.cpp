// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/LocalMPViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMPViewportClient() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ULocalMPViewportClient_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ULocalMPViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	void ULocalMPViewportClient::StaticRegisterNativesULocalMPViewportClient()
	{
	}
	UClass* Z_Construct_UClass_ULocalMPViewportClient_NoRegister()
	{
		return ULocalMPViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_ULocalMPViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalMPViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalMPViewportClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""Allow local multiplayer to occur on single keyboard\n*/" },
		{ "IncludePath", "LocalMPViewportClient.h" },
		{ "ModuleRelativePath", "LocalMPViewportClient.h" },
		{ "ToolTip", "Allow local multiplayer to occur on single keyboard" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalMPViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalMPViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalMPViewportClient_Statics::ClassParams = {
		&ULocalMPViewportClient::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULocalMPViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalMPViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalMPViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalMPViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalMPViewportClient, 4124316663);
	template<> BOMBERMAN3D_API UClass* StaticClass<ULocalMPViewportClient>()
	{
		return ULocalMPViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalMPViewportClient(Z_Construct_UClass_ULocalMPViewportClient, &ULocalMPViewportClient::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("ULocalMPViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMPViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
