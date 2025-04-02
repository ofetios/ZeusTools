
class CfgFunctions {
    class ZT_Sequencer {
        #include "modules\HelloWorld\CfgFunctions.hpp"
        #include "modules\HelloWorld2\CfgFunctions.hpp"
		#include "modules\Sequencer\CfgFunctions.hpp"

        class Global {
            file = "z\ZT\Sequencer\functions";
            class Global_getSyncedTriggers {};
        };
    };
};