// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/DMUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMUserWidget() {}
// Cross Module References
	BOMBERMAN3D_API UFunction* Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UDMUserWidget_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UDMUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics
	{
		struct _Script_BomberMan3D_eventOnOwningActorChanged_Parms
		{
			AActor* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BomberMan3D_eventOnOwningActorChanged_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declare event type for the owning actor being changed\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Declare event type for the owning actor being changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BomberMan3D, nullptr, "OnOwningActorChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_BomberMan3D_eventOnOwningActorChanged_Parms), Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDMUserWidget::execSetOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_newOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwner(Z_Param_newOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMUserWidget::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMUserWidget::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void UDMUserWidget::StaticRegisterNativesUDMUserWidget()
	{
		UClass* Class = UDMUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &UDMUserWidget::execGetName },
			{ "GetOwner", &UDMUserWidget::execGetOwner },
			{ "SetOwner", &UDMUserWidget::execSetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMUserWidget_GetName_Statics
	{
		struct DMUserWidget_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMUserWidget_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DMUserWidget_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMUserWidget_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMUserWidget_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMUserWidget_GetName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return the name of this widget\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Return the name of this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMUserWidget_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMUserWidget, nullptr, "GetName", nullptr, nullptr, sizeof(DMUserWidget_eventGetName_Parms), Z_Construct_UFunction_UDMUserWidget_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMUserWidget_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMUserWidget_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDMUserWidget_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics
	{
		struct DMUserWidget_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DMUserWidget_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return the owning actor of this widget\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Return the owning actor of this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMUserWidget, nullptr, "GetOwner", nullptr, nullptr, sizeof(DMUserWidget_eventGetOwner_Parms), Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMUserWidget_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDMUserWidget_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics
	{
		struct DMUserWidget_eventSetOwner_Parms
		{
			AActor* newOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::NewProp_newOwner = { "newOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DMUserWidget_eventSetOwner_Parms, newOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::NewProp_newOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set the owning actor of this widget\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Set the owning actor of this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMUserWidget, nullptr, "SetOwner", nullptr, nullptr, sizeof(DMUserWidget_eventSetOwner_Parms), Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMUserWidget_SetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDMUserWidget_SetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDMUserWidget_NoRegister()
	{
		return UDMUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDMUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOwningActorChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOwningActorChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_widgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMUserWidget_GetName, "GetName" }, // 1397289125
		{ &Z_Construct_UFunction_UDMUserWidget_GetOwner, "GetOwner" }, // 234602619
		{ &Z_Construct_UFunction_UDMUserWidget_SetOwner, "SetOwner" }, // 2431709501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for UMG Widgets that belong to a single Actor in the world via a WidgetComponent, eg. for 3D health-bars, nameplate, interaction tooltip.\n" },
		{ "IncludePath", "DMUserWidget.h" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Base class for UMG Widgets that belong to a single Actor in the world via a WidgetComponent, eg. for 3D health-bars, nameplate, interaction tooltip." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMUserWidget_Statics::NewProp_OnOwningActorChanged_MetaData[] = {
		{ "Category", "DM|Widget" },
		{ "Comment", "// Event triggered when owning actor is changed\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Event triggered when owning actor is changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMUserWidget_Statics::NewProp_OnOwningActorChanged = { "OnOwningActorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMUserWidget, OnOwningActorChanged), Z_Construct_UDelegateFunction_BomberMan3D_OnOwningActorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_OnOwningActorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_OnOwningActorChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMUserWidget_Statics::NewProp_widgetName_MetaData[] = {
		{ "Category", "DM|Widget" },
		{ "Comment", "// Widget name variable\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Widget name variable" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMUserWidget_Statics::NewProp_widgetName = { "widgetName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMUserWidget, widgetName), METADATA_PARAMS(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_widgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_widgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMUserWidget_Statics::NewProp_owner_MetaData[] = {
		{ "Category", "DM|Widget" },
		{ "Comment", "// Owning actor variable\n" },
		{ "ModuleRelativePath", "DMUserWidget.h" },
		{ "ToolTip", "Owning actor variable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMUserWidget_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDMUserWidget, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMUserWidget_Statics::NewProp_owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMUserWidget_Statics::NewProp_OnOwningActorChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMUserWidget_Statics::NewProp_widgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMUserWidget_Statics::NewProp_owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDMUserWidget_Statics::ClassParams = {
		&UDMUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMUserWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDMUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDMUserWidget, 1567449266);
	template<> BOMBERMAN3D_API UClass* StaticClass<UDMUserWidget>()
	{
		return UDMUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDMUserWidget(Z_Construct_UClass_UDMUserWidget, &UDMUserWidget::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("UDMUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
