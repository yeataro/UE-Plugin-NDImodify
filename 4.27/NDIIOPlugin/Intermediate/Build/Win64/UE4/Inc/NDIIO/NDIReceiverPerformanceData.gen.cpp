// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIReceiverPerformanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiverPerformanceData() {}
// Cross Module References
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
class UScriptStruct* FNDIReceiverPerformanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NDIIO_API uint32 Get_Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIReceiverPerformanceData"), sizeof(FNDIReceiverPerformanceData), Get_Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Hash());
	}
	return Singleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIReceiverPerformanceData>()
{
	return FNDIReceiverPerformanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNDIReceiverPerformanceData(FNDIReceiverPerformanceData::StaticStruct, TEXT("/Script/NDIIO"), TEXT("NDIReceiverPerformanceData"), false, nullptr, nullptr);
static struct FScriptStruct_NDIIO_StaticRegisterNativesFNDIReceiverPerformanceData
{
	FScriptStruct_NDIIO_StaticRegisterNativesFNDIReceiverPerformanceData()
	{
		UScriptStruct::DeferCppStructOps<FNDIReceiverPerformanceData>(FName(TEXT("NDIReceiverPerformanceData")));
	}
} ScriptStruct_NDIIO_StaticRegisterNativesFNDIReceiverPerformanceData;
	struct Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_AudioFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedVideoFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DroppedVideoFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedAudioFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DroppedAudioFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedMetadataFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DroppedMetadataFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetadataFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MetadataFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_VideoFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A structure holding data allowing you to determine the current performance levels of the receiver with the\n\x09""ability to detect whether frames has been dropped\n*/" },
		{ "DisplayName", "NDI Receiver Performance Data" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "A structure holding data allowing you to determine the current performance levels of the receiver with the\nability to detect whether frames has been dropped" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIReceiverPerformanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of audio frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Audio Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of audio frames received from the NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames = { "AudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, AudioFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of video frames dropped in transit from an NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Video Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of video frames dropped in transit from an NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames = { "DroppedVideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedVideoFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of audio frames dropped in transit from the NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Audio Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of audio frames dropped in transit from the NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames = { "DroppedAudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedAudioFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of metadata frames dropped in transit from the NDI sender\n\x09*/" },
		{ "DisplayName", "Dropped Metadata Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of metadata frames dropped in transit from the NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames = { "DroppedMetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, DroppedMetadataFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of metadata frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Metadata Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of metadata frames received from the NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames = { "MetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, MetadataFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/**\n\x09\x09The number of video frames received from the NDI sender\n\x09*/" },
		{ "DisplayName", "Video Frames" },
		{ "ModuleRelativePath", "Public/Structures/NDIReceiverPerformanceData.h" },
		{ "ToolTip", "The number of video frames received from the NDI sender" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames = { "VideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIReceiverPerformanceData, VideoFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_AudioFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_MetadataFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::NewProp_VideoFrames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
		nullptr,
		&NewStructOps,
		"NDIReceiverPerformanceData",
		sizeof(FNDIReceiverPerformanceData),
		alignof(FNDIReceiverPerformanceData),
		Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NDIIO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NDIReceiverPerformanceData"), sizeof(FNDIReceiverPerformanceData), Get_Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNDIReceiverPerformanceData_Hash() { return 1548994229U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
