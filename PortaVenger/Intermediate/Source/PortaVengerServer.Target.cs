using UnrealBuildTool;

public class PortaVengerServerTarget : TargetRules
{
	public PortaVengerServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("PortaVenger");
	}
}
