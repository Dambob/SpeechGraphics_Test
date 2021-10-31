// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/DMActorWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMActorWidgetComponent() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UDMActorWidgetComponent_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UDMActorWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	void UDMActorWidgetComponent::StaticRegisterNativesUDMActorWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UDMActorWidgetComponent_NoRegister()
	{
		return UDMActorWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMActorWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMActorWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMActorWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DM" },
		{ "Comment", "/*\n\x09""Extension of the WidgetComponent to make it easy to have owning Actor context to the Widget. Commonly used to display health bars, names, and interaction panels above Actors.\n\x09""Automatically calls SetOwningActor on the widget if the correct type of widget is used (ActorAttachWidget)\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "DMActorWidgetComponent.h" },
		{ "ModuleRelativePath", "DMActorWidgetComponent.h" },
		{ "ToolTip", "Extension of the WidgetComponent to make it easy to have owning Actor context to the Widget. Commonly used to display health bars, names, and interaction panels above Actors.\nAutomatically calls SetOwningActor on the widget if the correct type of widget is used (ActorAttachWidget)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMActorWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMActorWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDMActorWidgetComponent_Statics::ClassParams = {
		&UDMActorWidgetComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMActorWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMActorWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMActorWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDMActorWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDMActorWidgetComponent, 3940912819);
	template<> BOMBERMAN3D_API UClass* StaticClass<UDMActorWidgetComponent>()
	{
		return UDMActorWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDMActorWidgetComponent(Z_Construct_UClass_UDMActorWidgetComponent, &UDMActorWidgetComponent::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("UDMActorWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMActorWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
