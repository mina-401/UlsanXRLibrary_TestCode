// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UlsanXRLibrary : ModuleRules
{
	public UlsanXRLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicIncludePaths.AddRange(
              new string[] {
        ModuleDirectory,  // 기존 모듈 디렉터리 포함
        System.IO.Path.Combine(ModuleDirectory, "Global") // Global 폴더 추가
              }
          );

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine",
            "InputCore", "EnhancedInput",
            "UMG",
            "Sockets", "Networking","OnlineSubsystem","OnlineSubsystemNull","OnlineSubsystemUtils"
        });

/*        // 여기는 네가 실제로 #include 하는 v2 헤더 기준으로만 추가!
        PrivateDependencyModuleNames.AddRange(new string[] {
            "OnlineServices",      // UE::Online API ("Online/OnlineServices.h" 등)
            "OnlineServicesEOS",   // EOS provider 헤더를 직접 쓴다면 유지, 아니면 빼도 됨
            // "OnlineServicesInterface", // 보통 불필요 (인터페이스만 분리 참조할 때만)
            // "OnlineServicesCommon",    // 공용 유틸 헤더를 직접 쓰면 추가
            "VoiceChat"            // IVoiceChat 사용 시 필요
            // "EOSShared"           // 헤더를 include하지 않으면 보통 불필요(플러그인만 ON이면 런타임 로드됨)
        });
*/



        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
