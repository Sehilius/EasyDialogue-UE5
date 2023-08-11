// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyDialogue.h"

#define LOCTEXT_NAMESPACE "FEasyDialogueModule"

void FEasyDialogueModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FEasyDialogueModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyDialogueModule, EasyDialogue)