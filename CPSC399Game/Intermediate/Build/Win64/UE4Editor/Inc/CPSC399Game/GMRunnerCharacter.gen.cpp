// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMRunnerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMRunnerCharacter() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMRunnerCharacter_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMRunnerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
// End Cross Module References
	DEFINE_FUNCTION(AGMRunnerCharacter::execIsRunnerFrozen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunnerFrozen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMRunnerCharacter::execUnfreezeRunner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnfreezeRunner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMRunnerCharacter::execFreezeRunner)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreezeRunner(Z_Param_DurationSeconds);
		P_NATIVE_END;
	}
	void AGMRunnerCharacter::StaticRegisterNativesAGMRunnerCharacter()
	{
		UClass* Class = AGMRunnerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FreezeRunner", &AGMRunnerCharacter::execFreezeRunner },
			{ "IsRunnerFrozen", &AGMRunnerCharacter::execIsRunnerFrozen },
			{ "UnfreezeRunner", &AGMRunnerCharacter::execUnfreezeRunner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics
	{
		struct GMRunnerCharacter_eventFreezeRunner_Parms
		{
			float DurationSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMRunnerCharacter_eventFreezeRunner_Parms, DurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::NewProp_DurationSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM|Freeze" },
		{ "CPP_Default_DurationSeconds", "5.000000" },
		{ "ModuleRelativePath", "Public/GMRunnerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMRunnerCharacter, nullptr, "FreezeRunner", nullptr, nullptr, sizeof(GMRunnerCharacter_eventFreezeRunner_Parms), Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics
	{
		struct GMRunnerCharacter_eventIsRunnerFrozen_Parms
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
	void Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMRunnerCharacter_eventIsRunnerFrozen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMRunnerCharacter_eventIsRunnerFrozen_Parms), &Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM|Freeze" },
		{ "ModuleRelativePath", "Public/GMRunnerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMRunnerCharacter, nullptr, "IsRunnerFrozen", nullptr, nullptr, sizeof(GMRunnerCharacter_eventIsRunnerFrozen_Parms), Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM|Freeze" },
		{ "ModuleRelativePath", "Public/GMRunnerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMRunnerCharacter, nullptr, "UnfreezeRunner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMRunnerCharacter_NoRegister()
	{
		return AGMRunnerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGMRunnerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMRunnerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMRunnerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMRunnerCharacter_FreezeRunner, "FreezeRunner" }, // 2221893754
		{ &Z_Construct_UFunction_AGMRunnerCharacter_IsRunnerFrozen, "IsRunnerFrozen" }, // 2554400849
		{ &Z_Construct_UFunction_AGMRunnerCharacter_UnfreezeRunner, "UnfreezeRunner" }, // 1618545407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMRunnerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GMRunnerCharacter.h" },
		{ "ModuleRelativePath", "Public/GMRunnerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMRunnerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMRunnerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMRunnerCharacter_Statics::ClassParams = {
		&AGMRunnerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMRunnerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMRunnerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMRunnerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMRunnerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMRunnerCharacter, 3648418585);
	template<> CPSC399GAME_API UClass* StaticClass<AGMRunnerCharacter>()
	{
		return AGMRunnerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMRunnerCharacter(Z_Construct_UClass_AGMRunnerCharacter, &AGMRunnerCharacter::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMRunnerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMRunnerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
