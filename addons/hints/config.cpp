#include "script_component.hpp"
#include "BIS_AddonInfo.hpp"

class CfgPatches {
	
	class AXE_Hints {
		name = "$STR_AXE_Hints_Title";
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"axe_main"
		};
		units[] = {};
		weapons[] = {};
		author = "$STR_AXE_Hints_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = "$STR_AXE_Hints_URL";
		VERSION_CONFIG;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"

#include "gui\RscHint.hpp"
