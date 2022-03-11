// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIBroadcastConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastConfiguration() {}
// Cross Module References
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
class UScriptStruct* FNDIBroadcastConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NDIIO_API uint32 Get_Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIBroadcastConfiguration"), sizeof(FNDIBroadcastConfiguration), Get_Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Hash());
	}
	return Singleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIBroadcastConfiguration>()
{
	return FNDIBroadcastConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNDIBroadcastConfiguration(FNDIBroadcastConfiguration::StaticStruct, TEXT("/Script/NDIIO"), TEXT("NDIBroadcastConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_NDIIO_StaticRegisterNativesFNDIBroadcastConfiguration
{
	FScriptStruct_NDIIO_StaticRegisterNativesFNDIBroadcastConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FNDIBroadcastConfiguration>(FName(TEXT("NDIBroadcastConfiguration")));
	}
} ScriptStruct_NDIIO_StaticRegisterNativesFNDIBroadcastConfiguration;
	struct Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Describes essential properties used for modifying the broadcast configuration of an Sender object\n*/" },
		{ "DisplayName", "NDI Broadcast Configuration" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Describes essential properties used for modifying the broadcast configuration of an Sender object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIBroadcastConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Describes the output frame size while sending video frame over NDI */" },
		{ "DisplayName", "Frame Size" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Describes the output frame size while sending video frame over NDI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIBroadcastConfiguration, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Broadcast Settings" },
		{ "Comment", "/** Represents the desired number of frames (per second) for video to be sent over NDI */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Structures/NDIBroadcastConfiguration.h" },
		{ "ToolTip", "Represents the desired number of frames (per second) for video to be sent over NDI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIBroadcastConfiguration, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::NewProp_FrameRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		&NewStructOps,
		"NDIBroadcastConfiguration",
		sizeof(FNDIBroadcastConfiguration),
		alignof(FNDIBroadcastConfiguration),
		Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NDIIO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NDIBroadcastConfiguration"), sizeof(FNDIBroadcastConfiguration), Get_Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNDIBroadcastConfiguration_Hash() { return 4178498627U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
