// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_MessageHandler_generated_h
#error "MessageHandler.generated.h already included, missing '#pragma once' in MessageHandler.h"
#endif
#define CLIENT_MessageHandler_generated_h

#define client_Source_client_MessageHandler_h_12_SPARSE_DATA
#define client_Source_client_MessageHandler_h_12_RPC_WRAPPERS
#define client_Source_client_MessageHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define client_Source_client_MessageHandler_h_12_EVENT_PARMS \
	struct MessageHandler_eventOnChat_Parms \
	{ \
		FString msg; \
	};


#define client_Source_client_MessageHandler_h_12_CALLBACK_WRAPPERS
#define client_Source_client_MessageHandler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMessageHandler(); \
	friend struct Z_Construct_UClass_AMessageHandler_Statics; \
public: \
	DECLARE_CLASS(AMessageHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AMessageHandler)


#define client_Source_client_MessageHandler_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMessageHandler(); \
	friend struct Z_Construct_UClass_AMessageHandler_Statics; \
public: \
	DECLARE_CLASS(AMessageHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(AMessageHandler)


#define client_Source_client_MessageHandler_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMessageHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMessageHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMessageHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMessageHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMessageHandler(AMessageHandler&&); \
	NO_API AMessageHandler(const AMessageHandler&); \
public:


#define client_Source_client_MessageHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMessageHandler(AMessageHandler&&); \
	NO_API AMessageHandler(const AMessageHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMessageHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMessageHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMessageHandler)


#define client_Source_client_MessageHandler_h_12_PRIVATE_PROPERTY_OFFSET
#define client_Source_client_MessageHandler_h_9_PROLOG \
	client_Source_client_MessageHandler_h_12_EVENT_PARMS


#define client_Source_client_MessageHandler_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_MessageHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_MessageHandler_h_12_SPARSE_DATA \
	client_Source_client_MessageHandler_h_12_RPC_WRAPPERS \
	client_Source_client_MessageHandler_h_12_CALLBACK_WRAPPERS \
	client_Source_client_MessageHandler_h_12_INCLASS \
	client_Source_client_MessageHandler_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define client_Source_client_MessageHandler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_MessageHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_MessageHandler_h_12_SPARSE_DATA \
	client_Source_client_MessageHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	client_Source_client_MessageHandler_h_12_CALLBACK_WRAPPERS \
	client_Source_client_MessageHandler_h_12_INCLASS_NO_PURE_DECLS \
	client_Source_client_MessageHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AMessageHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID client_Source_client_MessageHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
