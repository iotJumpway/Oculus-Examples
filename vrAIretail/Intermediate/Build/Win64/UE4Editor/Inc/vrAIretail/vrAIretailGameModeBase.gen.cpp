// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "vrAIretailGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodevrAIretailGameModeBase() {}
// Cross Module References
	VRAIRETAIL_API UClass* Z_Construct_UClass_AvrAIretailGameModeBase_NoRegister();
	VRAIRETAIL_API UClass* Z_Construct_UClass_AvrAIretailGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_vrAIretail();
// End Cross Module References
	void AvrAIretailGameModeBase::StaticRegisterNativesAvrAIretailGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AvrAIretailGameModeBase_NoRegister()
	{
		return AvrAIretailGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AvrAIretailGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_vrAIretail,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "vrAIretailGameModeBase.h" },
				{ "ModuleRelativePath", "vrAIretailGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AvrAIretailGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AvrAIretailGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AvrAIretailGameModeBase, 1722894183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AvrAIretailGameModeBase(Z_Construct_UClass_AvrAIretailGameModeBase, &AvrAIretailGameModeBase::StaticClass, TEXT("/Script/vrAIretail"), TEXT("AvrAIretailGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AvrAIretailGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
