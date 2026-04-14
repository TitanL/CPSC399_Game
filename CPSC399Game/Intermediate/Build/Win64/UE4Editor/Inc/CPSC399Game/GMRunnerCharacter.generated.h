// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPSC399GAME_GMRunnerCharacter_generated_h
#error "GMRunnerCharacter.generated.h already included, missing '#pragma once' in GMRunnerCharacter.h"
#endif
#define CPSC399GAME_GMRunnerCharacter_generated_h

#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_SPARSE_DATA
#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRunnerFrozen); \
	DECLARE_FUNCTION(execUnfreezeRunner); \
	DECLARE_FUNCTION(execFreezeRunner);


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRunnerFrozen); \
	DECLARE_FUNCTION(execUnfreezeRunner); \
	DECLARE_FUNCTION(execFreezeRunner);


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMRunnerCharacter(); \
	friend struct Z_Construct_UClass_AGMRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(AGMRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMRunnerCharacter)


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAGMRunnerCharacter(); \
	friend struct Z_Construct_UClass_AGMRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(AGMRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMRunnerCharacter)


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGMRunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMRunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMRunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMRunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMRunnerCharacter(AGMRunnerCharacter&&); \
	NO_API AGMRunnerCharacter(const AGMRunnerCharacter&); \
public:


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMRunnerCharacter(AGMRunnerCharacter&&); \
	NO_API AGMRunnerCharacter(const AGMRunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMRunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMRunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGMRunnerCharacter)


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_PRIVATE_PROPERTY_OFFSET
#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_7_PROLOG
#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_RPC_WRAPPERS \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_INCLASS \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_INCLASS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPSC399GAME_API UClass* StaticClass<class AGMRunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPSC399Game_Source_CPSC399Game_Public_GMRunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
