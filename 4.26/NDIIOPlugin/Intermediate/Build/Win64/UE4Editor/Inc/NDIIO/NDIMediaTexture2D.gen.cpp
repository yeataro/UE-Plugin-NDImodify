// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaTexture2D() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References
	void UNDIMediaTexture2D::StaticRegisterNativesUNDIMediaTexture2D()
	{
	}
	UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister()
	{
		return UNDIMediaTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""A Texture Object used by an NDI Media Receiver object for capturing video from\n\x09""a network source\n*/" },
		{ "DisplayName", "NDI Media Texture 2D" },
		{ "HideCategories", "ImportSettings Compression Texture Adjustments Compositing LevelOfDetail Object" },
		{ "IncludePath", "Objects/Media/NDIMediaTexture2D.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaTexture2D.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A Texture Object used by an NDI Media Receiver object for capturing video from\na network source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaTexture2D_Statics::ClassParams = {
		&UNDIMediaTexture2D::StaticClass,
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
		0x049000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIMediaTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIMediaTexture2D, 1904993627);
	template<> NDIIO_API UClass* StaticClass<UNDIMediaTexture2D>()
	{
		return UNDIMediaTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIMediaTexture2D(Z_Construct_UClass_UNDIMediaTexture2D, &UNDIMediaTexture2D::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIMediaTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
