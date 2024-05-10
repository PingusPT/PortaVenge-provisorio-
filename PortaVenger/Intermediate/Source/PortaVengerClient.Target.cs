using UnrealBuildTool;

public class PortaVengerClientTarget : TargetRules
{
	public PortaVengerClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("PortaVenger");
	}
}
