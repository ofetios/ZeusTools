params [
	"_triggers"
];

{
    if (_x isKindOf "EmptyDetector") then {
        _x setTriggerStatements ["true", "thisTrigger", "thisTrigger"];
        diag_log format ["[ZT Sequencer] Activated trigger: %1", _x];
    };
} forEach _triggers;
