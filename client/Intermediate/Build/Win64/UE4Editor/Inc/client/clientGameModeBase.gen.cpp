// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "client/clientGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclientGameModeBase() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_AclientGameModeBase_NoRegister();
	CLIENT_API UClass* Z_Construct_UClass_AclientGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_client();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AclientGameModeBase::execGetCurMenuWeidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetCurMenuWeidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AclientGameModeBase::execChangeMenuWeidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWeidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AclientGameModeBase::StaticRegisterNativesAclientGameModeBase()
	{
		UClass* Class = AclientGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWeidget", &AclientGameModeBase::execChangeMenuWeidget },
			{ "GetCurMenuWeidget", &AclientGameModeBase::execGetCurMenuWeidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics
	{
		struct clientGameModeBase_eventChangeMenuWeidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(clientGameModeBase_eventChangeMenuWeidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG_CHAT" },
		{ "ModuleRelativePath", "clientGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AclientGameModeBase, nullptr, "ChangeMenuWeidget", nullptr, nullptr, sizeof(clientGameModeBase_eventChangeMenuWeidget_Parms), Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics
	{
		struct clientGameModeBase_eventGetCurMenuWeidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(clientGameModeBase_eventGetCurMenuWeidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG_CHAT" },
		{ "ModuleRelativePath", "clientGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AclientGameModeBase, nullptr, "GetCurMenuWeidget", nullptr, nullptr, sizeof(clientGameModeBase_eventGetCurMenuWeidget_Parms), Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AclientGameModeBase_NoRegister()
	{
		return AclientGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AclientGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startingWidgtClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_startingWidgtClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AclientGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AclientGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AclientGameModeBase_ChangeMenuWeidget, "ChangeMenuWeidget" }, // 2056511454
		{ &Z_Construct_UFunction_AclientGameModeBase_GetCurMenuWeidget, "GetCurMenuWeidget" }, // 2853211810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AclientGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "clientGameModeBase.h" },
		{ "ModuleRelativePath", "clientGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_startingWidgtClass_MetaData[] = {
		{ "Category", "UMG_CHAT" },
		{ "ModuleRelativePath", "clientGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_startingWidgtClass = { "startingWidgtClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AclientGameModeBase, startingWidgtClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_startingWidgtClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_startingWidgtClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "UMG_CHAT" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "clientGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AclientGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AclientGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_startingWidgtClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AclientGameModeBase_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AclientGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AclientGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AclientGameModeBase_Statics::ClassParams = {
		&AclientGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AclientGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AclientGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AclientGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AclientGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AclientGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AclientGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AclientGameModeBase, 822121163);
	template<> CLIENT_API UClass* StaticClass<AclientGameModeBase>()
	{
		return AclientGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AclientGameModeBase(Z_Construct_UClass_AclientGameModeBase, &AclientGameModeBase::StaticClass, TEXT("/Script/client"), TEXT("AclientGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AclientGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
