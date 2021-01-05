// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CustomAIEngine : ModuleRules
{
	public CustomAIEngine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
