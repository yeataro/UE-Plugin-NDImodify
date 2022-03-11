// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaTexture2D;
#ifdef NDIIO_NDIMediaReceiver_generated_h
#error "NDIMediaReceiver.generated.h already included, missing '#pragma once' in NDIMediaReceiver.h"
#endif
#define NDIIO_NDIMediaReceiver_generated_h

#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_SPARSE_DATA
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeVideoTexture);


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeVideoTexture);


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaReceiver(); \
	friend struct Z_Construct_UClass_UNDIMediaReceiver_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaReceiver, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaReceiver)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUNDIMediaReceiver(); \
	friend struct Z_Construct_UClass_UNDIMediaReceiver_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaReceiver, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaReceiver)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaReceiver(UNDIMediaReceiver&&); \
	NO_API UNDIMediaReceiver(const UNDIMediaReceiver&); \
public:


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaReceiver(UNDIMediaReceiver&&); \
	NO_API UNDIMediaReceiver(const UNDIMediaReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaReceiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaReceiver)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Timecode() { return STRUCT_OFFSET(UNDIMediaReceiver, Timecode); } \
	FORCEINLINE static uint32 __PPO__FrameRate() { return STRUCT_OFFSET(UNDIMediaReceiver, FrameRate); } \
	FORCEINLINE static uint32 __PPO__bSyncTimecodeToSource() { return STRUCT_OFFSET(UNDIMediaReceiver, bSyncTimecodeToSource); } \
	FORCEINLINE static uint32 __PPO__bPerformsRGBtoLinear() { return STRUCT_OFFSET(UNDIMediaReceiver, bPerformsRGBtoLinear); } \
	FORCEINLINE static uint32 __PPO__ConnectionInformation() { return STRUCT_OFFSET(UNDIMediaReceiver, ConnectionInformation); } \
	FORCEINLINE static uint32 __PPO__PerformanceData() { return STRUCT_OFFSET(UNDIMediaReceiver, PerformanceData); } \
	FORCEINLINE static uint32 __PPO__VideoTexture() { return STRUCT_OFFSET(UNDIMediaReceiver, VideoTexture); }


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_28_PROLOG
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_RPC_WRAPPERS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_INCLASS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIMediaReceiver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIMediaReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
