// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeTestProj/CodeTestProjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeTestProjGameMode() {}
// Cross Module References
	CODETESTPROJ_API UClass* Z_Construct_UClass_ACodeTestProjGameMode_NoRegister();
	CODETESTPROJ_API UClass* Z_Construct_UClass_ACodeTestProjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CodeTestProj();
// End Cross Module References
	void ACodeTestProjGameMode::StaticRegisterNativesACodeTestProjGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACodeTestProjGameMode_NoRegister()
	{
		return ACodeTestProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACodeTestProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodeTestProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodeTestProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CodeTestProjGameMode.h" },
		{ "ModuleRelativePath", "CodeTestProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodeTestProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodeTestProjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodeTestProjGameMode_Statics::ClassParams = {
		&ACodeTestProjGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACodeTestProjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodeTestProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodeTestProjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodeTestProjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodeTestProjGameMode, 1132015117);
	template<> CODETESTPROJ_API UClass* StaticClass<ACodeTestProjGameMode>()
	{
		return ACodeTestProjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodeTestProjGameMode(Z_Construct_UClass_ACodeTestProjGameMode, &ACodeTestProjGameMode::StaticClass, TEXT("/Script/CodeTestProj"), TEXT("ACodeTestProjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeTestProjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
