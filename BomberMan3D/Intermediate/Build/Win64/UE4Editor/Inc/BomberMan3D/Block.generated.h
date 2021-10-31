// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN3D_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define BOMBERMAN3D_Block_generated_h

#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_RPC_WRAPPERS
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(ABlock, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ABlock, BlockMesh); }


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_9_PROLOG
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_INCLASS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_Public_Actors_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
