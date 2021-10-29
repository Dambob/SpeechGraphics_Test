// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN3D_Explosion_generated_h
#error "Explosion.generated.h already included, missing '#pragma once' in Explosion.h"
#endif
#define BOMBERMAN3D_Explosion_generated_h

#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_RPC_WRAPPERS
#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosion(AExplosion&&); \
	NO_API AExplosion(const AExplosion&); \
public:


#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosion(AExplosion&&); \
	NO_API AExplosion(const AExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(AExplosion, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__collisionBox() { return STRUCT_OFFSET(AExplosion, collisionBox); }


#define BomberMan3D_Source_BomberMan3D_Explosion_h_10_PROLOG
#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_INCLASS \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_Explosion_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Explosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class AExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_Explosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
