// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan3D/BomberMan3DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan3DGameModeBase() {}
// Cross Module References
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABomberMan3DGameModeBase_NoRegister();
	BOMBERMAN3D_API UClass* Z_Construct_UClass_ABomberMan3DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan3D();
// End Cross Module References
	DEFINE_FUNCTION(ABomberMan3DGameModeBase::execGetRemainingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABomberMan3DGameModeBase::execSetScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_newScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScore(Z_Param_playerID,Z_Param_newScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABomberMan3DGameModeBase::execGetScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScore(Z_Param_playerID);
		P_NATIVE_END;
	}
	void ABomberMan3DGameModeBase::StaticRegisterNativesABomberMan3DGameModeBase()
	{
		UClass* Class = ABomberMan3DGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRemainingTime", &ABomberMan3DGameModeBase::execGetRemainingTime },
			{ "GetScore", &ABomberMan3DGameModeBase::execGetScore },
			{ "SetScore", &ABomberMan3DGameModeBase::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics
	{
		struct BomberMan3DGameModeBase_eventGetRemainingTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan3DGameModeBase_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "Comment", "/* Return the player score based on ID. */" },
		{ "ModuleRelativePath", "BomberMan3DGameModeBase.h" },
		{ "ToolTip", "Return the player score based on ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan3DGameModeBase, nullptr, "GetRemainingTime", nullptr, nullptr, sizeof(BomberMan3DGameModeBase_eventGetRemainingTime_Parms), Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics
	{
		struct BomberMan3DGameModeBase_eventGetScore_Parms
		{
			int32 playerID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::NewProp_playerID = { "playerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan3DGameModeBase_eventGetScore_Parms, playerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan3DGameModeBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::NewProp_playerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/* Return the player score based on ID. */" },
		{ "ModuleRelativePath", "BomberMan3DGameModeBase.h" },
		{ "ToolTip", "Return the player score based on ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan3DGameModeBase, nullptr, "GetScore", nullptr, nullptr, sizeof(BomberMan3DGameModeBase_eventGetScore_Parms), Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics
	{
		struct BomberMan3DGameModeBase_eventSetScore_Parms
		{
			int32 playerID;
			int32 newScore;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::NewProp_playerID = { "playerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan3DGameModeBase_eventSetScore_Parms, playerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::NewProp_newScore = { "newScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan3DGameModeBase_eventSetScore_Parms, newScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::NewProp_playerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::NewProp_newScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/* Set the player score based on ID. */" },
		{ "ModuleRelativePath", "BomberMan3DGameModeBase.h" },
		{ "ToolTip", "Set the player score based on ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan3DGameModeBase, nullptr, "SetScore", nullptr, nullptr, sizeof(BomberMan3DGameModeBase_eventSetScore_Parms), Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomberMan3DGameModeBase_NoRegister()
	{
		return ABomberMan3DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABomberMan3DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roundTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan3DGameModeBase_GetRemainingTime, "GetRemainingTime" }, // 1320339498
		{ &Z_Construct_UFunction_ABomberMan3DGameModeBase_GetScore, "GetScore" }, // 393965031
		{ &Z_Construct_UFunction_ABomberMan3DGameModeBase_SetScore, "SetScore" }, // 941023620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BomberMan3DGameModeBase.h" },
		{ "ModuleRelativePath", "BomberMan3DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::NewProp_roundTime_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BomberMan3DGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::NewProp_roundTime = { "roundTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan3DGameModeBase, roundTime), METADATA_PARAMS(Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::NewProp_roundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::NewProp_roundTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::NewProp_roundTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan3DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::ClassParams = {
		&ABomberMan3DGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberMan3DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberMan3DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberMan3DGameModeBase, 1295164785);
	template<> BOMBERMAN3D_API UClass* StaticClass<ABomberMan3DGameModeBase>()
	{
		return ABomberMan3DGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberMan3DGameModeBase(Z_Construct_UClass_ABomberMan3DGameModeBase, &ABomberMan3DGameModeBase::StaticClass, TEXT("/Script/BomberMan3D"), TEXT("ABomberMan3DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan3DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
