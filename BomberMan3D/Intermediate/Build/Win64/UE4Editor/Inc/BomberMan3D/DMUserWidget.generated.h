// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BOMBERMAN3D_DMUserWidget_generated_h
#error "DMUserWidget.generated.h already included, missing '#pragma once' in DMUserWidget.h"
#endif
#define BOMBERMAN3D_DMUserWidget_generated_h

#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_10_DELEGATE \
struct _Script_BomberMan3D_eventOnOwningActorChanged_Parms \
{ \
	AActor* NewOwner; \
}; \
static inline void FOnOwningActorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOwningActorChanged, AActor* NewOwner) \
{ \
	_Script_BomberMan3D_eventOnOwningActorChanged_Parms Parms; \
	Parms.NewOwner=NewOwner; \
	OnOwningActorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_SPARSE_DATA
#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetName);


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetName);


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMUserWidget(); \
	friend struct Z_Construct_UClass_UDMUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDMUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(UDMUserWidget)


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDMUserWidget(); \
	friend struct Z_Construct_UClass_UDMUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDMUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BomberMan3D"), NO_API) \
	DECLARE_SERIALIZER(UDMUserWidget)


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMUserWidget(UDMUserWidget&&); \
	NO_API UDMUserWidget(const UDMUserWidget&); \
public:


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMUserWidget(UDMUserWidget&&); \
	NO_API UDMUserWidget(const UDMUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMUserWidget)


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__widgetName() { return STRUCT_OFFSET(UDMUserWidget, widgetName); } \
	FORCEINLINE static uint32 __PPO__owner() { return STRUCT_OFFSET(UDMUserWidget, owner); }


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_13_PROLOG
#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_RPC_WRAPPERS \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_INCLASS \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_SPARSE_DATA \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	BomberMan3D_Source_BomberMan3D_DMUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN3D_API UClass* StaticClass<class UDMUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan3D_Source_BomberMan3D_DMUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
