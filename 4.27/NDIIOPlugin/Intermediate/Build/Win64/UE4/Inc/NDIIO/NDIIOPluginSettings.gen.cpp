// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/NDIIOPluginSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIIOPluginSettings() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIIOPluginSettings_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIIOPluginSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void UNDIIOPluginSettings::StaticRegisterNativesUNDIIOPluginSettings()
	{
	}
	UClass* Z_Construct_UClass_UNDIIOPluginSettings_NoRegister()
	{
		return UNDIIOPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNDIIOPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Decription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationStreamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationStreamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BroadcastRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredFrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredFrameSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIIOPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Settings for the Broadcasting of the Active Viewport configurable in the running editor of the application\n*/" },
		{ "IncludePath", "NDIIOPluginSettings.h" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "ToolTip", "Settings for the Broadcasting of the Active Viewport configurable in the running editor of the application" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription = { "Decription", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIIOPluginSettings, Decription), METADATA_PARAMS(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** The default name to use when broadcasting the Currently Active Viewport over NDI. */" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "ToolTip", "The default name to use when broadcasting the Currently Active Viewport over NDI." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName = { "ApplicationStreamName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIIOPluginSettings, ApplicationStreamName), METADATA_PARAMS(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** Indicates the preferred frame rate to broadcast the Currently Active Viewport over NDI. */" },
		{ "DisplayName", "Broadcast Rate" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "ToolTip", "Indicates the preferred frame rate to broadcast the Currently Active Viewport over NDI." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate = { "BroadcastRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIIOPluginSettings, BroadcastRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** Indicates the preferred frame size to broadcast the Currently Active Viewport over NDI. */" },
		{ "DisplayName", "Preferred Broadcast Framesize" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "ToolTip", "Indicates the preferred frame size to broadcast the Currently Active Viewport over NDI." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize = { "PreferredFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIIOPluginSettings, PreferredFrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIIOPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIIOPluginSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::ClassParams = {
		&UNDIIOPluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIIOPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIIOPluginSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIIOPluginSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIIOPluginSettings, 2564158265);
	template<> NDIIO_API UClass* StaticClass<UNDIIOPluginSettings>()
	{
		return UNDIIOPluginSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIIOPluginSettings(Z_Construct_UClass_UNDIIOPluginSettings, &UNDIIOPluginSettings::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIIOPluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIIOPluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
