// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIKINGSHOOTER_BaseCharacer_generated_h
#error "BaseCharacer.generated.h already included, missing '#pragma once' in BaseCharacer.h"
#endif
#define VIKINGSHOOTER_BaseCharacer_generated_h

#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacer(); \
	friend VIKINGSHOOTER_API class UClass* Z_Construct_UClass_ABaseCharacer(); \
public: \
	DECLARE_CLASS(ABaseCharacer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VikingShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacer(); \
	friend VIKINGSHOOTER_API class UClass* Z_Construct_UClass_ABaseCharacer(); \
public: \
	DECLARE_CLASS(ABaseCharacer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VikingShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacer(ABaseCharacer&&); \
	NO_API ABaseCharacer(const ABaseCharacer&); \
public:


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacer(ABaseCharacer&&); \
	NO_API ABaseCharacer(const ABaseCharacer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacer)


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_PRIVATE_PROPERTY_OFFSET
#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_9_PROLOG
#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_PRIVATE_PROPERTY_OFFSET \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_RPC_WRAPPERS \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_INCLASS \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_PRIVATE_PROPERTY_OFFSET \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_INCLASS_NO_PURE_DECLS \
	VikingShooter_Source_VikingShooter_Public_BaseCharacer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VikingShooter_Source_VikingShooter_Public_BaseCharacer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
