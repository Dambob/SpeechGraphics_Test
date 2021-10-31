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
#ifdef BOMBERMAN3D_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define BOMBERMAN3D_Pickup_generated_h

#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup)


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(APickup, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__RotatingMovement() { return STRUCT_OFFSET(APickup, RotatingMovement); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(APickup, Mesh); } \
	FORCEINLINE static uint32 __PPO__type() { return STRUCT_OFFSET(APickup, type); } \
	FORCEINLINE static uint32 __PPO__value() { return STRUCT_OFFSET(APickup, value); }


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_27_PROLOG
#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_INCLASS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_Public_Actors_Pickup_h


#define FOREACH_ENUM_PICKUPTYPE(op) \
	op(None) \
	op(Range) \
	op(Speed) \
	op(BombCount) \
	op(Remote) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
