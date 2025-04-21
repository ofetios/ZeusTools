params ["_module"];

private _unitsString = _module getVariable "ZT_Teleport_Units";
private _targetsString = _module getVariable "ZT_Teleport_Targets";


private _units = [_unitsString] call ZT_Sequencer_fnc_teleport_parse_units;
private _targets = [_targetsString] call ZT_Sequencer_fnc_teleport_parse_targets;


diag_log format ["Teleport Units: %1", _units];
diag_log format ["Teleport Targets: %1", _targets];


{
    private _unit = _x;
    
	_unit disableAI "MOVE";     // Block any formation move logic
	_unit disableAI "PATH";
	_unit stop true;            // Force them to stop
	_unit setPosASL (_targets select 0);
	_unit setVelocity [0,0,0];  // Ensure no carryover velocity
} forEach _units;

// Re-enable AI after a short delay
sleep 1;
{
    private _unit = _x;

	_unit enableAI "MOVE";
	_unit enableAI "PATH";
	_unit stop false;
} forEach _units;