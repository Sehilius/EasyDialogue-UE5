// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyDialogue/Public/DialogueComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueComponent() {}
// Cross Module References
	EASYDIALOGUE_API UClass* Z_Construct_UClass_UDialogueComponent();
	EASYDIALOGUE_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
	EASYDIALOGUE_API UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EasyDialogue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "////virtual UFUNCTION(BlueprintImplementableEvent)\n//void OnInteractionFinished();\n" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
		{ "ToolTip", "/virtual UFUNCTION(BlueprintImplementableEvent)\nvoid OnInteractionFinished();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "DialogueBoxEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDialogueComponent::FDialogueBoxEvent_DelegateWrapper(const FScriptDelegate& DialogueBoxEvent)
{
	DialogueBoxEvent.ProcessDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UDialogueComponent::execSetDialogueBoxEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueBoxName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueBoxEvent(FDialogueBoxEvent(Z_Param_Event),Z_Param_DialogueBoxName);
		P_NATIVE_END;
	}
	struct DialogueComponent_eventBindDialogueBoxEvent_Parms
	{
		FName DialogueBoxName;
	};
	static FName NAME_UDialogueComponent_BindDialogueBoxEvent = FName(TEXT("BindDialogueBoxEvent"));
	void UDialogueComponent::BindDialogueBoxEvent(FName const& DialogueBoxName)
	{
		DialogueComponent_eventBindDialogueBoxEvent_Parms Parms;
		Parms.DialogueBoxName=DialogueBoxName;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_BindDialogueBoxEvent),&Parms);
	}
	void UDialogueComponent::StaticRegisterNativesUDialogueComponent()
	{
		UClass* Class = UDialogueComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDialogueBoxEvent", &UDialogueComponent::execSetDialogueBoxEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBoxName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueBoxName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::NewProp_DialogueBoxName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::NewProp_DialogueBoxName = { "DialogueBoxName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueComponent_eventBindDialogueBoxEvent_Parms, DialogueBoxName), METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::NewProp_DialogueBoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::NewProp_DialogueBoxName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::NewProp_DialogueBoxName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Binding" },
		{ "Comment", "//void SetDialogueBoxEvent_Implementation();\n" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
		{ "ToolTip", "void SetDialogueBoxEvent_Implementation();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "BindDialogueBoxEvent", nullptr, nullptr, sizeof(DialogueComponent_eventBindDialogueBoxEvent_Parms), Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics
	{
		struct DialogueComponent_eventSetDialogueBoxEvent_Parms
		{
			FScriptDelegate Event;
			FName DialogueBoxName;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueBoxName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueComponent_eventSetDialogueBoxEvent_Parms, Event), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3924757805
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::NewProp_DialogueBoxName = { "DialogueBoxName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueComponent_eventSetDialogueBoxEvent_Parms, DialogueBoxName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::NewProp_DialogueBoxName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Binding" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "SetDialogueBoxEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::DialogueComponent_eventSetDialogueBoxEvent_Parms), Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueComponent);
	UClass* Z_Construct_UClass_UDialogueComponent_NoRegister()
	{
		return UDialogueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBoxEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DialogueBoxEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueComponent_BindDialogueBoxEvent, "BindDialogueBoxEvent" }, // 2656222224
		{ &Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature, "DialogueBoxEvent__DelegateSignature" }, // 3924757805
		{ &Z_Construct_UFunction_UDialogueComponent_SetDialogueBoxEvent, "SetDialogueBoxEvent" }, // 3777723191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueBoxEvent_MetaData[] = {
		{ "Category", "Event Binding" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueBoxEvent = { "DialogueBoxEvent", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueComponent, DialogueBoxEvent), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueBoxEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueBoxEvent_MetaData)) }; // 3924757805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueBoxEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponent_Statics::ClassParams = {
		&UDialogueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueComponent()
	{
		if (!Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton, Z_Construct_UClass_UDialogueComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton;
	}
	template<> EASYDIALOGUE_API UClass* StaticClass<UDialogueComponent>()
	{
		return UDialogueComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueComponent);
	UDialogueComponent::~UDialogueComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UNI_PluginExports_New_for_Portfolio_EasyDialogue_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UNI_PluginExports_New_for_Portfolio_EasyDialogue_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueComponent, UDialogueComponent::StaticClass, TEXT("UDialogueComponent"), &Z_Registration_Info_UClass_UDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueComponent), 2124973721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UNI_PluginExports_New_for_Portfolio_EasyDialogue_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueComponent_h_2165546714(TEXT("/Script/EasyDialogue"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UNI_PluginExports_New_for_Portfolio_EasyDialogue_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UNI_PluginExports_New_for_Portfolio_EasyDialogue_HostProject_Plugins_EasyDialogue_Source_EasyDialogue_Public_DialogueComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
