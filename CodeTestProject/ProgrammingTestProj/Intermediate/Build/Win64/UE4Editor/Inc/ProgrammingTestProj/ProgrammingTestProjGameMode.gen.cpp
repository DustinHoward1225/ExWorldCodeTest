// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgrammingTestProj/ProgrammingTestProjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgrammingTestProjGameMode() {}
// Cross Module References
	PROGRAMMINGTESTPROJ_API UClass* Z_Construct_UClass_AProgrammingTestProjGameMode_NoRegister();
	PROGRAMMINGTESTPROJ_API UClass* Z_Construct_UClass_AProgrammingTestProjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProgrammingTestProj();
// End Cross Module References
	void AProgrammingTestProjGameMode::StaticRegisterNativesAProgrammingTestProjGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProgrammingTestProjGameMode_NoRegister()
	{
		return AProgrammingTestProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProgrammingTestProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgrammingTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProgrammingTestProjGameMode.h" },
		{ "ModuleRelativePath", "ProgrammingTestProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgrammingTestProjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::ClassParams = {
		&AProgrammingTestProjGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProgrammingTestProjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProgrammingTestProjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProgrammingTestProjGameMode, 1030378711);
	template<> PROGRAMMINGTESTPROJ_API UClass* StaticClass<AProgrammingTestProjGameMode>()
	{
		return AProgrammingTestProjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProgrammingTestProjGameMode(Z_Construct_UClass_AProgrammingTestProjGameMode, &AProgrammingTestProjGameMode::StaticClass, TEXT("/Script/ProgrammingTestProj"), TEXT("AProgrammingTestProjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgrammingTestProjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
