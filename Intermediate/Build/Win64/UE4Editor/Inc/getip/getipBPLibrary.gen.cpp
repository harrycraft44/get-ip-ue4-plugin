// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "getip/Public/getipBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegetipBPLibrary() {}
// Cross Module References
	GETIP_API UClass* Z_Construct_UClass_UgetipBPLibrary_NoRegister();
	GETIP_API UClass* Z_Construct_UClass_UgetipBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_getip();
// End Cross Module References
	DEFINE_FUNCTION(UgetipBPLibrary::execgetipSampleFunction)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ip);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MacAddress);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UniqueDeviceId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LoginId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UgetipBPLibrary::getipSampleFunction(Z_Param_Out_ip,Z_Param_Out_MacAddress,Z_Param_Out_UniqueDeviceId,Z_Param_Out_LoginId);
		P_NATIVE_END;
	}
	void UgetipBPLibrary::StaticRegisterNativesUgetipBPLibrary()
	{
		UClass* Class = UgetipBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getipSampleFunction", &UgetipBPLibrary::execgetipSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics
	{
		struct getipBPLibrary_eventgetipSampleFunction_Parms
		{
			FString ip;
			FString MacAddress;
			FString UniqueDeviceId;
			FString LoginId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MacAddress;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueDeviceId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(getipBPLibrary_eventgetipSampleFunction_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_MacAddress = { "MacAddress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(getipBPLibrary_eventgetipSampleFunction_Parms, MacAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_UniqueDeviceId = { "UniqueDeviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(getipBPLibrary_eventgetipSampleFunction_Parms, UniqueDeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_LoginId = { "LoginId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(getipBPLibrary_eventgetipSampleFunction_Parms, LoginId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_MacAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_UniqueDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::NewProp_LoginId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "system information" },
		{ "DisplayName", "Get Sysinfo" },
		{ "Keywords", "IP,mac,id" },
		{ "ModuleRelativePath", "Public/getipBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UgetipBPLibrary, nullptr, "getipSampleFunction", nullptr, nullptr, sizeof(getipBPLibrary_eventgetipSampleFunction_Parms), Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UgetipBPLibrary_NoRegister()
	{
		return UgetipBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UgetipBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UgetipBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_getip,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UgetipBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UgetipBPLibrary_getipSampleFunction, "getipSampleFunction" }, // 3133806222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UgetipBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "getipBPLibrary.h" },
		{ "ModuleRelativePath", "Public/getipBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UgetipBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UgetipBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UgetipBPLibrary_Statics::ClassParams = {
		&UgetipBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UgetipBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UgetipBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UgetipBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UgetipBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UgetipBPLibrary, 2119986288);
	template<> GETIP_API UClass* StaticClass<UgetipBPLibrary>()
	{
		return UgetipBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UgetipBPLibrary(Z_Construct_UClass_UgetipBPLibrary, &UgetipBPLibrary::StaticClass, TEXT("/Script/getip"), TEXT("UgetipBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UgetipBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
