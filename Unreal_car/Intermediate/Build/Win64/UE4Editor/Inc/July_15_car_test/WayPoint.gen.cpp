// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "July_15_car_test/WayPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWayPoint() {}
// Cross Module References
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPoint_NoRegister();
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_July_15_car_test();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AWayPoint::StaticRegisterNativesAWayPoint()
	{
	}
	UClass* Z_Construct_UClass_AWayPoint_NoRegister()
	{
		return AWayPoint::StaticClass();
	}
	struct Z_Construct_UClass_AWayPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWayPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_July_15_car_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WayPoint.h" },
		{ "ModuleRelativePath", "WayPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPoint_Statics::NewProp_Arrow_MetaData[] = {
		{ "Category", "WayPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WayPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWayPoint_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWayPoint, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWayPoint_Statics::NewProp_Arrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPoint_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "WayPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WayPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWayPoint_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWayPoint, Sphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWayPoint_Statics::NewProp_Sphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPoint_Statics::NewProp_SP_MetaData[] = {
		{ "Category", "WayPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WayPoint.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nADummyCar* CarRef;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWayPoint_Statics::NewProp_SP = { "SP", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWayPoint, SP), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWayPoint_Statics::NewProp_SP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::NewProp_SP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWayPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWayPoint_Statics::NewProp_Arrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWayPoint_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWayPoint_Statics::NewProp_SP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWayPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWayPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWayPoint_Statics::ClassParams = {
		&AWayPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWayPoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWayPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWayPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWayPoint, 4127127342);
	template<> JULY_15_CAR_TEST_API UClass* StaticClass<AWayPoint>()
	{
		return AWayPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWayPoint(Z_Construct_UClass_AWayPoint, &AWayPoint::StaticClass, TEXT("/Script/July_15_car_test"), TEXT("AWayPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWayPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
