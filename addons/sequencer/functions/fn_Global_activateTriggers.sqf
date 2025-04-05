params [
	"_triggers"
];

{
    if (_x isKindOf "EmptyDetector") then {
        _x setTriggerStatements ["true", (triggerStatements _x) select 1, (triggerStatements _x) select 2];
        diag_log format ["[ZT Sequencer] Activated trigger: %1", _x];
    };
} forEach _triggers;
