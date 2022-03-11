// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaSoundWave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSoundWave() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	void UNDIMediaSoundWave::StaticRegisterNativesUNDIMediaSoundWave()
	{
	}
	UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister()
	{
		return UNDIMediaSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\n\x09""a network source\n*/" },
		{ "DisplayName", "NDI Media Sound Wave" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaSoundWave.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSoundWave.h" },
		{ "ToolTip", "Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\na network source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams = {
		&UNDIMediaSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIMediaSoundWave, 1921268680);
	template<> NDIIO_API UClass* StaticClass<UNDIMediaSoundWave>()
	{
		return UNDIMediaSoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIMediaSoundWave(Z_Construct_UClass_UNDIMediaSoundWave, &UNDIMediaSoundWave::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIMediaSoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSoundWave);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNDIMediaSoundWave)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
