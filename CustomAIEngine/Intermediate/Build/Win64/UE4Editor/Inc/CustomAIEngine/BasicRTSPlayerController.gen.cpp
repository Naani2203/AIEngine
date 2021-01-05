// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomAIEngine/BasicRTSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicRTSPlayerController() {}
// Cross Module References
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ABasicRTSPlayerController_NoRegister();
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ABasicRTSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CustomAIEngine();
// End Cross Module References
	void ABasicRTSPlayerController::StaticRegisterNativesABasicRTSPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABasicRTSPlayerController_NoRegister()
	{
		return ABasicRTSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABasicRTSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicRTSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomAIEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicRTSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicRTSPlayerController.h" },
		{ "ModuleRelativePath", "BasicRTSPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicRTSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicRTSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicRTSPlayerController_Statics::ClassParams = {
		&ABasicRTSPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicRTSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicRTSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicRTSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicRTSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicRTSPlayerController, 1023834260);
	template<> CUSTOMAIENGINE_API UClass* StaticClass<ABasicRTSPlayerController>()
	{
		return ABasicRTSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicRTSPlayerController(Z_Construct_UClass_ABasicRTSPlayerController, &ABasicRTSPlayerController::StaticClass, TEXT("/Script/CustomAIEngine"), TEXT("ABasicRTSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicRTSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
