// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/Public/Game/BomberMan3DGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan3DGameInstance() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UBomberMan3DGameInstance_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_UBomberMan3DGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	DEFINE_FUNCTION(UBomberMan3DGameInstance::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Load();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBomberMan3DGameInstance::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBomberMan3DGameInstance::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UBomberMan3DGameInstance::StaticRegisterNativesUBomberMan3DGameInstance()
	{
		UClass* Class = UBomberMan3DGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Load", &UBomberMan3DGameInstance::execLoad },
			{ "Reset", &UBomberMan3DGameInstance::execReset },
			{ "Save", &UBomberMan3DGameInstance::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics
	{
		struct BomberMan3DGameInstance_eventLoad_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BomberMan3DGameInstance_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BomberMan3DGameInstance_eventLoad_Parms), &Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Load Game */" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameInstance.h" },
		{ "ToolTip", "Load Game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBomberMan3DGameInstance, nullptr, "Load", nullptr, nullptr, sizeof(BomberMan3DGameInstance_eventLoad_Parms), Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBomberMan3DGameInstance_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBomberMan3DGameInstance_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Reset game instance to start a new game */" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameInstance.h" },
		{ "ToolTip", "Reset game instance to start a new game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBomberMan3DGameInstance, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBomberMan3DGameInstance_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBomberMan3DGameInstance_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics
	{
		struct BomberMan3DGameInstance_eventSave_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BomberMan3DGameInstance_eventSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BomberMan3DGameInstance_eventSave_Parms), &Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Save game. */" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameInstance.h" },
		{ "ToolTip", "Save game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBomberMan3DGameInstance, nullptr, "Save", nullptr, nullptr, sizeof(BomberMan3DGameInstance_eventSave_Parms), Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBomberMan3DGameInstance_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBomberMan3DGameInstance_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBomberMan3DGameInstance_NoRegister()
	{
		return UBomberMan3DGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBomberMan3DGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UBomberMan3DGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBomberMan3DGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBomberMan3DGameInstance_Load, "Load" }, // 1957224820
		{ &Z_Construct_UFunction_UBomberMan3DGameInstance_Reset, "Reset" }, // 3094168763
		{ &Z_Construct_UFunction_UBomberMan3DGameInstance_Save, "Save" }, // 3488732003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomberMan3DGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/BomberMan3DGameInstance.h" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score_Inner = { "score", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score_MetaData[] = {
		{ "Category", "BomberMan3DGameInstance" },
		{ "ModuleRelativePath", "Public/Game/BomberMan3DGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBomberMan3DGameInstance, score), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBomberMan3DGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomberMan3DGameInstance_Statics::NewProp_score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBomberMan3DGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBomberMan3DGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBomberMan3DGameInstance_Statics::ClassParams = {
		&UBomberMan3DGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBomberMan3DGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBomberMan3DGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBomberMan3DGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBomberMan3DGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBomberMan3DGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBomberMan3DGameInstance, 3967263137);
	template<> BOMBERMAN3D_API UClass* StaticClass<UBomberMan3DGameInstance>()
	{
		return UBomberMan3DGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBomberMan3DGameInstance(Z_Construct_UClass_UBomberMan3DGameInstance, &UBomberMan3DGameInstance::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("UBomberMan3DGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBomberMan3DGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
