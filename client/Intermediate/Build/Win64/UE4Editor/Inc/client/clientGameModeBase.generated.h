// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef CLIENT_clientGameModeBase_generated_h
#error "clientGameModeBase.generated.h already included, missing '#pragma once' in clientGameModeBase.h"
#endif
#define CLIENT_clientGameModeBase_generated_h

#define client_Source_client_clientGameModeBase_h_15_SPARSE_DATA
#define client_Source_client_clientGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWeidget);


#define client_Source_client_clientGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWeidget);


#define client_Source_client_clientGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAclientGameModeBase(); \
	friend struct Z_Construct_UClass_AclientGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AclientGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AclientGameModeBase)


#define client_Source_client_clientGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAclientGameModeBase(); \
	friend struct Z_Construct_UClass_AclientGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AclientGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AclientGameModeBase)


#define client_Source_client_clientGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AclientGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AclientGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AclientGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AclientGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AclientGameModeBase(AclientGameModeBase&&); \
	NO_API AclientGameModeBase(const AclientGameModeBase&); \
public:


#define client_Source_client_clientGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AclientGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AclientGameModeBase(AclientGameModeBase&&); \
	NO_API AclientGameModeBase(const AclientGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AclientGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AclientGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AclientGameModeBase)


#define client_Source_client_clientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__startingWidgtClass() { return STRUCT_OFFSET(AclientGameModeBase, startingWidgtClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AclientGameModeBase, CurrentWidget); }


#define client_Source_client_clientGameModeBase_h_12_PROLOG
#define client_Source_client_clientGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_clientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_clientGameModeBase_h_15_SPARSE_DATA \
	client_Source_client_clientGameModeBase_h_15_RPC_WRAPPERS \
	client_Source_client_clientGameModeBase_h_15_INCLASS \
	client_Source_client_clientGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define client_Source_client_clientGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_clientGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_clientGameModeBase_h_15_SPARSE_DATA \
	client_Source_client_clientGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	client_Source_client_clientGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	client_Source_client_clientGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AclientGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID client_Source_client_clientGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
