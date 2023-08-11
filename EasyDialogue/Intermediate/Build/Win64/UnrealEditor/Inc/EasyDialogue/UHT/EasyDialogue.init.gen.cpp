// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyDialogue_init() {}
	EASYDIALOGUE_API UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyDialogue;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyDialogue()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyDialogue.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UDialogueComponent_DialogueBoxEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyDialogue",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x36D04EB5,
				0xB3B63A1A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyDialogue.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyDialogue.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyDialogue(Z_Construct_UPackage__Script_EasyDialogue, TEXT("/Script/EasyDialogue"), Z_Registration_Info_UPackage__Script_EasyDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x36D04EB5, 0xB3B63A1A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
