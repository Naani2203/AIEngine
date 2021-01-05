// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomAIEngine/RTSHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSHud() {}
// Cross Module References
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ARTSHud_NoRegister();
	CUSTOMAIENGINE_API UClass* Z_Construct_UClass_ARTSHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CustomAIEngine();
// End Cross Module References
	void ARTSHud::StaticRegisterNativesARTSHud()
	{
	}
	UClass* Z_Construct_UClass_ARTSHud_NoRegister()
	{
		return ARTSHud::StaticClass();
	}
	struct Z_Construct_UClass_ARTSHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomAIEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RTSHud.h" },
		{ "ModuleRelativePath", "RTSHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSHud_Statics::ClassParams = {
		&ARTSHud::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARTSHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSHud, 3270563298);
	template<> CUSTOMAIENGINE_API UClass* StaticClass<ARTSHud>()
	{
		return ARTSHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSHud(Z_Construct_UClass_ARTSHud, &ARTSHud::StaticClass, TEXT("/Script/CustomAIEngine"), TEXT("ARTSHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
