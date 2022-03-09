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
	static FName NAME_AMessageHandler_OnChat = FName(TEXT("OnChat"));
	void AMessageHandler::OnChat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMessageHandler_OnChat),NULL);
	}
	void AMessageHandler::StaticRegisterNativesAMessageHandler()
	{
	}
	struct Z_Construct_UFunction_AMessageHandler_OnChat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MessageHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessageHandler_OnChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMessageHandler, nullptr, "OnChat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessageHandler_OnChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMessageHandler_OnChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMessageHandler_OnChat_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_AMessageHandler_OnChat, "OnChat" }, // 655667073
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
	IMPLEMENT_CLASS(AMessageHandler, 3336231042);
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
