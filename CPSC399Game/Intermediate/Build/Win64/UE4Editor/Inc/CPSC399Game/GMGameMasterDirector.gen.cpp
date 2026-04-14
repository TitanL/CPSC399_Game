// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMGameMasterDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMGameMasterDirector() {}
// Cross Module References
	CPSC399GAME_API UEnum* Z_Construct_UEnum_CPSC399Game_EGMControlType();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	CPSC399GAME_API UScriptStruct* Z_Construct_UScriptStruct_FGMControlSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMGameMasterDirector_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMGameMasterDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EGMControlType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CPSC399Game_EGMControlType, Z_Construct_UPackage__Script_CPSC399Game(), TEXT("EGMControlType"));
		}
		return Singleton;
	}
	template<> CPSC399GAME_API UEnum* StaticEnum<EGMControlType>()
	{
		return EGMControlType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGMControlType(EGMControlType_StaticEnum, TEXT("/Script/CPSC399Game"), TEXT("EGMControlType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CPSC399Game_EGMControlType_Hash() { return 1748664601U; }
	UEnum* Z_Construct_UEnum_CPSC399Game_EGMControlType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CPSC399Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGMControlType"), 0, Get_Z_Construct_UEnum_CPSC399Game_EGMControlType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGMControlType::None", (int64)EGMControlType::None },
				{ "EGMControlType::Mover", (int64)EGMControlType::Mover },
				{ "EGMControlType::Collapse", (int64)EGMControlType::Collapse },
				{ "EGMControlType::Spin", (int64)EGMControlType::Spin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collapse.Name", "EGMControlType::Collapse" },
				{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
				{ "Mover.Name", "EGMControlType::Mover" },
				{ "None.Name", "EGMControlType::None" },
				{ "Spin.Name", "EGMControlType::Spin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CPSC399Game,
				nullptr,
				"EGMControlType",
				"EGMControlType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGMControlSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CPSC399GAME_API uint32 Get_Z_Construct_UScriptStruct_FGMControlSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMControlSlot, Z_Construct_UPackage__Script_CPSC399Game(), TEXT("GMControlSlot"), sizeof(FGMControlSlot), Get_Z_Construct_UScriptStruct_FGMControlSlot_Hash());
	}
	return Singleton;
}
template<> CPSC399GAME_API UScriptStruct* StaticStruct<FGMControlSlot>()
{
	return FGMControlSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGMControlSlot(FGMControlSlot::StaticStruct, TEXT("/Script/CPSC399Game"), TEXT("GMControlSlot"), false, nullptr, nullptr);
static struct FScriptStruct_CPSC399Game_StaticRegisterNativesFGMControlSlot
{
	FScriptStruct_CPSC399Game_StaticRegisterNativesFGMControlSlot()
	{
		UScriptStruct::DeferCppStructOps<FGMControlSlot>(FName(TEXT("GMControlSlot")));
	}
} ScriptStruct_CPSC399Game_StaticRegisterNativesFGMControlSlot;
	struct Z_Construct_UScriptStruct_FGMControlSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMControlSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMControlSlot>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMControlSlot, ControlType), Z_Construct_UEnum_CPSC399Game_EGMControlType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_FocusActor_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMControlSlot, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_FocusActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_FocusActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMControlSlot, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMControlSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_ControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_FocusActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMControlSlot_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMControlSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
		nullptr,
		&NewStructOps,
		"GMControlSlot",
		sizeof(FGMControlSlot),
		alignof(FGMControlSlot),
		Z_Construct_UScriptStruct_FGMControlSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMControlSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGMControlSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMControlSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGMControlSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGMControlSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CPSC399Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GMControlSlot"), sizeof(FGMControlSlot), Get_Z_Construct_UScriptStruct_FGMControlSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGMControlSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGMControlSlot_Hash() { return 1566069352U; }
	DEFINE_FUNCTION(AGMGameMasterDirector::execGetHighestRunnerProgressReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHighestRunnerProgressReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMGameMasterDirector::execForceRefreshTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceRefreshTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMGameMasterDirector::execTriggerSlot3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSlot3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMGameMasterDirector::execTriggerSlot2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSlot2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMGameMasterDirector::execTriggerSlot1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSlot1();
		P_NATIVE_END;
	}
	void AGMGameMasterDirector::StaticRegisterNativesAGMGameMasterDirector()
	{
		UClass* Class = AGMGameMasterDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceRefreshTargets", &AGMGameMasterDirector::execForceRefreshTargets },
			{ "GetHighestRunnerProgressReached", &AGMGameMasterDirector::execGetHighestRunnerProgressReached },
			{ "TriggerSlot1", &AGMGameMasterDirector::execTriggerSlot1 },
			{ "TriggerSlot2", &AGMGameMasterDirector::execTriggerSlot2 },
			{ "TriggerSlot3", &AGMGameMasterDirector::execTriggerSlot3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMGameMasterDirector, nullptr, "ForceRefreshTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics
	{
		struct GMGameMasterDirector_eventGetHighestRunnerProgressReached_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMGameMasterDirector_eventGetHighestRunnerProgressReached_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMGameMasterDirector, nullptr, "GetHighestRunnerProgressReached", nullptr, nullptr, sizeof(GMGameMasterDirector_eventGetHighestRunnerProgressReached_Parms), Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMGameMasterDirector, nullptr, "TriggerSlot1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMGameMasterDirector, nullptr, "TriggerSlot2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMGameMasterDirector, nullptr, "TriggerSlot3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMGameMasterDirector_NoRegister()
	{
		return AGMGameMasterDirector::StaticClass();
	}
	struct Z_Construct_UClass_AGMGameMasterDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassedTargetTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PassedTargetTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxActiveSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxActiveSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalActionCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalActionCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSlotDebugOnScreen_MetaData[];
#endif
		static void NewProp_bShowSlotDebugOnScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSlotDebugOnScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlotRefreshInterval;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMGameMasterDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMGameMasterDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMGameMasterDirector_ForceRefreshTargets, "ForceRefreshTargets" }, // 1109718220
		{ &Z_Construct_UFunction_AGMGameMasterDirector_GetHighestRunnerProgressReached, "GetHighestRunnerProgressReached" }, // 1128444365
		{ &Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot1, "TriggerSlot1" }, // 716862044
		{ &Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot2, "TriggerSlot2" }, // 2132847846
		{ &Z_Construct_UFunction_AGMGameMasterDirector_TriggerSlot3, "TriggerSlot3" }, // 1831276718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMGameMasterDirector.h" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackOrigin_MetaData[] = {
		{ "Category", "GM|Track" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackOrigin = { "TrackOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, TrackOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackForward_MetaData[] = {
		{ "Category", "GM|Track" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackForward = { "TrackForward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, TrackForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_PassedTargetTolerance_MetaData[] = {
		{ "Category", "GM|Track" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_PassedTargetTolerance = { "PassedTargetTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, PassedTargetTolerance), METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_PassedTargetTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_PassedTargetTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_MaxActiveSlots_MetaData[] = {
		{ "Category", "GM|Slots" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_MaxActiveSlots = { "MaxActiveSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, MaxActiveSlots), METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_MaxActiveSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_MaxActiveSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_GlobalActionCooldown_MetaData[] = {
		{ "Category", "GM|Cooldown" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_GlobalActionCooldown = { "GlobalActionCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, GlobalActionCooldown), METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_GlobalActionCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_GlobalActionCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen_MetaData[] = {
		{ "Category", "GM|Debug" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	void Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen_SetBit(void* Obj)
	{
		((AGMGameMasterDirector*)Obj)->bShowSlotDebugOnScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen = { "bShowSlotDebugOnScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGMGameMasterDirector), &Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_SlotRefreshInterval_MetaData[] = {
		{ "Category", "GM|Debug" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_SlotRefreshInterval = { "SlotRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, SlotRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_SlotRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_SlotRefreshInterval_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots_Inner = { "CurrentSlots", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGMControlSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots_MetaData[] = {
		{ "Category", "GM|Slots" },
		{ "ModuleRelativePath", "Public/GMGameMasterDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots = { "CurrentSlots", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterDirector, CurrentSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMGameMasterDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_TrackForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_PassedTargetTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_MaxActiveSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_GlobalActionCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_bShowSlotDebugOnScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_SlotRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterDirector_Statics::NewProp_CurrentSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMGameMasterDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMGameMasterDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMGameMasterDirector_Statics::ClassParams = {
		&AGMGameMasterDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMGameMasterDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMGameMasterDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMGameMasterDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMGameMasterDirector, 1622459548);
	template<> CPSC399GAME_API UClass* StaticClass<AGMGameMasterDirector>()
	{
		return AGMGameMasterDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMGameMasterDirector(Z_Construct_UClass_AGMGameMasterDirector, &AGMGameMasterDirector::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMGameMasterDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMGameMasterDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
