class CfgVehicles {
	class Logic;
	class Module_F : Logic {
		class ArgumentsBaseUnits {};
		class ModuleDescription {};
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
	#include "modules\InfoText\CfgVehicles.hpp"
	#include "modules\CinematicBorder\CfgVehicles.hpp"
	#include "modules\Weather\CfgVehicles.hpp"
	#include "modules\CustomScript\CfgVehicles.hpp"
};
