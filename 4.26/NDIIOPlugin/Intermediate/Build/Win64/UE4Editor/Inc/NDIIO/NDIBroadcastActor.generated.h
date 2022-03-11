// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NDIIO_NDIBroadcastActor_generated_h
#error "NDIBroadcastActor.generated.h already included, missing '#pragma once' in NDIBroadcastActor.h"
#endif
#define NDIIO_NDIBroadcastActor_generated_h

#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_SPARSE_DATA
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_RPC_WRAPPERS
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANDIBroadcastActor(); \
	friend struct Z_Construct_UClass_ANDIBroadcastActor_Statics; \
public: \
	DECLARE_CLASS(ANDIBroadcastActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(ANDIBroadcastActor)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesANDIBroadcastActor(); \
	friend struct Z_Construct_UClass_ANDIBroadcastActor_Statics; \
public: \
	DECLARE_CLASS(ANDIBroadcastActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(ANDIBroadcastActor)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDIBroadcastActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDIBroadcastActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDIBroadcastActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDIBroadcastActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDIBroadcastActor(ANDIBroadcastActor&&); \
	NO_API ANDIBroadcastActor(const ANDIBroadcastActor&); \
public:


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDIBroadcastActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDIBroadcastActor(ANDIBroadcastActor&&); \
	NO_API ANDIBroadcastActor(const ANDIBroadcastActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDIBroadcastActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDIBroadcastActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDIBroadcastActor)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NDIMediaSource() { return STRUCT_OFFSET(ANDIBroadcastActor, NDIMediaSource); } \
	FORCEINLINE static uint32 __PPO__ViewportCaptureComponent() { return STRUCT_OFFSET(ANDIBroadcastActor, ViewportCaptureComponent); }


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_19_PROLOG
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_RPC_WRAPPERS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_INCLASS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIBroadcastActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class ANDIBroadcastActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIBroadcastActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
