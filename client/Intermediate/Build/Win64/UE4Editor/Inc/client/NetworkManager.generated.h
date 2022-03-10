// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENT_NetworkManager_generated_h
#error "NetworkManager.generated.h already included, missing '#pragma once' in NetworkManager.h"
#endif
#define CLIENT_NetworkManager_generated_h

#define client_Source_client_NetworkManager_h_25_SPARSE_DATA
#define client_Source_client_NetworkManager_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendChat); \
	DECLARE_FUNCTION(execSendMakeRoom); \
	DECLARE_FUNCTION(execSendExit); \
	DECLARE_FUNCTION(execSendQuitRoom); \
	DECLARE_FUNCTION(execSendJoin); \
	DECLARE_FUNCTION(execSendUserInfo); \
	DECLARE_FUNCTION(execSendRoomInfo); \
	DECLARE_FUNCTION(execSendRoomList); \
	DECLARE_FUNCTION(execSendUserList); \
	DECLARE_FUNCTION(execSendLogin); \
	DECLARE_FUNCTION(execConnectServer);


#define client_Source_client_NetworkManager_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendChat); \
	DECLARE_FUNCTION(execSendMakeRoom); \
	DECLARE_FUNCTION(execSendExit); \
	DECLARE_FUNCTION(execSendQuitRoom); \
	DECLARE_FUNCTION(execSendJoin); \
	DECLARE_FUNCTION(execSendUserInfo); \
	DECLARE_FUNCTION(execSendRoomInfo); \
	DECLARE_FUNCTION(execSendRoomList); \
	DECLARE_FUNCTION(execSendUserList); \
	DECLARE_FUNCTION(execSendLogin); \
	DECLARE_FUNCTION(execConnectServer);


#define client_Source_client_NetworkManager_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkManager(); \
	friend struct Z_Construct_UClass_ANetworkManager_Statics; \
public: \
	DECLARE_CLASS(ANetworkManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(ANetworkManager)


#define client_Source_client_NetworkManager_h_25_INCLASS \
private: \
	static void StaticRegisterNativesANetworkManager(); \
	friend struct Z_Construct_UClass_ANetworkManager_Statics; \
public: \
	DECLARE_CLASS(ANetworkManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/client"), NO_API) \
	DECLARE_SERIALIZER(ANetworkManager)


#define client_Source_client_NetworkManager_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkManager(ANetworkManager&&); \
	NO_API ANetworkManager(const ANetworkManager&); \
public:


#define client_Source_client_NetworkManager_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkManager(ANetworkManager&&); \
	NO_API ANetworkManager(const ANetworkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkManager)


#define client_Source_client_NetworkManager_h_25_PRIVATE_PROPERTY_OFFSET
#define client_Source_client_NetworkManager_h_22_PROLOG
#define client_Source_client_NetworkManager_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_NetworkManager_h_25_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_NetworkManager_h_25_SPARSE_DATA \
	client_Source_client_NetworkManager_h_25_RPC_WRAPPERS \
	client_Source_client_NetworkManager_h_25_INCLASS \
	client_Source_client_NetworkManager_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define client_Source_client_NetworkManager_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	client_Source_client_NetworkManager_h_25_PRIVATE_PROPERTY_OFFSET \
	client_Source_client_NetworkManager_h_25_SPARSE_DATA \
	client_Source_client_NetworkManager_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	client_Source_client_NetworkManager_h_25_INCLASS_NO_PURE_DECLS \
	client_Source_client_NetworkManager_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class ANetworkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID client_Source_client_NetworkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
