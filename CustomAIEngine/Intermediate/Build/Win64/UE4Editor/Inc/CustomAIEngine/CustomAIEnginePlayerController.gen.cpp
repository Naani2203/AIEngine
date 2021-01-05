// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomAIEngine/CustomAIEnginePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAIEnginePlayerController() {}
// Cross Module References
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ACustomAIEnginePlayerController_NoRegister();
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ACustomAIEnginePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CustomAIEngine();
// End Cross Module References
	void ACustomAIEnginePlayerController::StaticRegisterNativesACustomAIEnginePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACustomAIEnginePlayerController_NoRegister()
	{
		return ACustomAIEnginePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomAIEnginePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomAIEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CustomAIEnginePlayerController.h" },
		{ "ModuleRelativePath", "CustomAIEnginePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomAIEnginePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::ClassParams = {
		&ACustomAIEnginePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomAIEnginePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomAIEnginePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomAIEnginePlayerController, 3292372366);
	template<> CUSTOMAIENGINE_API UClass* StaticClass<ACustomAIEnginePlayerController>()
	{
		return ACustomAIEnginePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomAIEnginePlayerController(Z_Construct_UClass_ACustomAIEnginePlayerController, &ACustomAIEnginePlayerController::StaticClass, TEXT("/Script/CustomAIEngine"), TEXT("ACustomAIEnginePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomAIEnginePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
