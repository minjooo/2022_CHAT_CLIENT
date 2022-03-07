// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "client/NetworkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkManager() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_ANetworkManager_NoRegister();
	CLIENT_API UClass* Z_Construct_UClass_ANetworkManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_client();
// End Cross Module References
	DEFINE_FUNCTION(ANetworkManager::execConnectServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectServer();
		P_NATIVE_END;
	}
	void ANetworkManager::StaticRegisterNativesANetworkManager()
	{
		UClass* Class = ANetworkManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectServer", &ANetworkManager::execConnectServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "ConnectServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_ConnectServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANetworkManager_NoRegister()
	{
		return ANetworkManager::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetworkManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkManager_ConnectServer, "ConnectServer" }, // 2322657927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkManager.h" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetworkManager_Statics::ClassParams = {
		&ANetworkManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetworkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetworkManager, 922758559);
	template<> CLIENT_API UClass* StaticClass<ANetworkManager>()
	{
		return ANetworkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkManager(Z_Construct_UClass_ANetworkManager, &ANetworkManager::StaticClass, TEXT("/Script/client"), TEXT("ANetworkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
