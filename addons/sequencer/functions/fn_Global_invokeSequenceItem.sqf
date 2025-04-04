params ["_module"];

private _type = typeOf _module;
private _config = configFile >> "CfgVehicles" >> _type;

// Look up execution function of the module
private _fnName = getText (_config >> "ZT_executionFunction");

diag_log format ["[ZT Sequencer] Invoking function: %1", _fnName];

[_module] call (missionNamespace getVariable _fnName);

// find any trigger named "zt_activate" and activate it (for vanilla/modded modules that we cannot control)
_triggers = [_module] call ZT_Sequencer_fnc_Global_getSyncedTriggers;

diag_log format ["[ZT Sequencer] triggers: %1", _triggers];


// trigger all zt_activate triggers
{
    if (_x isKindOf "EmptyDetector" && {str _x find "zt_activate" > -1}) then {
        _x setPosASL getPosASL player;
        _x setTriggerActivation ["ANY", "PRESENT", true];
        diag_log format ["[ZT Sequencer] Activated trigger: %1", _x];
    };
} forEach synchronizedObjects _module;
