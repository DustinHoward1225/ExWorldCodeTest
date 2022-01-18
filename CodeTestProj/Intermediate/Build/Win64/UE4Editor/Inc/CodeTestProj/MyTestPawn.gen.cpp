// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeTestProj/Public/MyTestPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestPawn() {}
// Cross Module References
	CODETESTPROJ_API UClass* Z_Construct_UClass_AMyTestPawn_NoRegister();
	CODETESTPROJ_API UClass* Z_Construct_UClass_AMyTestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CodeTestProj();
// End Cross Module References
	void AMyTestPawn::StaticRegisterNativesAMyTestPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyTestPawn_NoRegister()
	{
		return AMyTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTestPawn.h" },
		{ "ModuleRelativePath", "Public/MyTestPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestPawn_Statics::ClassParams = {
		&AMyTestPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestPawn, 3530752446);
	template<> CODETESTPROJ_API UClass* StaticClass<AMyTestPawn>()
	{
		return AMyTestPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestPawn(Z_Construct_UClass_AMyTestPawn, &AMyTestPawn::StaticClass, TEXT("/Script/CodeTestProj"), TEXT("AMyTestPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
