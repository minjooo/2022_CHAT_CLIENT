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
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectServer(Z_Param_address,Z_Param_Out_port);
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
		struct NetworkManager_eventConnectServer_Parms
		{
			FString address;
			int32 port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkManager_eventConnectServer_Parms, address), METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkManager_eventConnectServer_Parms, port), METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_port_MetaData)) };
	void Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NetworkManager_eventConnectServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NetworkManager_eventConnectServer_Parms), &Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "ConnectServer", nullptr, nullptr, sizeof(NetworkManager_eventConnectServer_Parms), Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_ConnectServer_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_ANetworkManager_ConnectServer, "ConnectServer" }, // 298715243
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
	IMPLEMENT_CLASS(ANetworkManager, 46456842);
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
