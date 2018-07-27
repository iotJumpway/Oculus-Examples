// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TOA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOA() {}
// Cross Module References
	VRAIRETAIL_API UClass* Z_Construct_UClass_ATOA_NoRegister();
	VRAIRETAIL_API UClass* Z_Construct_UClass_ATOA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_vrAIretail();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATOA::StaticRegisterNativesATOA()
	{
	}
	UClass* Z_Construct_UClass_ATOA_NoRegister()
	{
		return ATOA::StaticClass();
	}
	UClass* Z_Construct_UClass_ATOA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_vrAIretail,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TOA.h" },
				{ "ModuleRelativePath", "TOA.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TOA.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollValue = { UE4CodeGen_Private::EPropertyClass::Float, "RollValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATOA, RollValue), METADATA_PARAMS(NewProp_RollValue_MetaData, ARRAY_COUNT(NewProp_RollValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TOA.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawValue = { UE4CodeGen_Private::EPropertyClass::Float, "YawValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATOA, YawValue), METADATA_PARAMS(NewProp_YawValue_MetaData, ARRAY_COUNT(NewProp_YawValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TOA.h" },
				{ "ToolTip", "declare our float variables" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchValue = { UE4CodeGen_Private::EPropertyClass::Float, "PitchValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATOA, PitchValue), METADATA_PARAMS(NewProp_PitchValue_MetaData, ARRAY_COUNT(NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TOAMesh_MetaData[] = {
				{ "Category", "TOA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TOA.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TOAMesh = { UE4CodeGen_Private::EPropertyClass::Object, "TOAMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATOA, TOAMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_TOAMesh_MetaData, ARRAY_COUNT(NewProp_TOAMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YawValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TOAMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATOA>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATOA::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATOA, 3958766584);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATOA(Z_Construct_UClass_ATOA, &ATOA::StaticClass, TEXT("/Script/vrAIretail"), TEXT("ATOA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATOA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
