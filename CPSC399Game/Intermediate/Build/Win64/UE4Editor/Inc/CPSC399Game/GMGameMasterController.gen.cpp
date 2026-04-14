// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPSC399Game/Public/GMGameMasterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMGameMasterController() {}
// Cross Module References
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMGameMasterController_NoRegister();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMGameMasterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CPSC399Game();
	CPSC399GAME_API UClass* Z_Construct_UClass_AGMGameMasterDirector_NoRegister();
// End Cross Module References
	void AGMGameMasterController::StaticRegisterNativesAGMGameMasterController()
	{
	}
	UClass* Z_Construct_UClass_AGMGameMasterController_NoRegister()
	{
		return AGMGameMasterController::StaticClass();
	}
	struct Z_Construct_UClass_AGMGameMasterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Director;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMGameMasterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CPSC399Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMGameMasterController.h" },
		{ "ModuleRelativePath", "Public/GMGameMasterController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameMasterController_Statics::NewProp_Director_MetaData[] = {
		{ "ModuleRelativePath", "Public/GMGameMasterController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMGameMasterController_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGMGameMasterController, Director), Z_Construct_UClass_AGMGameMasterDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterController_Statics::NewProp_Director_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterController_Statics::NewProp_Director_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMGameMasterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMGameMasterController_Statics::NewProp_Director,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMGameMasterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMGameMasterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMGameMasterController_Statics::ClassParams = {
		&AGMGameMasterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGMGameMasterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMGameMasterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameMasterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMGameMasterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMGameMasterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMGameMasterController, 2897834372);
	template<> CPSC399GAME_API UClass* StaticClass<AGMGameMasterController>()
	{
		return AGMGameMasterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMGameMasterController(Z_Construct_UClass_AGMGameMasterController, &AGMGameMasterController::StaticClass, TEXT("/Script/CPSC399Game"), TEXT("AGMGameMasterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMGameMasterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
