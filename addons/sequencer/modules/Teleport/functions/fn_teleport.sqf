params ["_module"];

private _unitsString = _module getVariable ["units", ""];
private _targetsString = _module getVariable ["targets", ""];


private _units = [_unitsString] call ZT_Sequencer_fnc_teleport_parse_units;
private _targets = [_targetsString] call ZT_Sequencer_fnc_teleport_parse_targets;


diag_log format ["Teleport Units: %1", _units];
diag_log format ["Teleport Targets: %1", _targets];


{
	diag_log format ["Setting Unit: %1 Position to %2", _x, _targets select 0];
	_x setPosASL (_targets select 0);	
} forEach _units;