// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Libraries/NDIReceiverPerformanceDataLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiverPerformanceDataLibrary() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
// End Cross Module References
	DEFINE_FUNCTION(UNDIReceiverPerformanceDataLibrary::execK2_NDIReceiverPerformanceData_Reset)
	{
		P_GET_STRUCT_REF(FNDIReceiverPerformanceData,Z_Param_Out_PerformanceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNDIReceiverPerformanceData*)Z_Param__Result=UNDIReceiverPerformanceDataLibrary::K2_NDIReceiverPerformanceData_Reset(Z_Param_Out_PerformanceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverPerformanceDataLibrary::execK2_Compare_Not_NDIReceiverPerformanceData)
	{
		P_GET_STRUCT(FNDIReceiverPerformanceData,Z_Param_A);
		P_GET_STRUCT(FNDIReceiverPerformanceData,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIReceiverPerformanceDataLibrary::K2_Compare_Not_NDIReceiverPerformanceData(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIReceiverPerformanceDataLibrary::execK2_Compare_NDIReceiverPerformanceData)
	{
		P_GET_STRUCT(FNDIReceiverPerformanceData,Z_Param_A);
		P_GET_STRUCT(FNDIReceiverPerformanceData,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDIReceiverPerformanceDataLibrary::K2_Compare_NDIReceiverPerformanceData(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UNDIReceiverPerformanceDataLibrary::StaticRegisterNativesUNDIReceiverPerformanceDataLibrary()
	{
		UClass* Class = UNDIReceiverPerformanceDataLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Compare_NDIReceiverPerformanceData", &UNDIReceiverPerformanceDataLibrary::execK2_Compare_NDIReceiverPerformanceData },
			{ "K2_Compare_Not_NDIReceiverPerformanceData", &UNDIReceiverPerformanceDataLibrary::execK2_Compare_Not_NDIReceiverPerformanceData },
			{ "K2_NDIReceiverPerformanceData_Reset", &UNDIReceiverPerformanceDataLibrary::execK2_NDIReceiverPerformanceData_Reset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics
	{
		struct NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms
		{
			FNDIReceiverPerformanceData A;
			FNDIReceiverPerformanceData B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms, A), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms, B), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms), &Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals (NDI Receiver Performance Data)" },
		{ "Keywords", "= == Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIReceiverPerformanceDataLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary, nullptr, "K2_Compare_NDIReceiverPerformanceData", nullptr, nullptr, sizeof(NDIReceiverPerformanceDataLibrary_eventK2_Compare_NDIReceiverPerformanceData_Parms), Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics
	{
		struct NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms
		{
			FNDIReceiverPerformanceData A;
			FNDIReceiverPerformanceData B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms, A), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms, B), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms), &Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Returns a value indicating whether the two structures are NOT comparably equal\n\n\x09\x09@param A The structure used as the source comparator\n\x09\x09@param B The structure used as the target comparator\n\x09\x09@return The resulting value of the comparator operator\n\x09*/" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equals (NDI Receiver Performance Data)" },
		{ "Keywords", "! != Not Equals" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIReceiverPerformanceDataLibrary.h" },
		{ "ToolTip", "Returns a value indicating whether the two structures are NOT comparably equal\n\n@param A The structure used as the source comparator\n@param B The structure used as the target comparator\n@return The resulting value of the comparator operator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary, nullptr, "K2_Compare_Not_NDIReceiverPerformanceData", nullptr, nullptr, sizeof(NDIReceiverPerformanceDataLibrary_eventK2_Compare_Not_NDIReceiverPerformanceData_Parms), Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics
	{
		struct NDIReceiverPerformanceDataLibrary_eventK2_NDIReceiverPerformanceData_Reset_Parms
		{
			FNDIReceiverPerformanceData PerformanceData;
			FNDIReceiverPerformanceData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::NewProp_PerformanceData = { "PerformanceData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_NDIReceiverPerformanceData_Reset_Parms, PerformanceData), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIReceiverPerformanceDataLibrary_eventK2_NDIReceiverPerformanceData_Reset_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::NewProp_PerformanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09Resets the structure's properties to their default values\n\n\x09\x09@param PerformanceData The structure to reset to the default value\n\x09\x09@return The reference to the passed in structure after the 'reset' has been completed\n\x09*/" },
		{ "DisplayName", "Reset Receiver Performance Data" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIReceiverPerformanceDataLibrary.h" },
		{ "ToolTip", "Resets the structure's properties to their default values\n\n@param PerformanceData The structure to reset to the default value\n@return The reference to the passed in structure after the 'reset' has been completed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary, nullptr, "K2_NDIReceiverPerformanceData_Reset", nullptr, nullptr, sizeof(NDIReceiverPerformanceDataLibrary_eventK2_NDIReceiverPerformanceData_Reset_Parms), Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_NoRegister()
	{
		return UNDIReceiverPerformanceDataLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_NDIReceiverPerformanceData, "K2_Compare_NDIReceiverPerformanceData" }, // 1754537322
		{ &Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_Compare_Not_NDIReceiverPerformanceData, "K2_Compare_Not_NDIReceiverPerformanceData" }, // 1631397098
		{ &Z_Construct_UFunction_UNDIReceiverPerformanceDataLibrary_K2_NDIReceiverPerformanceData_Reset, "K2_NDIReceiverPerformanceData_Reset" }, // 2600490341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Reciever Performance Data Library" },
		{ "IncludePath", "Objects/Libraries/NDIReceiverPerformanceDataLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIReceiverPerformanceDataLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIReceiverPerformanceDataLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::ClassParams = {
		&UNDIReceiverPerformanceDataLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIReceiverPerformanceDataLibrary, 3255528091);
	template<> NDIIO_API UClass* StaticClass<UNDIReceiverPerformanceDataLibrary>()
	{
		return UNDIReceiverPerformanceDataLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIReceiverPerformanceDataLibrary(Z_Construct_UClass_UNDIReceiverPerformanceDataLibrary, &UNDIReceiverPerformanceDataLibrary::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIReceiverPerformanceDataLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIReceiverPerformanceDataLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
