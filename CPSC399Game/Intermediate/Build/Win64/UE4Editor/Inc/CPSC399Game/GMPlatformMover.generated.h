// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPSC399GAME_GMPlatformMover_generated_h
#error "GMPlatformMover.generated.h already included, missing '#pragma once' in GMPlatformMover.h"
#endif
#define CPSC399GAME_GMPlatformMover_generated_h

#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_SPARSE_DATA
#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execIsOnLocalCooldown); \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execResetPlatform); \
	DECLARE_FUNCTION(execLowerPlatform); \
	DECLARE_FUNCTION(execRaisePlatform); \
	DECLARE_FUNCTION(execTriggerPlatform);


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execIsOnLocalCooldown); \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execResetPlatform); \
	DECLARE_FUNCTION(execLowerPlatform); \
	DECLARE_FUNCTION(execRaisePlatform); \
	DECLARE_FUNCTION(execTriggerPlatform);


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMPlatformMover(); \
	friend struct Z_Construct_UClass_AGMPlatformMover_Statics; \
public: \
	DECLARE_CLASS(AGMPlatformMover, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMPlatformMover)


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAGMPlatformMover(); \
	friend struct Z_Construct_UClass_AGMPlatformMover_Statics; \
public: \
	DECLARE_CLASS(AGMPlatformMover, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMPlatformMover)


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGMPlatformMover(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMPlatformMover) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMPlatformMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMPlatformMover); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMPlatformMover(AGMPlatformMover&&); \
	NO_API AGMPlatformMover(const AGMPlatformMover&); \
public:


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMPlatformMover(AGMPlatformMover&&); \
	NO_API AGMPlatformMover(const AGMPlatformMover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMPlatformMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMPlatformMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGMPlatformMover)


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_PRIVATE_PROPERTY_OFFSET
#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_7_PROLOG
#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_RPC_WRAPPERS \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_INCLASS \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_INCLASS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPSC399GAME_API UClass* StaticClass<class AGMPlatformMover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPSC399Game_Source_CPSC399Game_Public_GMPlatformMover_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
