// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class a2Project : ModuleRules
{
	public a2Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" , "NavigationSystem", "AIModule"});
	}
}
