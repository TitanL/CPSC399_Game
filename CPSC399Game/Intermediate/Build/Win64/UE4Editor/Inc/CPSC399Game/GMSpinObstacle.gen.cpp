// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMSpinObstacle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMSpinObstacle() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMSpinObstacle_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMSpinObstacle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AGMSpinObstacle::execGetFocusActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetFocusActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMSpinObstacle::execGetCurrentSpinSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpinSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMSpinObstacle::execIsOnLocalCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnLocalCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMSpinObstacle::execCanTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMSpinObstacle::execResetSpinSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpinSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMSpinObstacle::execTriggerSpinBoost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSpinBoost();
		P_NATIVE_END;
	}
	void AGMSpinObstacle::StaticRegisterNativesAGMSpinObstacle()
	{
		UClass* Class = AGMSpinObstacle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrigger", &AGMSpinObstacle::execCanTrigger },
			{ "GetCurrentSpinSpeed", &AGMSpinObstacle::execGetCurrentSpinSpeed },
			{ "GetFocusActor", &AGMSpinObstacle::execGetFocusActor },
			{ "IsOnLocalCooldown", &AGMSpinObstacle::execIsOnLocalCooldown },
			{ "ResetSpinSpeed", &AGMSpinObstacle::execResetSpinSpeed },
			{ "TriggerSpinBoost", &AGMSpinObstacle::execTriggerSpinBoost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics
	{
		struct GMSpinObstacle_eventCanTrigger_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMSpinObstacle_eventCanTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMSpinObstacle_eventCanTrigger_Parms), &Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "CanTrigger", nullptr, nullptr, sizeof(GMSpinObstacle_eventCanTrigger_Parms), Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_CanTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_CanTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics
	{
		struct GMSpinObstacle_eventGetCurrentSpinSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMSpinObstacle_eventGetCurrentSpinSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "GetCurrentSpinSpeed", nullptr, nullptr, sizeof(GMSpinObstacle_eventGetCurrentSpinSpeed_Parms), Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics
	{
		struct GMSpinObstacle_eventGetFocusActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMSpinObstacle_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "GetFocusActor", nullptr, nullptr, sizeof(GMSpinObstacle_eventGetFocusActor_Parms), Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics
	{
		struct GMSpinObstacle_eventIsOnLocalCooldown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMSpinObstacle_eventIsOnLocalCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMSpinObstacle_eventIsOnLocalCooldown_Parms), &Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "IsOnLocalCooldown", nullptr, nullptr, sizeof(GMSpinObstacle_eventIsOnLocalCooldown_Parms), Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "ResetSpinSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMSpinObstacle, nullptr, "TriggerSpinBoost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMSpinObstacle_NoRegister()
	{
		return AGMSpinObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AGMSpinObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpinAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedIncreaseAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedIncreaseAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMSpinObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMSpinObstacle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMSpinObstacle_CanTrigger, "CanTrigger" }, // 821712042
		{ &Z_Construct_UFunction_AGMSpinObstacle_GetCurrentSpinSpeed, "GetCurrentSpinSpeed" }, // 1550039408
		{ &Z_Construct_UFunction_AGMSpinObstacle_GetFocusActor, "GetFocusActor" }, // 3369820896
		{ &Z_Construct_UFunction_AGMSpinObstacle_IsOnLocalCooldown, "IsOnLocalCooldown" }, // 3973650948
		{ &Z_Construct_UFunction_AGMSpinObstacle_ResetSpinSpeed, "ResetSpinSpeed" }, // 133534580
		{ &Z_Construct_UFunction_AGMSpinObstacle_TriggerSpinBoost, "TriggerSpinBoost" }, // 1131534230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMSpinObstacle.h" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "GM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_TargetObstacle_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_TargetObstacle = { "TargetObstacle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, TargetObstacle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_TargetObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_TargetObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpinAxis_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpinAxis = { "SpinAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, SpinAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpinAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpinAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_CurrentSpinSpeed_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_CurrentSpinSpeed = { "CurrentSpinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, CurrentSpinSpeed), METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_CurrentSpinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_CurrentSpinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpeedIncreaseAmount_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpeedIncreaseAmount = { "SpeedIncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, SpeedIncreaseAmount), METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpeedIncreaseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpeedIncreaseAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_ResetDelay_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_ResetDelay = { "ResetDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, ResetDelay), METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_ResetDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_ResetDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_LocalCooldown_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMSpinObstacle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_LocalCooldown = { "LocalCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMSpinObstacle, LocalCooldown), METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_LocalCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_LocalCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMSpinObstacle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_TargetObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpinAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_CurrentSpinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_SpeedIncreaseAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_ResetDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMSpinObstacle_Statics::NewProp_LocalCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMSpinObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMSpinObstacle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMSpinObstacle_Statics::ClassParams = {
		&AGMSpinObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMSpinObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMSpinObstacle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMSpinObstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMSpinObstacle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMSpinObstacle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMSpinObstacle, 3318082763);
	template<> CPSC399GAME_API UClass* StaticClass<AGMSpinObstacle>()
	{
		return AGMSpinObstacle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMSpinObstacle(Z_Construct_UClass_AGMSpinObstacle, &AGMSpinObstacle::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMSpinObstacle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMSpinObstacle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
