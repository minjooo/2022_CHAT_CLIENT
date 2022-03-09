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
	DEFINE_FUNCTION(ANetworkManager::execSendJoin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendJoin(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkManager::execSendRoomInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRoomInfo(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkManager::execSendRoomList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRoomList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkManager::execSendUserList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendUserList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkManager::execSendLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendLogin(Z_Param_name);
		P_NATIVE_END;
	}
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
			{ "SendJoin", &ANetworkManager::execSendJoin },
			{ "SendLogin", &ANetworkManager::execSendLogin },
			{ "SendRoomInfo", &ANetworkManager::execSendRoomInfo },
			{ "SendRoomList", &ANetworkManager::execSendRoomList },
			{ "SendUserList", &ANetworkManager::execSendUserList },
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
	struct Z_Construct_UFunction_ANetworkManager_SendJoin_Statics
	{
		struct NetworkManager_eventSendJoin_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkManager_eventSendJoin_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "SendJoin", nullptr, nullptr, sizeof(NetworkManager_eventSendJoin_Parms), Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_SendJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_SendJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkManager_SendLogin_Statics
	{
		struct NetworkManager_eventSendLogin_Parms
		{
			FString name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkManager_eventSendLogin_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "SendLogin", nullptr, nullptr, sizeof(NetworkManager_eventSendLogin_Parms), Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_SendLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_SendLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics
	{
		struct NetworkManager_eventSendRoomInfo_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkManager_eventSendRoomInfo_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "SendRoomInfo", nullptr, nullptr, sizeof(NetworkManager_eventSendRoomInfo_Parms), Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_SendRoomInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_SendRoomInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "SendRoomList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_SendRoomList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_SendRoomList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkManager_SendUserList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkManager_SendUserList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_SendUserList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "SendUserList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkManager_SendUserList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_SendUserList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkManager_SendUserList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANetworkManager_SendUserList_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ANetworkManager_SendJoin, "SendJoin" }, // 2151170948
		{ &Z_Construct_UFunction_ANetworkManager_SendLogin, "SendLogin" }, // 3259408097
		{ &Z_Construct_UFunction_ANetworkManager_SendRoomInfo, "SendRoomInfo" }, // 3070282308
		{ &Z_Construct_UFunction_ANetworkManager_SendRoomList, "SendRoomList" }, // 3957776331
		{ &Z_Construct_UFunction_ANetworkManager_SendUserList, "SendUserList" }, // 1590345817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nstd::wstring MbsToWcs(std::string const& str, std::locale const& loc = std::locale())\n{\n\x09typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;\n\x09""codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);\n\x09std::mbstate_t state{ 0 };\n\x09std::vector<wchar_t> buf(str.size() + 1);\n\x09""char const* in_next = str.c_str();\n\x09wchar_t* out_next = &buf[0];\n\x09""codecvt_t::result r = codecvt.in(state, \n\x09\x09str.c_str(), str.c_str() + str.size(), in_next, \n\x09\x09&buf[0], &buf[0] + buf.size(), out_next);\n\x09return std::wstring(&buf[0]);\n}\n\nstd::string WcsToMbs(std::wstring const& str, std::locale const& loc = std::locale())\n{\n\x09typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;\n\x09""codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);\n\x09std::mbstate_t state{ 0 };\n\x09std::vector<char> buf((str.size() + 1) * codecvt.max_length());\n\x09wchar_t const* in_next = str.c_str();\n\x09""char* out_next = &buf[0];\n\x09""codecvt_t::result r = codecvt.out(state,\n\x09\x09str.c_str(), str.c_str() + str.size(),in_next, \n\x09\x09&buf[0], &buf[0] + buf.size(), out_next);\n\x09return std::string(&buf[0]);\n}\n*/" },
		{ "IncludePath", "NetworkManager.h" },
		{ "ModuleRelativePath", "NetworkManager.h" },
		{ "ToolTip", "std::wstring MbsToWcs(std::string const& str, std::locale const& loc = std::locale())\n{\n       typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;\n       codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);\n       std::mbstate_t state{ 0 };\n       std::vector<wchar_t> buf(str.size() + 1);\n       char const* in_next = str.c_str();\n       wchar_t* out_next = &buf[0];\n       codecvt_t::result r = codecvt.in(state,\n               str.c_str(), str.c_str() + str.size(), in_next,\n               &buf[0], &buf[0] + buf.size(), out_next);\n       return std::wstring(&buf[0]);\n}\n\nstd::string WcsToMbs(std::wstring const& str, std::locale const& loc = std::locale())\n{\n       typedef std::codecvt<wchar_t, char, std::mbstate_t> codecvt_t;\n       codecvt_t const& codecvt = std::use_facet<codecvt_t>(loc);\n       std::mbstate_t state{ 0 };\n       std::vector<char> buf((str.size() + 1) * codecvt.max_length());\n       wchar_t const* in_next = str.c_str();\n       char* out_next = &buf[0];\n       codecvt_t::result r = codecvt.out(state,\n               str.c_str(), str.c_str() + str.size(),in_next,\n               &buf[0], &buf[0] + buf.size(), out_next);\n       return std::string(&buf[0]);\n}" },
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
	IMPLEMENT_CLASS(ANetworkManager, 2134912613);
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
