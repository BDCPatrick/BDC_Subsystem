// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class BDC_UI_Library : ModuleRules
{
	public BDC_UI_Library(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Public") });
        PrivateIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Private") });

        PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "UMG", "CommonUI", "CommonInput", "GameplayTags", "EnhancedInput" });
    }
}
