// Copyrighted by Devoted Koi 2019

using UnrealBuildTool;
using System.Collections.Generic;

public class Project_ATarget : TargetRules
{
	public Project_ATarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Project_A" } );
	}
}
