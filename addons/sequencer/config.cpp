class CfgPatches {
    class ZT_Sequencer {
		requiredAddons[] = {"zen_main"};
        units[] = {
			"ZT_Module_Sequencer",
			"ZT_Module_Delay",
			"ZT_Module_Teleport",
			"ZT_Module_AwaitTriggers",
			"ZT_Module_ActivateTriggers",
			"ZT_Module_FadeEffect",
			"ZT_Module_ActionMenuAdd",
			"ZT_Module_ActionMenuAwait",
		};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class ZTSequencerCategory : NO_CATEGORY {
        displayName = "[Zeus Tools] Sequencer";
    };
};

class CfgVehicles {
	class Logic;
	class Module_F : Logic {
		class ArgumentsBaseUnits {};
		class ModuleDescription {};

		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};
	};
	
	class BaseSequenceModule : Module_F {
		category = "ZTSequencerCategory";
		is3DEN = 1;
	};

	class SequencerBase : Module_F {
		category = "ZTSequencerCategory";
		is3DEN = 0;
	};
	
	#include "modules\Sequencer\CfgVehicles.hpp"
	#include "modules\Delay\CfgVehicles.hpp"
	#include "modules\Teleport\CfgVehicles.hpp"
	#include "modules\AwaitTriggers\CfgVehicles.hpp"
	#include "modules\ActivateTriggers\CfgVehicles.hpp"
	#include "modules\FadeEffect\CfgVehicles.hpp"
	#include "modules\ActionMenu\CfgVehicles.hpp"
};

#include "CfgFunctions.hpp"
