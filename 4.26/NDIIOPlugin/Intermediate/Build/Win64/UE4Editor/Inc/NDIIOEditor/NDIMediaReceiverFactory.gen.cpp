// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaReceiverFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiverFactory() {}
// Cross Module References
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister();
	NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References
	void UNDIMediaReceiverFactory::StaticRegisterNativesUNDIMediaReceiverFactory()
	{
	}
	UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister()
	{
		return UNDIMediaReceiverFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNDIMediaReceiverFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n\x09""Factory Class used to create assets via content browser for NDI Receiver objects\n*/" },
		{ "IncludePath", "Factories/NDIMediaReceiverFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaReceiverFactory.h" },
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Receiver objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaReceiverFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams = {
		&UNDIMediaReceiverFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIMediaReceiverFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIMediaReceiverFactory, 308221748);
	template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaReceiverFactory>()
	{
		return UNDIMediaReceiverFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIMediaReceiverFactory(Z_Construct_UClass_UNDIMediaReceiverFactory, &UNDIMediaReceiverFactory::StaticClass, TEXT("/Script/NDIIOEditor"), TEXT("UNDIMediaReceiverFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaReceiverFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
