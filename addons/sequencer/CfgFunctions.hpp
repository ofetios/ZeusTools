
class CfgFunctions {
    class ZT_Sequencer {
        #include "modules\Teleport\CfgFunctions.hpp"
        #include "modules\Delay\CfgFunctions.hpp"
        #include "modules\AwaitTriggers\CfgFunctions.hpp"
        #include "modules\ActivateTriggers\CfgFunctions.hpp"
		#include "modules\Sequencer\CfgFunctions.hpp"
		#include "modules\FadeEffect\CfgFunctions.hpp"
		#include "modules\ActionMenu\CfgFunctions.hpp"
		#include "modules\InfoText\CfgFunctions.hpp"
		#include "modules\CinematicBorder\CfgFunctions.hpp"
		#include "modules\Weather\CfgFunctions.hpp"

        class Global {
            file = "z\ZT\Sequencer\functions";
            class Global_getSyncedTriggers {};
            class Global_getSyncedForeignModules {};
            class Global_getSyncedSequenceModules {};
            class Global_getSyncedModules {};
            class Global_waitUntilTriggers {};
            class Global_ActivateTriggers {};
            class Global_buildDirectedGraph {};
            class Global_invokeSequenceItem {};
        };
    };
};