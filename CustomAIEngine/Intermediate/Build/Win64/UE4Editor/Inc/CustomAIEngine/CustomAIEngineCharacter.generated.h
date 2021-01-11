// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMAIENGINE_CustomAIEngineCharacter_generated_h
#error "CustomAIEngineCharacter.generated.h already included, missing '#pragma once' in CustomAIEngineCharacter.h"
#endif
#define CUSTOMAIENGINE_CustomAIEngineCharacter_generated_h

#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_SPARSE_DATA
#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_RPC_WRAPPERS
#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomAIEngineCharacter(); \
	friend struct Z_Construct_UClass_ACustomAIEngineCharacter_Statics; \
public: \
	DECLARE_CLASS(ACustomAIEngineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomAIEngine"), NO_API) \
	DECLARE_SERIALIZER(ACustomAIEngineCharacter)


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACustomAIEngineCharacter(); \
	friend struct Z_Construct_UClass_ACustomAIEngineCharacter_Statics; \
public: \
	DECLARE_CLASS(ACustomAIEngineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomAIEngine"), NO_API) \
	DECLARE_SERIALIZER(ACustomAIEngineCharacter)


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomAIEngineCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomAIEngineCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomAIEngineCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomAIEngineCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomAIEngineCharacter(ACustomAIEngineCharacter&&); \
	NO_API ACustomAIEngineCharacter(const ACustomAIEngineCharacter&); \
public:


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomAIEngineCharacter(ACustomAIEngineCharacter&&); \
	NO_API ACustomAIEngineCharacter(const ACustomAIEngineCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomAIEngineCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomAIEngineCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomAIEngineCharacter)


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ACustomAIEngineCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACustomAIEngineCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ACustomAIEngineCharacter, CursorToWorld); }


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_12_PROLOG
#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_SPARSE_DATA \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_RPC_WRAPPERS \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_INCLASS \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_SPARSE_DATA \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_INCLASS_NO_PURE_DECLS \
	CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMAIENGINE_API UClass* StaticClass<class ACustomAIEngineCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomAIEngine_Source_CustomAIEngine_CustomAIEngineCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
