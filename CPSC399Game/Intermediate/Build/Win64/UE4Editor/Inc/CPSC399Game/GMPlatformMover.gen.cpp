// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMPlatformMover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMPlatformMover() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMPlatformMover_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMPlatformMover();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AGMPlatformMover::execGetFocusActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetFocusActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execIsOnLocalCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnLocalCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execCanTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execResetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execLowerPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LowerPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execRaisePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RaisePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformMover::execTriggerPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerPlatform();
		P_NATIVE_END;
	}
	void AGMPlatformMover::StaticRegisterNativesAGMPlatformMover()
	{
		UClass* Class = AGMPlatformMover::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrigger", &AGMPlatformMover::execCanTrigger },
			{ "GetFocusActor", &AGMPlatformMover::execGetFocusActor },
			{ "IsOnLocalCooldown", &AGMPlatformMover::execIsOnLocalCooldown },
			{ "LowerPlatform", &AGMPlatformMover::execLowerPlatform },
			{ "RaisePlatform", &AGMPlatformMover::execRaisePlatform },
			{ "ResetPlatform", &AGMPlatformMover::execResetPlatform },
			{ "TriggerPlatform", &AGMPlatformMover::execTriggerPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics
	{
		struct GMPlatformMover_eventCanTrigger_Parms
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
	void Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMPlatformMover_eventCanTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMPlatformMover_eventCanTrigger_Parms), &Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "CanTrigger", nullptr, nullptr, sizeof(GMPlatformMover_eventCanTrigger_Parms), Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_CanTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_CanTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics
	{
		struct GMPlatformMover_eventGetFocusActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMPlatformMover_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "GetFocusActor", nullptr, nullptr, sizeof(GMPlatformMover_eventGetFocusActor_Parms), Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_GetFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_GetFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics
	{
		struct GMPlatformMover_eventIsOnLocalCooldown_Parms
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
	void Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMPlatformMover_eventIsOnLocalCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMPlatformMover_eventIsOnLocalCooldown_Parms), &Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "IsOnLocalCooldown", nullptr, nullptr, sizeof(GMPlatformMover_eventIsOnLocalCooldown_Parms), Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "LowerPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_LowerPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_LowerPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "RaisePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_RaisePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_RaisePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "ResetPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_ResetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_ResetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformMover, nullptr, "TriggerPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMPlatformMover_NoRegister()
	{
		return AGMPlatformMover::StaticClass();
	}
	struct Z_Construct_UClass_AGMPlatformMover_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMPlatformMover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMPlatformMover_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMPlatformMover_CanTrigger, "CanTrigger" }, // 4104724791
		{ &Z_Construct_UFunction_AGMPlatformMover_GetFocusActor, "GetFocusActor" }, // 1005377582
		{ &Z_Construct_UFunction_AGMPlatformMover_IsOnLocalCooldown, "IsOnLocalCooldown" }, // 3805983758
		{ &Z_Construct_UFunction_AGMPlatformMover_LowerPlatform, "LowerPlatform" }, // 1304212457
		{ &Z_Construct_UFunction_AGMPlatformMover_RaisePlatform, "RaisePlatform" }, // 1312152990
		{ &Z_Construct_UFunction_AGMPlatformMover_ResetPlatform, "ResetPlatform" }, // 2422068514
		{ &Z_Construct_UFunction_AGMPlatformMover_TriggerPlatform, "TriggerPlatform" }, // 2684857719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMPlatformMover.h" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_TargetPlatform_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_TargetPlatform = { "TargetPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformMover, TargetPlatform), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_TargetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_TargetPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveOffset_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformMover, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveInterpSpeed_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveInterpSpeed = { "MoveInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformMover, MoveInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_ActiveDuration_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformMover, ActiveDuration), METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_ActiveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_ActiveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_LocalCooldown_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformMover.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_LocalCooldown = { "LocalCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformMover, LocalCooldown), METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_LocalCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_LocalCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMPlatformMover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_TargetPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_MoveInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_ActiveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformMover_Statics::NewProp_LocalCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMPlatformMover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMPlatformMover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMPlatformMover_Statics::ClassParams = {
		&AGMPlatformMover::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMPlatformMover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMPlatformMover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformMover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMPlatformMover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMPlatformMover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMPlatformMover, 1057192373);
	template<> CPSC399GAME_API UClass* StaticClass<AGMPlatformMover>()
	{
		return AGMPlatformMover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMPlatformMover(Z_Construct_UClass_AGMPlatformMover, &AGMPlatformMover::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMPlatformMover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMPlatformMover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
