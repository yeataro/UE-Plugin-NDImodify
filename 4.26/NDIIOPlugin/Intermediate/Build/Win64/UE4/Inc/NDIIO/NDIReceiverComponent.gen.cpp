// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiverComponent() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverComponent_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNDIReceiverComponent::execGetPerformanceData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNDIReceiverPerformanceData*)Z_Param__Result=P_THIS->GetPerformanceData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentConnectionInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNDIConnectionInformation*)Z_Param__Result=P_THIS->GetCurrentConnectionInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetCurrentTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetCurrentFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execShutdownReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShutdownReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execSendTallyInformation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsOnPreview);
		P_GET_UBOOL_REF(Z_Param_Out_IsOnProgram);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTallyInformation(Z_Param_Out_IsOnPreview,Z_Param_Out_IsOnProgram);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execSendMetadataFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMetadataFrame(Z_Param_metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execChangeConnection)
	{
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_InConnectionInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeConnection(Z_Param_Out_InConnectionInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execStartReceiver)
	{
		P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_InConnectionInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartReceiver(Z_Param_Out_InConnectionInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentMetadata();
		P_NATIVE_END;
	}
	void UNDIReceiverComponent::StaticRegisterNativesUNDIReceiverComponent()
	{
		UClass* Class = UNDIReceiverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeConnection", &UNDIReceiverComponent::execChangeConnection },
			{ "GetCurrentConnectionInformation", &UNDIReceiverComponent::execGetCurrentConnectionInformation },
			{ "GetCurrentFrameRate", &UNDIReceiverComponent::execGetCurrentFrameRate },
			{ "GetCurrentMetadata", &UNDIReceiverComponent::execGetCurrentMetadata },
			{ "GetCurrentTimecode", &UNDIReceiverComponent::execGetCurrentTimecode },
			{ "GetPerformanceData", &UNDIReceiverComponent::execGetPerformanceData },
			{ "SendMetadataFrame", &UNDIReceiverComponent::execSendMetadataFrame },
			{ "SendTallyInformation", &UNDIReceiverComponent::execSendTallyInformation },
			{ "ShutdownReceiver", &UNDIReceiverComponent::execShutdownReceiver },
			{ "StartReceiver", &UNDIReceiverComponent::execStartReceiver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics
	{
		struct NDIReceiverComponent_eventChangeConnection_Parms
		{
			FNDIConnectionInformation InConnectionInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConnectionInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConnectionInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation = { "InConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventChangeConnection_Parms, InConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempt to change the connection for which to get audio, video, and metadata frame from\n\x09*/" },
		{ "DisplayName", "Change Connection" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Attempt to change the connection for which to get audio, video, and metadata frame from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "ChangeConnection", nullptr, nullptr, sizeof(NDIReceiverComponent_eventChangeConnection_Parms), Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics
	{
		struct NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms
		{
			FNDIConnectionInformation ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns the current connection information of the connected source\n\x09*/" },
		{ "DisplayName", "Get Current Connection Information" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Returns the current connection information of the connected source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentConnectionInformation", nullptr, nullptr, sizeof(NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct NDIReceiverComponent_eventGetCurrentFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns the current framerate of the connected source\n\x09*/" },
		{ "DisplayName", "Get Current Frame Rate" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Returns the current framerate of the connected source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentFrameRate", nullptr, nullptr, sizeof(NDIReceiverComponent_eventGetCurrentFrameRate_Parms), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics
	{
		struct NDIReceiverComponent_eventGetCurrentMetadata_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentMetadata_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "Get Current Metadata" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentMetadata", nullptr, nullptr, sizeof(NDIReceiverComponent_eventGetCurrentMetadata_Parms), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct NDIReceiverComponent_eventGetCurrentTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns the current timecode of the connected source\n\x09*/" },
		{ "DisplayName", "Get Current Timecode" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Returns the current timecode of the connected source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentTimecode", nullptr, nullptr, sizeof(NDIReceiverComponent_eventGetCurrentTimecode_Parms), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics
	{
		struct NDIReceiverComponent_eventGetPerformanceData_Parms
		{
			FNDIReceiverPerformanceData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetPerformanceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns the current performance data of the receiver while connected to the source\n\x09*/" },
		{ "DisplayName", "Get Performance Data" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Returns the current performance data of the receiver while connected to the source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetPerformanceData", nullptr, nullptr, sizeof(NDIReceiverComponent_eventGetPerformanceData_Parms), Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics
	{
		struct NDIReceiverComponent_eventSendMetadataFrame_Parms
		{
			FString metadata;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventSendMetadataFrame_Parms, metadata), METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09This will add a metadata frame and return immediately, having scheduled the frame asynchronously\n\x09*/" },
		{ "DisplayName", "Send Metadata Frame" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "This will add a metadata frame and return immediately, having scheduled the frame asynchronously" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "SendMetadataFrame", nullptr, nullptr, sizeof(NDIReceiverComponent_eventSendMetadataFrame_Parms), Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics
	{
		struct NDIReceiverComponent_eventSendTallyInformation_Parms
		{
			bool IsOnPreview;
			bool IsOnProgram;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOnPreview_MetaData[];
#endif
		static void NewProp_IsOnPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOnProgram_MetaData[];
#endif
		static void NewProp_IsOnProgram_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnProgram;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_SetBit(void* Obj)
	{
		((NDIReceiverComponent_eventSendTallyInformation_Parms*)Obj)->IsOnPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview = { "IsOnPreview", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventSendTallyInformation_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_SetBit(void* Obj)
	{
		((NDIReceiverComponent_eventSendTallyInformation_Parms*)Obj)->IsOnProgram = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram = { "IsOnProgram", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventSendTallyInformation_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09This will setup the up-stream tally notifications. If no streams are connected, it will automatically send\n\x09\x09the tally state upon connection\n\x09*/" },
		{ "DisplayName", "Send Tally Information" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "This will setup the up-stream tally notifications. If no streams are connected, it will automatically send\nthe tally state upon connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "SendTallyInformation", nullptr, nullptr, sizeof(NDIReceiverComponent_eventSendTallyInformation_Parms), Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Attempts to stop receiving audio, video, and metadata frame from the connected source\n\x09*/" },
		{ "DisplayName", "Shutdown Receiver" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Attempts to stop receiving audio, video, and metadata frame from the connected source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "ShutdownReceiver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics
	{
		struct NDIReceiverComponent_eventStartReceiver_Parms
		{
			FNDIConnectionInformation InConnectionInformation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConnectionInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConnectionInformation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation = { "InConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverComponent_eventStartReceiver_Parms, InConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation_MetaData)) };
	void Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIReceiverComponent_eventStartReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventStartReceiver_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09""Begin receiving NDI audio, video, and metadata frames\n\x09*/" },
		{ "DisplayName", "Start Receiver" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "Begin receiving NDI audio, video, and metadata frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "StartReceiver", nullptr, nullptr, sizeof(NDIReceiverComponent_eventStartReceiver_Parms), Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNDIReceiverComponent_NoRegister()
	{
		return UNDIReceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNDIReceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIReceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIReceiverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection, "ChangeConnection" }, // 3533068996
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation, "GetCurrentConnectionInformation" }, // 2143180892
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate, "GetCurrentFrameRate" }, // 3710848313
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentMetadata, "GetCurrentMetadata" }, // 3402970907
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode, "GetCurrentTimecode" }, // 3400697291
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData, "GetPerformanceData" }, // 4117877094
		{ &Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame, "SendMetadataFrame" }, // 2133495132
		{ &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation, "SendTallyInformation" }, // 824159083
		{ &Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver, "ShutdownReceiver" }, // 384074704
		{ &Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver, "StartReceiver" }, // 3948222463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIReceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09""A component used to receive audio, video, and metadata over NDI\n*/" },
		{ "DisplayName", "NDI Receiver Component" },
		{ "IncludePath", "Components/NDIReceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "A component used to receive audio, video, and metadata over NDI" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Properties" },
		{ "Comment", "/** The NDI Media Receiver representing the configuration of the network source to receive audio, video, and\n\x09 * metadata from */" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
		{ "ToolTip", "The NDI Media Receiver representing the configuration of the network source to receive audio, video, and\nmetadata from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIReceiverComponent, NDIMediaSource), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIReceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIReceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIReceiverComponent_Statics::ClassParams = {
		&UNDIReceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIReceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIReceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIReceiverComponent, 1771575430);
	template<> NDIIO_API UClass* StaticClass<UNDIReceiverComponent>()
	{
		return UNDIReceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIReceiverComponent(Z_Construct_UClass_UNDIReceiverComponent, &UNDIReceiverComponent::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIReceiverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIReceiverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
