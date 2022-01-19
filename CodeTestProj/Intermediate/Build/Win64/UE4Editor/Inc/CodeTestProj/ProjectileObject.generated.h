// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CODETESTPROJ_ProjectileObject_generated_h
#error "ProjectileObject.generated.h already included, missing '#pragma once' in ProjectileObject.h"
#endif
#define CODETESTPROJ_ProjectileObject_generated_h

#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileEffect_Statics; \
	CODETESTPROJ_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CODETESTPROJ_API UScriptStruct* StaticStruct<struct FProjectileEffect>();

#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_SPARSE_DATA
#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileObject(); \
	friend struct Z_Construct_UClass_AProjectileObject_Statics; \
public: \
	DECLARE_CLASS(AProjectileObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeTestProj"), NO_API) \
	DECLARE_SERIALIZER(AProjectileObject)


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileObject(); \
	friend struct Z_Construct_UClass_AProjectileObject_Statics; \
public: \
	DECLARE_CLASS(AProjectileObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeTestProj"), NO_API) \
	DECLARE_SERIALIZER(AProjectileObject)


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileObject(AProjectileObject&&); \
	NO_API AProjectileObject(const AProjectileObject&); \
public:


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileObject(AProjectileObject&&); \
	NO_API AProjectileObject(const AProjectileObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileObject)


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectDataTable() { return STRUCT_OFFSET(AProjectileObject, EffectDataTable); }


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_30_PROLOG
#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_PRIVATE_PROPERTY_OFFSET \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_SPARSE_DATA \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_RPC_WRAPPERS \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_INCLASS \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_PRIVATE_PROPERTY_OFFSET \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_SPARSE_DATA \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_INCLASS_NO_PURE_DECLS \
	CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODETESTPROJ_API UClass* StaticClass<class AProjectileObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodeTestProj_Source_CodeTestProj_Public_ProjectileObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
