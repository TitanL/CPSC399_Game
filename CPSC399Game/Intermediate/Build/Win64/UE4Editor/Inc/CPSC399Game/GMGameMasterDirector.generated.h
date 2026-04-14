// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPSC399GAME_GMGameMasterDirector_generated_h
#error "GMGameMasterDirector.generated.h already included, missing '#pragma once' in GMGameMasterDirector.h"
#endif
#define CPSC399GAME_GMGameMasterDirector_generated_h

#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMControlSlot_Statics; \
	CPSC399GAME_API static class UScriptStruct* StaticStruct();


template<> CPSC399GAME_API UScriptStruct* StaticStruct<struct FGMControlSlot>();

#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_SPARSE_DATA
#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHighestRunnerProgressReached); \
	DECLARE_FUNCTION(execForceRefreshTargets); \
	DECLARE_FUNCTION(execTriggerSlot3); \
	DECLARE_FUNCTION(execTriggerSlot2); \
	DECLARE_FUNCTION(execTriggerSlot1);


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHighestRunnerProgressReached); \
	DECLARE_FUNCTION(execForceRefreshTargets); \
	DECLARE_FUNCTION(execTriggerSlot3); \
	DECLARE_FUNCTION(execTriggerSlot2); \
	DECLARE_FUNCTION(execTriggerSlot1);


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMGameMasterDirector(); \
	friend struct Z_Construct_UClass_AGMGameMasterDirector_Statics; \
public: \
	DECLARE_CLASS(AGMGameMasterDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMGameMasterDirector)


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAGMGameMasterDirector(); \
	friend struct Z_Construct_UClass_AGMGameMasterDirector_Statics; \
public: \
	DECLARE_CLASS(AGMGameMasterDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPSC399Game"), NO_API) \
	DECLARE_SERIALIZER(AGMGameMasterDirector)


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGMGameMasterDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMGameMasterDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMGameMasterDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMGameMasterDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMGameMasterDirector(AGMGameMasterDirector&&); \
	NO_API AGMGameMasterDirector(const AGMGameMasterDirector&); \
public:


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGMGameMasterDirector(AGMGameMasterDirector&&); \
	NO_API AGMGameMasterDirector(const AGMGameMasterDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMGameMasterDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMGameMasterDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGMGameMasterDirector)


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_PRIVATE_PROPERTY_OFFSET
#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_47_PROLOG
#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_RPC_WRAPPERS \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_INCLASS \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_PRIVATE_PROPERTY_OFFSET \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_SPARSE_DATA \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_INCLASS_NO_PURE_DECLS \
	CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPSC399GAME_API UClass* StaticClass<class AGMGameMasterDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPSC399Game_Source_CPSC399Game_Public_GMGameMasterDirector_h


#define FOREACH_ENUM_EGMCONTROLTYPE(op) \
	op(EGMControlType::None) \
	op(EGMControlType::Mover) \
	op(EGMControlType::Collapse) \
	op(EGMControlType::Spin) 

enum class EGMControlType : uint8;
template<> CPSC399GAME_API UEnum* StaticEnum<EGMControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
