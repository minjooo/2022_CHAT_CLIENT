// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "client/MessageHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageHandler() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_AMessageHandler_NoRegister();
	CLIENT_API UClass* Z_Construct_UClass_AMessageHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_client();
// End Cross Module References
	static FName NAME_AMessageHandler_LoginFail = FName(TEXT("LoginFail"));
	void AMessageHandler::LoginFail()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMessageHandler_LoginFail),NULL);
	}
	static FName NAME_AMessageHandler_OnChat = FName(TEXT("OnChat"));
	void AMessageHandler::OnChat(const FString& msg)
	{
		MessageHandler_eventOnChat_Parms Parms;
		Parms.msg=msg;
		ProcessEvent(FindFunctionChecked(NAME_AMessageHandler_OnChat),&Parms);
	}
	static FName NAME_AMessageHandler_RoomList = FName(TEXT("RoomList"));
	void AMessageHandler::RoomList(TArray<FString> const& msg)
	{
		MessageHandler_eventRoomList_Parms Parms;
		Parms.msg=msg;
		ProcessEvent(FindFunctionChecked(NAME_AMessageHandler_RoomList),&Parms);
	}
	static FName NAME_AMessageHandler_UserList = FName(TEXT("UserList"));
	void AMessageHandler::UserList()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMessageHandler_UserList),NULL);
	}
	void AMessageHandler::StaticRegisterNativesAMessageHandler()
	{
	}
	struct Z_Construct_UFunction_AMessageHandler_LoginFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_LoginFail_Statics::Function_MetaDataParams[] = {
		{ "Category", "MsgHandler" },
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessageHandler_LoginFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMessageHandler, nullptr, "LoginFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_LoginFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_LoginFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMessageHandler_LoginFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMessageHandler_LoginFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMessageHandler_OnChat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_OnChat_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMessageHandler_OnChat_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageHandler_eventOnChat_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMessageHandler_OnChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMessageHandler_OnChat_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MsgHandler" },
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessageHandler_OnChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMessageHandler, nullptr, "OnChat", nullptr, nullptr, sizeof(MessageHandler_eventOnChat_Parms), Z_Construct_UFunction_AMessageHandler_OnChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMessageHandler_OnChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMessageHandler_OnChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMessageHandler_RoomList_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg_Inner = { "msg", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageHandler_eventRoomList_Parms, msg), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMessageHandler_RoomList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMessageHandler_RoomList_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_RoomList_Statics::Function_MetaDataParams[] = {
		{ "Category", "MsgHandler" },
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessageHandler_RoomList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMessageHandler, nullptr, "RoomList", nullptr, nullptr, sizeof(MessageHandler_eventRoomList_Parms), Z_Construct_UFunction_AMessageHandler_RoomList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_RoomList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_RoomList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_RoomList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMessageHandler_RoomList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMessageHandler_RoomList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMessageHandler_UserList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_UserList_Statics::Function_MetaDataParams[] = {
		{ "Category", "MsgHandler" },
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessageHandler_UserList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMessageHandler, nullptr, "UserList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_UserList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_UserList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMessageHandler_UserList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMessageHandler_UserList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMessageHandler_NoRegister()
	{
		return AMessageHandler::StaticClass();
	}
	struct Z_Construct_UClass_AMessageHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMessageHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMessageHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMessageHandler_LoginFail, "LoginFail" }, // 3221302584
		{ &Z_Construct_UFunction_AMessageHandler_OnChat, "OnChat" }, // 3633282945
		{ &Z_Construct_UFunction_AMessageHandler_RoomList, "RoomList" }, // 998749149
		{ &Z_Construct_UFunction_AMessageHandler_UserList, "UserList" }, // 1867558323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMessageHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MessageHandler.h" },
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMessageHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMessageHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMessageHandler_Statics::ClassParams = {
		&AMessageHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMessageHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMessageHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMessageHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMessageHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMessageHandler, 1559067491);
	template<> CLIENT_API UClass* StaticClass<AMessageHandler>()
	{
		return AMessageHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMessageHandler(Z_Construct_UClass_AMessageHandler, &AMessageHandler::StaticClass, TEXT("/Script/client"), TEXT("AMessageHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMessageHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
