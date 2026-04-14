// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMIceZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMIceZone() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMIceZone_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMIceZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGMIceZone::execOnIceZoneBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIceZoneBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMIceZone::execIsIceZoneArmed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIceZoneArmed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMIceZone::execDeactivateIceZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateIceZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMIceZone::execActivateIceZone)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FreezeDurationSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArmedDurationSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateIceZone(Z_Param_FreezeDurationSeconds,Z_Param_ArmedDurationSeconds);
		P_NATIVE_END;
	}
	void AGMIceZone::StaticRegisterNativesAGMIceZone()
	{
		UClass* Class = AGMIceZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateIceZone", &AGMIceZone::execActivateIceZone },
			{ "DeactivateIceZone", &AGMIceZone::execDeactivateIceZone },
			{ "IsIceZoneArmed", &AGMIceZone::execIsIceZoneArmed },
			{ "OnIceZoneBeginOverlap", &AGMIceZone::execOnIceZoneBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics
	{
		struct GMIceZone_eventActivateIceZone_Parms
		{
			float FreezeDurationSeconds;
			float ArmedDurationSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreezeDurationSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmedDurationSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::NewProp_FreezeDurationSeconds = { "FreezeDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventActivateIceZone_Parms, FreezeDurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::NewProp_ArmedDurationSeconds = { "ArmedDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventActivateIceZone_Parms, ArmedDurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::NewProp_FreezeDurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::NewProp_ArmedDurationSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "CPP_Default_ArmedDurationSeconds", "5.000000" },
		{ "CPP_Default_FreezeDurationSeconds", "5.000000" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMIceZone, nullptr, "ActivateIceZone", nullptr, nullptr, sizeof(GMIceZone_eventActivateIceZone_Parms), Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMIceZone_ActivateIceZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMIceZone_ActivateIceZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMIceZone, nullptr, "DeactivateIceZone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMIceZone_DeactivateIceZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMIceZone_DeactivateIceZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics
	{
		struct GMIceZone_eventIsIceZoneArmed_Parms
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
	void Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMIceZone_eventIsIceZoneArmed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMIceZone_eventIsIceZoneArmed_Parms), &Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMIceZone, nullptr, "IsIceZoneArmed", nullptr, nullptr, sizeof(GMIceZone_eventIsIceZoneArmed_Parms), Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics
	{
		struct GMIceZone_eventOnIceZoneBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventOnIceZoneBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventOnIceZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventOnIceZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventOnIceZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GMIceZone_eventOnIceZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMIceZone_eventOnIceZoneBeginOverlap_Parms), &Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMIceZone_eventOnIceZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMIceZone, nullptr, "OnIceZoneBeginOverlap", nullptr, nullptr, sizeof(GMIceZone_eventOnIceZoneBeginOverlap_Parms), Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMIceZone_NoRegister()
	{
		return AGMIceZone::StaticClass();
	}
	struct Z_Construct_UClass_AGMIceZone_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoneMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoneHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMIceZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMIceZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMIceZone_ActivateIceZone, "ActivateIceZone" }, // 3255712079
		{ &Z_Construct_UFunction_AGMIceZone_DeactivateIceZone, "DeactivateIceZone" }, // 3548851888
		{ &Z_Construct_UFunction_AGMIceZone_IsIceZoneArmed, "IsIceZoneArmed" }, // 3130472257
		{ &Z_Construct_UFunction_AGMIceZone_OnIceZoneBeginOverlap, "OnIceZoneBeginOverlap" }, // 2356218651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMIceZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMIceZone.h" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMIceZone_Statics::NewProp_TargetPlatform_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMIceZone_Statics::NewProp_TargetPlatform = { "TargetPlatform", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMIceZone, TargetPlatform), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMIceZone_Statics::NewProp_TargetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::NewProp_TargetPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneMargin_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneMargin = { "ZoneMargin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMIceZone, ZoneMargin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneHeight_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneHeight = { "ZoneHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMIceZone, ZoneHeight), METADATA_PARAMS(Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMIceZone_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "GM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GMIceZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMIceZone_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMIceZone, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMIceZone_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::NewProp_TriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMIceZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMIceZone_Statics::NewProp_TargetPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMIceZone_Statics::NewProp_ZoneHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMIceZone_Statics::NewProp_TriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMIceZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMIceZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMIceZone_Statics::ClassParams = {
		&AGMIceZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMIceZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMIceZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMIceZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMIceZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMIceZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMIceZone, 484693533);
	template<> CPSC399GAME_API UClass* StaticClass<AGMIceZone>()
	{
		return AGMIceZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMIceZone(Z_Construct_UClass_AGMIceZone, &AGMIceZone::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMIceZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMIceZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
