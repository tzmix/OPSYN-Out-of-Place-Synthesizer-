// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Receive/OscReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscReceiverComponent() {}
// Cross Module References
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics
	{
		struct _Script_OSC_eventComponentOscReceivedSignature_Parms
		{
			FName Address;
			TArray<FOscDataElemStruct> Data;
			FString SenderIp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp = { UE4CodeGen_Private::EPropertyClass::Str, "SenderIp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Data), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address = { UE4CodeGen_Private::EPropertyClass::Name, "Address", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Address), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
		{ "ToolTip", "declare the OnOscReceived event type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, "ComponentOscReceivedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_OSC_eventComponentOscReceivedSignature_Parms), Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOscReceiverComponent::StaticRegisterNativesUOscReceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister()
	{
		return UOscReceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOscReceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOscReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOscReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscReceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "OSC" },
		{ "IncludePath", "Receive/OscReceiverComponent.h" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOscReceived", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOscReceiverComponent, OnOscReceived), Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter = { UE4CodeGen_Private::EPropertyClass::Str, "AddressFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOscReceiverComponent, AddressFilter), METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscReceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscReceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscReceiverComponent_Statics::ClassParams = {
		&UOscReceiverComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscReceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscReceiverComponent, 506163239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscReceiverComponent(Z_Construct_UClass_UOscReceiverComponent, &UOscReceiverComponent::StaticClass, TEXT("/Script/OSC"), TEXT("UOscReceiverComponent"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
