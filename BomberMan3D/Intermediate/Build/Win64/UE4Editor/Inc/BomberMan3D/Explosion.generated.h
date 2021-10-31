// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOMBERMAN3D_Explosion_generated_h
#error "Explosion.generated.h already included, missing '#pragma once' in Explosion.h"
#endif
#define BOMBERMAN3D_Explosion_generated_h

#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_STANDARD_CONSTRUCTORS \
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


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosion(AExplosion&&); \
	NO_API AExplosion(const AExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosion)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(AExplosion, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AExplosion, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__SmokeFX() { return STRUCT_OFFSET(AExplosion, SmokeFX); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AExplosion, Speed); } \
	FORCEINLINE static uint32 __PPO__Range() { return STRUCT_OFFSET(AExplosion, Range); }


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_14_PROLOG
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_INCLASS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class AExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_Public_Actors_Explosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
