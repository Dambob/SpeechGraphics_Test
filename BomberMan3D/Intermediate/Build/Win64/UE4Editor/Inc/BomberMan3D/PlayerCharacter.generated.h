// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN3D_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define BOMBERMAN3D_PlayerCharacter_generated_h

#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindBombExploded); \
	DECLARE_FUNCTION(execDetonateBomb); \
	DECLARE_FUNCTION(execPlaceBomb); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUpward);


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindBombExploded); \
	DECLARE_FUNCTION(execDetonateBomb); \
	DECLARE_FUNCTION(execPlaceBomb); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUpward);


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__nameplate() { return STRUCT_OFFSET(APlayerCharacter, nameplate); } \
	FORCEINLINE static uint32 __PPO__name() { return STRUCT_OFFSET(APlayerCharacter, name); } \
	FORCEINLINE static uint32 __PPO__bombCount() { return STRUCT_OFFSET(APlayerCharacter, bombCount); } \
	FORCEINLINE static uint32 __PPO__bombRange() { return STRUCT_OFFSET(APlayerCharacter, bombRange); }


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_14_PROLOG
#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_INCLASS \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
