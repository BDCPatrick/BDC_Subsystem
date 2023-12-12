// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BDC_UI_Library : ModuleRules
{
	public BDC_UI_Library(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		var combinedPathPub = ModuleDirectory + "/" + "Public";
		var combinedPathPriv = ModuleDirectory + "/" + "Private";
		
        PublicIncludePaths.AddRange(new string[] { combinedPathPub });
        PrivateIncludePaths.AddRange(new string[] { combinedPathPriv });

        PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "UMG", "CommonUI", "CommonInput", "GameplayTags", "EnhancedInput" });
    }
}
