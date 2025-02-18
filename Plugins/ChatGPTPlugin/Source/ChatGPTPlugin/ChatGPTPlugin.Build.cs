using System.IO;
using UnrealBuildBase;
using UnrealBuildTool;

public class ChatGPTPlugin : ModuleRules
{
    public ChatGPTPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicIncludePaths.AddRange(
            new string[] {
               // Path.Combine(Target.UEThirdPartySourceDirectory, "FBX/2020.2/include")
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                // Add private include paths if needed
            }
        );

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "HTTP",         // Add HTTP module
                "Json",         // Add Json module
                "JsonUtilities"               
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
            "EditorFramework",
            "LevelEditor",
            }
        );

       
    }
}
