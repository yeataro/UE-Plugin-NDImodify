// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Enumerations/NDISourceBandwidth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDISourceBandwidth() {}
// Cross Module References
	NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	static UEnum* ENDISourceBandwidth_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth, Z_Construct_UPackage__Script_NDIIO(), TEXT("ENDISourceBandwidth"));
		}
		return Singleton;
	}
	template<> NDIIO_API UEnum* StaticEnum<ENDISourceBandwidth>()
	{
		return ENDISourceBandwidth_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISourceBandwidth(ENDISourceBandwidth_StaticEnum, TEXT("/Script/NDIIO"), TEXT("ENDISourceBandwidth"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Hash() { return 1023468499U; }
	UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NDIIO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISourceBandwidth"), 0, Get_Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISourceBandwidth::MetadataOnly", (int64)ENDISourceBandwidth::MetadataOnly },
				{ "ENDISourceBandwidth::AudioOnly", (int64)ENDISourceBandwidth::AudioOnly },
				{ "ENDISourceBandwidth::Lowest", (int64)ENDISourceBandwidth::Lowest },
				{ "ENDISourceBandwidth::Highest", (int64)ENDISourceBandwidth::Highest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioOnly.Comment", "/** Receive metadata, audio */" },
				{ "AudioOnly.DisplayName", "Audio Only" },
				{ "AudioOnly.Name", "ENDISourceBandwidth::AudioOnly" },
				{ "AudioOnly.ToolTip", "Receive metadata, audio" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n\x09Receiver Bandwidth modes\n*/" },
				{ "DisplayName", "NDI Source Bandwidth" },
				{ "Highest.Comment", "// Receive metadata, audio, video at full resolution.\n" },
				{ "Highest.DisplayName", "Highest" },
				{ "Highest.Name", "ENDISourceBandwidth::Highest" },
				{ "Highest.ToolTip", "Receive metadata, audio, video at full resolution." },
				{ "Lowest.Comment", "/** Receive metadata, audio, video at a lower bandwidth and resolution. */" },
				{ "Lowest.DisplayName", "Lowest" },
				{ "Lowest.Name", "ENDISourceBandwidth::Lowest" },
				{ "Lowest.ToolTip", "Receive metadata, audio, video at a lower bandwidth and resolution." },
				{ "MetadataOnly.Comment", "/** Receive metadata. */" },
				{ "MetadataOnly.DisplayName", "Metadata Only" },
				{ "MetadataOnly.Name", "ENDISourceBandwidth::MetadataOnly" },
				{ "MetadataOnly.ToolTip", "Receive metadata." },
				{ "ModuleRelativePath", "Public/Enumerations/NDISourceBandwidth.h" },
				{ "ToolTip", "Receiver Bandwidth modes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NDIIO,
				nullptr,
				"ENDISourceBandwidth",
				"ENDISourceBandwidth",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
