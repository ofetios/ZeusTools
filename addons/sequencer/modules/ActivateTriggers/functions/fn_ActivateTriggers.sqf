params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

// If module is deactivated, just exit
if (!_activated) exitWith {};

_triggers = [_logic] call ZT_Sequencer_fnc_Global_getSyncedTriggers;
[_triggers] call ZT_Sequencer_fnc_Global_activateTriggers;