// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Actors/NDIReceiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiveActor() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_ANDIReceiveActor_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_ANDIReceiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANDIReceiveActor::execUpdateAudioPlayback)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAudioPlayback(Z_Param_Out_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANDIReceiveActor::execSetFrameWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFrameWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameWidth(Z_Param_Out_InFrameWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANDIReceiveActor::execSetFrameHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFrameHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameHeight(Z_Param_Out_InFrameHeight);
		P_NATIVE_END;
	}
	void ANDIReceiveActor::StaticRegisterNativesANDIReceiveActor()
	{
		UClass* Class = ANDIReceiveActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFrameHeight", &ANDIReceiveActor::execSetFrameHeight },
			{ "SetFrameWidth", &ANDIReceiveActor::execSetFrameWidth },
			{ "UpdateAudioPlayback", &ANDIReceiveActor::execUpdateAudioPlayback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics
	{
		struct NDIReceiveActor_eventSetFrameHeight_Parms
		{
			float InFrameHeight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrameHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight = { "InFrameHeight", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiveActor_eventSetFrameHeight_Parms, InFrameHeight), METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "SetFrameHeight", nullptr, nullptr, sizeof(NDIReceiveActor_eventSetFrameHeight_Parms), Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics
	{
		struct NDIReceiveActor_eventSetFrameWidth_Parms
		{
			float InFrameWidth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrameWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth = { "InFrameWidth", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiveActor_eventSetFrameWidth_Parms, InFrameWidth), METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "SetFrameWidth", nullptr, nullptr, sizeof(NDIReceiveActor_eventSetFrameWidth_Parms), Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics
	{
		struct NDIReceiveActor_eventUpdateAudioPlayback_Parms
		{
			bool Enabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((NDIReceiveActor_eventUpdateAudioPlayback_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiveActor_eventUpdateAudioPlayback_Parms), &Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "UpdateAudioPlayback", nullptr, nullptr, sizeof(NDIReceiveActor_eventUpdateAudioPlayback_Parms), Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANDIReceiveActor_NoRegister()
	{
		return ANDIReceiveActor::StaticClass();
	}
	struct Z_Construct_UClass_ANDIReceiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAudioPlayback_MetaData[];
#endif
		static void NewProp_bEnableAudioPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAudioPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioSoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANDIReceiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANDIReceiveActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight, "SetFrameHeight" }, // 2469066667
		{ &Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth, "SetFrameWidth" }, // 2907469068
		{ &Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback, "UpdateAudioPlayback" }, // 1850214383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::Class_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Receive Actor" },
		{ "HideCategories", "Activation Rendering AssetUserData Material Attachment Actor Input Cooking LOD Sound StaticMesh Materials" },
		{ "IncludePath", "Actors/NDIReceiveActor.h" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "SetFrameHeight" },
		{ "Category", "NDI IO" },
		{ "Comment", "/** The desired height of the frame in cm, represented in the virtual scene */" },
		{ "DisplayName", "Frame Height" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The desired height of the frame in cm, represented in the virtual scene" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0040000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, FrameHeight), METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "SetFrameWidth" },
		{ "Category", "NDI IO" },
		{ "Comment", "/** The desired width of the frame in cm, represented in the virtual scene */" },
		{ "DisplayName", "Frame Width" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The desired width of the frame in cm, represented in the virtual scene" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0040000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, FrameWidth), METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "UpdateAudioPlayback" },
		{ "Category", "NDI IO|Media" },
		{ "Comment", "/**\n\x09\x09Indicates that this object should play the audio.\n\n\x09\x09*Note Audio played by this object will be played as a UI sound, and won't normalize the audio\n\x09\x09\x09  if the same 'MediaSource' object is being used as the audio source on multiple receivers.\n\x09*/" },
		{ "DisplayName", "Enable Audio Playback?" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "Indicates that this object should play the audio.\n\nNote Audio played by this object will be played as a UI sound, and won't normalize the audio\n          if the same 'MediaSource' object is being used as the audio source on multiple receivers." },
	};
#endif
	void Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_SetBit(void* Obj)
	{
		((ANDIReceiveActor*)Obj)->bEnableAudioPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback = { "bEnableAudioPlayback", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANDIReceiveActor), &Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO|Media" },
		{ "Comment", "/** The Receiver object used to get Audio, Video, and Metadata from on the network */" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The Receiver object used to get Audio, Video, and Metadata from on the network" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, NDIMediaSource), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent_MetaData[] = {
		{ "Comment", "/** The component used to display the video received from the Media Sender object */" },
		{ "DisplayName", "Video Mesh Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The component used to display the video received from the Media Sender object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent = { "VideoMeshComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, VideoMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Comment", "/** The component used to play the audio from the NDI Media source */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The component used to play the audio from the NDI Media source" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave_MetaData[] = {
		{ "Comment", "/** The audio sound wave which receives the audio from the NDI Media source */" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The audio sound wave which receives the audio from the NDI Media source" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave = { "AudioSoundWave", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, AudioSoundWave), Z_Construct_UClass_UNDIMediaSoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance_MetaData[] = {
		{ "Comment", "/** The dynamic material to apply to the plane object of this actor */" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
		{ "ToolTip", "The dynamic material to apply to the plane object of this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance = { "VideoMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDIReceiveActor, VideoMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANDIReceiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANDIReceiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANDIReceiveActor_Statics::ClassParams = {
		&ANDIReceiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANDIReceiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANDIReceiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANDIReceiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANDIReceiveActor, 1865989321);
	template<> NDIIO_API UClass* StaticClass<ANDIReceiveActor>()
	{
		return ANDIReceiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANDIReceiveActor(Z_Construct_UClass_ANDIReceiveActor, &ANDIReceiveActor::StaticClass, TEXT("/Script/NDIIO"), TEXT("ANDIReceiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANDIReceiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
