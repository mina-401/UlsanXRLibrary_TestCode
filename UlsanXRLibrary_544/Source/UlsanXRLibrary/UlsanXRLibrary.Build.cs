// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UlsanXRLibrary : ModuleRules
{
    public UlsanXRLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
              new string[] {
        ModuleDirectory,  // ���� ��� ���͸� ����
        System.IO.Path.Combine(ModuleDirectory, "Global") // Global ���� �߰�
              }
          );

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine",
            "InputCore", "EnhancedInput",
            "UMG",
            "Sockets", "Networking","OnlineSubsystem","OnlineSubsystemNull","OnlineSubsystemUtils"
        });

  
    }
}
