// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "client/UMGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPlayerController() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_AUMGPlayerController_NoRegister();
	CLIENT_API UClass* Z_Construct_UClass_AUMGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_client();
// End Cross Module References
	void AUMGPlayerController::StaticRegisterNativesAUMGPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUMGPlayerController_NoRegister()
	{
		return AUMGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUMGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_client,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UMGPlayerController.h" },
		{ "ModuleRelativePath", "UMGPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUMGPlayerController_Statics::ClassParams = {
		&AUMGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUMGPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUMGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUMGPlayerController, 322311893);
	template<> CLIENT_API UClass* StaticClass<AUMGPlayerController>()
	{
		return AUMGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUMGPlayerController(Z_Construct_UClass_AUMGPlayerController, &AUMGPlayerController::StaticClass, TEXT("/Script/client"), TEXT("AUMGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
