// Copyright Epic Games, Inc. All Rights Reserved.

#include "BDC_UI_Library.h"

#define LOCTEXT_NAMESPACE "FBDC_UI_LibraryModule"

void FBDC_UI_LibraryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FBDC_UI_LibraryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBDC_UI_LibraryModule, BDC_UI_Library)