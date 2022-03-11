// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaSoundWaveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSoundWaveFactory() {}
// Cross Module References
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSoundWaveFactory_NoRegister();
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSoundWaveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References
	void UNDIMediaSoundWaveFactory::StaticRegisterNativesUNDIMediaSoundWaveFactory()
	{
	}
	UClass* Z_Construct_UClass_UNDIMediaSoundWaveFactory_NoRegister()
	{
		return UNDIMediaSoundWaveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Factory Class used to create assets via content browser for NDI Sound Wave objects\n*/" },
		{ "IncludePath", "Factories/NDIMediaSoundWaveFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaSoundWaveFactory.h" },
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Sound Wave objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSoundWaveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::ClassParams = {
		&UNDIMediaSoundWaveFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaSoundWaveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIMediaSoundWaveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIMediaSoundWaveFactory, 3173940640);
	template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaSoundWaveFactory>()
	{
		return UNDIMediaSoundWaveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIMediaSoundWaveFactory(Z_Construct_UClass_UNDIMediaSoundWaveFactory, &UNDIMediaSoundWaveFactory::StaticClass, TEXT("/Script/NDIIOEditor"), TEXT("UNDIMediaSoundWaveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSoundWaveFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
