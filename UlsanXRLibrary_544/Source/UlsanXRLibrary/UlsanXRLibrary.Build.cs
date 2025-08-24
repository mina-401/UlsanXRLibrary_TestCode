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

/*        // ����� �װ� ������ #include �ϴ� v2 ��� �������θ� �߰�!
        PrivateDependencyModuleNames.AddRange(new string[] {
            "OnlineServices",      // UE::Online API ("Online/OnlineServices.h" ��)
            "OnlineServicesEOS",   // EOS provider ����� ���� ���ٸ� ����, �ƴϸ� ���� ��
            // "OnlineServicesInterface", // ���� ���ʿ� (�������̽��� �и� ������ ����)
            // "OnlineServicesCommon",    // ���� ��ƿ ����� ���� ���� �߰�
            "VoiceChat"            // IVoiceChat ��� �� �ʿ�
            // "EOSShared"           // ����� include���� ������ ���� ���ʿ�(�÷����θ� ON�̸� ��Ÿ�� �ε��)
        });
*/



        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
