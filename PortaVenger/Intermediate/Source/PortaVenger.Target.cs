using UnrealBuildTool;

public class PortaVengerTarget : TargetRules
{
	public PortaVengerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("PortaVenger");
	}
}
