using UnrealBuildTool;

public class PortaVengerEditorTarget : TargetRules
{
	public PortaVengerEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("PortaVenger");
	}
}
