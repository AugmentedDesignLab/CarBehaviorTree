// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "July_15_car_test/DummyCar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyCar() {}
// Cross Module References
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_ADummyCar_NoRegister();
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_ADummyCar();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_July_15_car_test();
	JULY_15_CAR_TEST_API UFunction* Z_Construct_UFunction_ADummyCar_SetBrakeDistance();
	JULY_15_CAR_TEST_API UClass* Z_Construct_UClass_AWayPoint_NoRegister();
// End Cross Module References
	void ADummyCar::StaticRegisterNativesADummyCar()
	{
		UClass* Class = ADummyCar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBrakeDistance", &ADummyCar::execSetBrakeDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics
	{
		struct DummyCar_eventSetBrakeDistance_Parms
		{
			float a;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DummyCar_eventSetBrakeDistance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DummyCar_eventSetBrakeDistance_Parms), &Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DummyCar_eventSetBrakeDistance_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADummyCar, nullptr, "SetBrakeDistance", sizeof(DummyCar_eventSetBrakeDistance_Parms), Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADummyCar_SetBrakeDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADummyCar_SetBrakeDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADummyCar_NoRegister()
	{
		return ADummyCar::StaticClass();
	}
	struct Z_Construct_UClass_ADummyCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WayPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WayPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADummyCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_July_15_car_test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADummyCar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADummyCar_SetBrakeDistance, "SetBrakeDistance" }, // 3708478873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DummyCar.h" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_BrakeDistance_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_BrakeDistance = { "BrakeDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, BrakeDistance), METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_BrakeDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_BrakeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_WayPoint_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_WayPoint = { "WayPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, WayPoint), Z_Construct_UClass_AWayPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_WayPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_WayPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_Throttle_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, Throttle), METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_Throttle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_Throttle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_C1_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_C1 = { "C1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, C1), METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_C1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_C1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_DistanceThreshold_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_DistanceThreshold = { "DistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, DistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_DistanceThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_DistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyCar_Statics::NewProp_TravelDistance_MetaData[] = {
		{ "Category", "DummyCar" },
		{ "ModuleRelativePath", "DummyCar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADummyCar_Statics::NewProp_TravelDistance = { "TravelDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyCar, TravelDistance), METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::NewProp_TravelDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::NewProp_TravelDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADummyCar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_BrakeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_WayPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_Throttle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_C1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_DistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyCar_Statics::NewProp_TravelDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADummyCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummyCar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADummyCar_Statics::ClassParams = {
		&ADummyCar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADummyCar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADummyCar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADummyCar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADummyCar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADummyCar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADummyCar, 3901615941);
	template<> JULY_15_CAR_TEST_API UClass* StaticClass<ADummyCar>()
	{
		return ADummyCar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADummyCar(Z_Construct_UClass_ADummyCar, &ADummyCar::StaticClass, TEXT("/Script/July_15_car_test"), TEXT("ADummyCar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADummyCar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
