#include "script_component.hpp"
#include "BIS_AddonInfo.hpp"

class CfgPatches {
	
	class AXE_Medical {
		name = "$STR_AXE_Medical_Title";
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"axe_common"
		};
		units[] = {};
		weapons[] = {};
		author = "$STR_AXE_Medical_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = "$STR_AXE_Medical_URL";
		VERSION_CONFIG;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
