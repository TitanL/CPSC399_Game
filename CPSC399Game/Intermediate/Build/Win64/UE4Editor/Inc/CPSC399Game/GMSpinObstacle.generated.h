// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPSC399GAME_GMSpinObstacle_generated_h
#error "GMSpinObstacle.generated.h already included, missing '#pragma once' in GMSpinObstacle.h"
#endif
#define CPSC399GAME_GMSpinObstacle_generated_h

#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_SPARSE_DATA
#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execGetCurrentSpinSpeed); \
	DECLARE_FUNCTION(execIsOnLocalCooldown); \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execResetSpinSpeed); \
	DECLARE_FUNCTION(execTriggerSpinBoost);


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execGetCurrentSpinSpeed); \
	DECLARE_FUNCTION(execIsOnLocalCooldown); \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execResetSpinSpeed); \
	DECLARE_FUNCTION(execTriggerSpinBoost);


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMSpinObstacle(); \
	friend struct Z_Construct_UClass_AGMSpinObstacle_Statics; \
public: \
	DECLARE_CLASS(AGMSpinObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMSpinObstacle)


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGMSpinObstacle(); \
	friend struct Z_Construct_UClass_AGMSpinObstacle_Statics; \
public: \
	DECLARE_CLASS(AGMSpinObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMSpinObstacle)


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGMSpinObstacle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMSpinObstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMSpinObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMSpinObstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMSpinObstacle(AGMSpinObstacle&&); \
	NO_API AGMSpinObstacle(const AGMSpinObstacle&); \
public:


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMSpinObstacle(AGMSpinObstacle&&); \
	NO_API AGMSpinObstacle(const AGMSpinObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMSpinObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMSpinObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGMSpinObstacle)


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_PRIVATE_PROPERTY_OFFSET
#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_9_PROLOG
#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_RPC_WRAPPERS \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_INCLASS \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_INCLASS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPSC399GAME_API UClass* StaticClass<class AGMSpinObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPSC399Game_Source_CPSC399Game_Public_GMSpinObstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
