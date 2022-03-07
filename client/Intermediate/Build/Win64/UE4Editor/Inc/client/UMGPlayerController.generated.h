// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_UMGPlayerController_generated_h
#error "UMGPlayerController.generated.h already included, missing '#pragma once' in UMGPlayerController.h"
#endif
#define CLIENT_UMGPlayerController_generated_h

#define client_Source_client_UMGPlayerController_h_15_SPARSE_DATA
#define client_Source_client_UMGPlayerController_h_15_RPC_WRAPPERS
#define client_Source_client_UMGPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define client_Source_client_UMGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUMGPlayerController(); \
	friend struct Z_Construct_UClass_AUMGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AUMGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AUMGPlayerController)


#define client_Source_client_UMGPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUMGPlayerController(); \
	friend struct Z_Construct_UClass_AUMGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AUMGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AUMGPlayerController)


#define client_Source_client_UMGPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUMGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUMGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGPlayerController(AUMGPlayerController&&); \
	NO_API AUMGPlayerController(const AUMGPlayerController&); \
public:


#define client_Source_client_UMGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUMGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGPlayerController(AUMGPlayerController&&); \
	NO_API AUMGPlayerController(const AUMGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUMGPlayerController)


#define client_Source_client_UMGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define client_Source_client_UMGPlayerController_h_12_PROLOG
#define client_Source_client_UMGPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_UMGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_UMGPlayerController_h_15_SPARSE_DATA \
	client_Source_client_UMGPlayerController_h_15_RPC_WRAPPERS \
	client_Source_client_UMGPlayerController_h_15_INCLASS \
	client_Source_client_UMGPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define client_Source_client_UMGPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_UMGPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_UMGPlayerController_h_15_SPARSE_DATA \
	client_Source_client_UMGPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	client_Source_client_UMGPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	client_Source_client_UMGPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AUMGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID client_Source_client_UMGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
