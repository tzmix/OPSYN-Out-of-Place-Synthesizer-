// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Private/OscSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscSettings() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscSettings_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	void UOscSettings::StaticRegisterNativesUOscSettings()
	{
	}
	UClass* Z_Construct_UClass_UOscSettings_NoRegister()
	{
		return UOscSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOscSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastLoopback_MetaData[];
#endif
		static void NewProp_MulticastLoopback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MulticastLoopback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SendTargets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiveFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OscSettings.h" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_SetBit(void* Obj)
	{
		((UOscSettings*)Obj)->MulticastLoopback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback = { UE4CodeGen_Private::EPropertyClass::Bool, "MulticastLoopback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOscSettings), &Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "List of the messages treated as inputs.\n\nEvery entry adds a key in the input mapping project setting.\ne.g. \"/position/x\" -> \"OSC_position_x\"" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, Inputs), METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData[] = {
		{ "Category", "Send" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "Specify the addresses (ip:port) to send messages to.\n\nAddresses can also be added at runtime with the AddSendOscTarget function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets = { UE4CodeGen_Private::EPropertyClass::Array, "SendTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, SendTargets), METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SendTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData[] = {
		{ "Category", "Receive" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "Specify the [address:]port to listen to.\n\ne.g.\n- \"8000\" listen to messages from any sender on port 8000.  [default]\n- \"224.0.0.100:8000\" listen multi-cast messages of group 224.0.0.100 on port 8000.\n- \"192.168.0.1:8000\" listen messages addressed specifically to 192.168.0.1 on port 8000, useful if there are several addresses for this machine." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiveFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, ReceiveFrom), METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscSettings_Statics::ClassParams = {
		&UOscSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A6u,
		nullptr, 0,
		Z_Construct_UClass_UOscSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscSettings, 2706813351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscSettings(Z_Construct_UClass_UOscSettings, &UOscSettings::StaticClass, TEXT("/Script/OSC"), TEXT("UOscSettings"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
