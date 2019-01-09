// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OPSYN/OPSYNGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOPSYNGameModeBase() {}
// Cross Module References
	OPSYN_API UClass* Z_Construct_UClass_AOPSYNGameModeBase_NoRegister();
	OPSYN_API UClass* Z_Construct_UClass_AOPSYNGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OPSYN();
// End Cross Module References
	void AOPSYNGameModeBase::StaticRegisterNativesAOPSYNGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOPSYNGameModeBase_NoRegister()
	{
		return AOPSYNGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOPSYNGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOPSYNGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OPSYN,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOPSYNGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OPSYNGameModeBase.h" },
		{ "ModuleRelativePath", "OPSYNGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOPSYNGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOPSYNGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOPSYNGameModeBase_Statics::ClassParams = {
		&AOPSYNGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOPSYNGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOPSYNGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOPSYNGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOPSYNGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOPSYNGameModeBase, 1096932853);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOPSYNGameModeBase(Z_Construct_UClass_AOPSYNGameModeBase, &AOPSYNGameModeBase::StaticClass, TEXT("/Script/OPSYN"), TEXT("AOPSYNGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOPSYNGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
