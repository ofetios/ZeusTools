params ["_module"];

private _variableName = _module getVariable ["ZT_ActionMenuAdd_VariableName_Await", ""];
private _actionMenuItemVariable = [_variableName] call ZT_Sequencer_fnc_actionMenuGetVariableTag;

diag_log format ["Awaiting Tag: %1", _actionMenuItemVariable];

waitUntil {
	sleep 0.2;
	missionNamespace getVariable [_actionMenuItemVariable, false];
};

diag_log format ["Tag %1 Activated", _actionMenuItemVariable];