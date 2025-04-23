params ["_module"];

private _fadeMode = _module getVariable "ZT_CinematicBorder_FadeMode";
private _duration = _module getVariable "ZT_CinematicBorder_Duration";
private _playSound = _module getVariable "ZT_CinematicBorder_PlaySound";
private _forceFirstPerson = _module getVariable "ZT_CinematicBorder_ForceFirstPerson";
private _delaySequence = _module getVariable "ZT_CinematicBorder_DelaySequence";

[_fadeMode, _duration, _playSound, _forceFirstPerson] remoteExec ["BIS_fnc_cinemaBorder", 0];

if (_delaySequence) then {
	sleep (_duration + 0.5);
};
