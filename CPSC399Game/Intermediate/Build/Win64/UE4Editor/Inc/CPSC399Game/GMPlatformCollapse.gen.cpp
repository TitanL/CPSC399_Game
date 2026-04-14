// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMPlatformCollapse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMPlatformCollapse() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMPlatformCollapse_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMPlatformCollapse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGMPlatformCollapse::execGetFocusActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetFocusActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformCollapse::execIsOnLocalCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnLocalCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformCollapse::execCanTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformCollapse::execRestorePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestorePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGMPlatformCollapse::execCollapsePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollapsePlatform();
		P_NATIVE_END;
	}
	void AGMPlatformCollapse::StaticRegisterNativesAGMPlatformCollapse()
	{
		UClass* Class = AGMPlatformCollapse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrigger", &AGMPlatformCollapse::execCanTrigger },
			{ "CollapsePlatform", &AGMPlatformCollapse::execCollapsePlatform },
			{ "GetFocusActor", &AGMPlatformCollapse::execGetFocusActor },
			{ "IsOnLocalCooldown", &AGMPlatformCollapse::execIsOnLocalCooldown },
			{ "RestorePlatform", &AGMPlatformCollapse::execRestorePlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics
	{
		struct GMPlatformCollapse_eventCanTrigger_Parms
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
	void Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMPlatformCollapse_eventCanTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMPlatformCollapse_eventCanTrigger_Parms), &Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformCollapse, nullptr, "CanTrigger", nullptr, nullptr, sizeof(GMPlatformCollapse_eventCanTrigger_Parms), Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformCollapse, nullptr, "CollapsePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics
	{
		struct GMPlatformCollapse_eventGetFocusActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GMPlatformCollapse_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformCollapse, nullptr, "GetFocusActor", nullptr, nullptr, sizeof(GMPlatformCollapse_eventGetFocusActor_Parms), Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics
	{
		struct GMPlatformCollapse_eventIsOnLocalCooldown_Parms
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
	void Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GMPlatformCollapse_eventIsOnLocalCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GMPlatformCollapse_eventIsOnLocalCooldown_Parms), &Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformCollapse, nullptr, "IsOnLocalCooldown", nullptr, nullptr, sizeof(GMPlatformCollapse_eventIsOnLocalCooldown_Parms), Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMPlatformCollapse, nullptr, "RestorePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGMPlatformCollapse_NoRegister()
	{
		return AGMPlatformCollapse::StaticClass();
	}
	struct Z_Construct_UClass_AGMPlatformCollapse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestoreDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestoreDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMPlatformCollapse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGMPlatformCollapse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMPlatformCollapse_CanTrigger, "CanTrigger" }, // 1618651840
		{ &Z_Construct_UFunction_AGMPlatformCollapse_CollapsePlatform, "CollapsePlatform" }, // 2286118392
		{ &Z_Construct_UFunction_AGMPlatformCollapse_GetFocusActor, "GetFocusActor" }, // 1254449427
		{ &Z_Construct_UFunction_AGMPlatformCollapse_IsOnLocalCooldown, "IsOnLocalCooldown" }, // 1716091681
		{ &Z_Construct_UFunction_AGMPlatformCollapse_RestorePlatform, "RestorePlatform" }, // 79988756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformCollapse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GMPlatformCollapse.h" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_TargetPlatform_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_TargetPlatform = { "TargetPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformCollapse, TargetPlatform), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_TargetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_TargetPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_RestoreDelay_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_RestoreDelay = { "RestoreDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformCollapse, RestoreDelay), METADATA_PARAMS(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_RestoreDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_RestoreDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_LocalCooldown_MetaData[] = {
		{ "Category", "GM" },
		{ "ModuleRelativePath", "Public/GMPlatformCollapse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_LocalCooldown = { "LocalCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMPlatformCollapse, LocalCooldown), METADATA_PARAMS(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_LocalCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_LocalCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMPlatformCollapse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_TargetPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_RestoreDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMPlatformCollapse_Statics::NewProp_LocalCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMPlatformCollapse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMPlatformCollapse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMPlatformCollapse_Statics::ClassParams = {
		&AGMPlatformCollapse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGMPlatformCollapse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformCollapse_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMPlatformCollapse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPlatformCollapse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMPlatformCollapse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMPlatformCollapse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMPlatformCollapse, 2012527812);
	template<> CPSC399GAME_API UClass* StaticClass<AGMPlatformCollapse>()
	{
		return AGMPlatformCollapse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMPlatformCollapse(Z_Construct_UClass_AGMPlatformCollapse, &AGMPlatformCollapse::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMPlatformCollapse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMPlatformCollapse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
