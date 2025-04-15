params ["_module"];

private _fadeMode = _module getVariable "fadeMode";
private _duration = _module getVariable "duration";
private _playSound = _module getVariable "playSound";
private _forceFirstPerson = _module getVariable "forceFirstPerson";
private _delaySequence = _module getVariable "delaySequence";

[_fadeMode, _duration, _playSound, _forceFirstPerson] call BIS_fnc_cinemaBorder;

if (_delaySequence) then {
	sleep (_duration + 0.5);
};
