// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UlsanXRLibrary : ModuleRules
{
	public UlsanXRLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UlsanXRLibrary",
			"UlsanXRLibrary/Variant_Platforming",
			"UlsanXRLibrary/Variant_Combat",
			"UlsanXRLibrary/Variant_Combat/AI",
			"UlsanXRLibrary/Variant_SideScrolling",
			"UlsanXRLibrary/Variant_SideScrolling/Gameplay",
			"UlsanXRLibrary/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
