// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "July_15_car_test/WayPointSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWayPointSpawner() {}
// Cross Module References
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPointSpawner_NoRegister();
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPointSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_July_15_car_test();
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPoint_NoRegister();
// End Cross Module References
	void AWayPointSpawner::StaticRegisterNativesAWayPointSpawner()
	{
	}
	UClass* Z_Construct_UClass_AWayPointSpawner_NoRegister()
	{
		return AWayPointSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AWayPointSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WayPointRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WayPointRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWayPointSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_July_15_car_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPointSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WayPointSpawner.h" },
		{ "ModuleRelativePath", "WayPointSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPointSpawner_Statics::NewProp_WayPointRef_MetaData[] = {
		{ "Category", "WayPointSpawner" },
		{ "ModuleRelativePath", "WayPointSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWayPointSpawner_Statics::NewProp_WayPointRef = { "WayPointRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWayPointSpawner, WayPointRef), Z_Construct_UClass_AWayPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWayPointSpawner_Statics::NewProp_WayPointRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWayPointSpawner_Statics::NewProp_WayPointRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWayPointSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWayPointSpawner_Statics::NewProp_WayPointRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWayPointSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWayPointSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWayPointSpawner_Statics::ClassParams = {
		&AWayPointSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWayPointSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWayPointSpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWayPointSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWayPointSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWayPointSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWayPointSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWayPointSpawner, 3537697859);
	template<> JULY_15_CAR_TEST_API UClass* StaticClass<AWayPointSpawner>()
	{
		return AWayPointSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWayPointSpawner(Z_Construct_UClass_AWayPointSpawner, &AWayPointSpawner::StaticClass, TEXT("/Script/July_15_car_test"), TEXT("AWayPointSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWayPointSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
