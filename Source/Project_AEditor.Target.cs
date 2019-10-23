// Copyrighted by Devoted Koi 2019

using UnrealBuildTool;
using System.Collections.Generic;

public class Project_AEditorTarget : TargetRules
{
	public Project_AEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Project_A" } );
	}
}
