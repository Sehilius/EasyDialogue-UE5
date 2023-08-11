// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyDialogue/Public/DialogueSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSettings() {}
// Cross Module References
	EASYDIALOGUE_API UClass* Z_Construct_UClass_UDialogueSettings();
	EASYDIALOGUE_API UClass* Z_Construct_UClass_UDialogueSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyDialogue();
// End Cross Module References
	void UDialogueSettings::StaticRegisterNativesUDialogueSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueSettings);
	UClass* Z_Construct_UClass_UDialogueSettings_NoRegister()
	{
		return UDialogueSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GiveAnswerSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GiveAnswerSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnswerSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverAnswerSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastForwardEnabledSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FastForwardEnabledSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastForwardDisabledSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FastForwardDisabledSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyDialogue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::NewProp_ProceedSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueSettings_Statics::NewProp_ProceedSound = { "ProceedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueSettings, ProceedSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_ProceedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_ProceedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::NewProp_GiveAnswerSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueSettings_Statics::NewProp_GiveAnswerSound = { "GiveAnswerSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueSettings, GiveAnswerSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_GiveAnswerSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_GiveAnswerSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::NewProp_HoverAnswerSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueSettings_Statics::NewProp_HoverAnswerSound = { "HoverAnswerSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueSettings, HoverAnswerSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_HoverAnswerSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_HoverAnswerSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardEnabledSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardEnabledSound = { "FastForwardEnabledSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueSettings, FastForwardEnabledSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardEnabledSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardEnabledSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardDisabledSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/DialogueSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardDisabledSound = { "FastForwardDisabledSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueSettings, FastForwardDisabledSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardDisabledSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardDisabledSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueSettings_Statics::NewProp_ProceedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueSettings_Statics::NewProp_GiveAnswerSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueSettings_Statics::NewProp_HoverAnswerSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardEnabledSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueSettings_Statics::NewProp_FastForwardDisabledSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueSettings_Statics::ClassParams = {
		&UDialogueSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueSettings()
	{
		if (!Z_Registration_Info_UClass_UDialogueSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueSettings.OuterSingleton, Z_Construct_UClass_UDialogueSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueSettings.OuterSingleton;
	}
	template<> EASYDIALOGUE_API UClass* StaticClass<UDialogueSettings>()
	{
		return UDialogueSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSettings);
	UDialogueSettings::~UDialogueSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueSettings, UDialogueSettings::StaticClass, TEXT("UDialogueSettings"), &Z_Registration_Info_UClass_UDialogueSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueSettings), 2610974392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueSettings_h_1316312759(TEXT("/Script/EasyDialogue"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
