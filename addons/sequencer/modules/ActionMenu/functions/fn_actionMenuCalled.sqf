params ["_variableName"];

diag_log format ["Called Action: %1", _variableName];

missionNamespace setVariable [_variableName, true];

[_variableName] call ZT_Sequencer_fnc_actionMenuRemove;