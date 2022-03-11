// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaSender;
struct FIntPoint;
struct FFrameRate;
class UTextureRenderTarget2D;
struct FNDIBroadcastConfiguration;
#ifdef NDIIO_NDIViewportCaptureComponent_generated_h
#error "NDIViewportCaptureComponent.generated.h already included, missing '#pragma once' in NDIViewportCaptureComponent.h"
#endif
#define NDIIO_NDIViewportCaptureComponent_generated_h

#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_SPARSE_DATA
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBroadcastConfigurationChanged); \
	DECLARE_FUNCTION(execGetNumberOfConnections); \
	DECLARE_FUNCTION(execGetTallyInformation); \
	DECLARE_FUNCTION(execChangeCaptureSettings); \
	DECLARE_FUNCTION(execChangeBroadcastTexture); \
	DECLARE_FUNCTION(execChangeBroadcastConfiguration); \
	DECLARE_FUNCTION(execChangeSourceName);


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBroadcastConfigurationChanged); \
	DECLARE_FUNCTION(execGetNumberOfConnections); \
	DECLARE_FUNCTION(execGetTallyInformation); \
	DECLARE_FUNCTION(execChangeCaptureSettings); \
	DECLARE_FUNCTION(execChangeBroadcastTexture); \
	DECLARE_FUNCTION(execChangeBroadcastConfiguration); \
	DECLARE_FUNCTION(execChangeSourceName);


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIViewportCaptureComponent(); \
	friend struct Z_Construct_UClass_UNDIViewportCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIViewportCaptureComponent, UCineCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIViewportCaptureComponent)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUNDIViewportCaptureComponent(); \
	friend struct Z_Construct_UClass_UNDIViewportCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UNDIViewportCaptureComponent, UCineCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIViewportCaptureComponent)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIViewportCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIViewportCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIViewportCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIViewportCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIViewportCaptureComponent(UNDIViewportCaptureComponent&&); \
	NO_API UNDIViewportCaptureComponent(const UNDIViewportCaptureComponent&); \
public:


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIViewportCaptureComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIViewportCaptureComponent(UNDIViewportCaptureComponent&&); \
	NO_API UNDIViewportCaptureComponent(const UNDIViewportCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIViewportCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIViewportCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNDIViewportCaptureComponent)


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bOverrideBroadcastSettings() { return STRUCT_OFFSET(UNDIViewportCaptureComponent, bOverrideBroadcastSettings); } \
	FORCEINLINE static uint32 __PPO__CaptureSize() { return STRUCT_OFFSET(UNDIViewportCaptureComponent, CaptureSize); } \
	FORCEINLINE static uint32 __PPO__CaptureRate() { return STRUCT_OFFSET(UNDIViewportCaptureComponent, CaptureRate); } \
	FORCEINLINE static uint32 __PPO__NDIMediaSource() { return STRUCT_OFFSET(UNDIViewportCaptureComponent, NDIMediaSource); }


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_28_PROLOG
#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_RPC_WRAPPERS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_INCLASS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_SPARSE_DATA \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIViewportCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIViewportCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NDIIOPlugin_Source_Core_Public_Components_NDIViewportCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
