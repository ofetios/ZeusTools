params ["_module"];

private _overcast = _module getVariable ["ZT_Weather_Overcast", -1];
private _rain = _module getVariable ["ZT_Weather_Rain", -1];
private _fogValue = _module getVariable ["ZT_Weather_FogValue", -1];
private _fogDecay = _module getVariable ["ZT_Weather_FogDecay", -1];
private _fogBase = _module getVariable ["ZT_Weather_FogBase", -1];
private _windStr = _module getVariable ["ZT_Weather_WindStrength", 0];
private _windDir = _module getVariable ["ZT_Weather_WindDirection", 0];
private _duration = _module getVariable ["ZT_Weather_Duration", 120];

// Get current weather status
private _currentOvercast = overcast;
private _currentFog = fogParams; // should be [fogValue, fogDecay, fogBase]

if (_overcast != -1) then { 
	["_duration", "_overcast"] remoteExec ["setOvercast", 0];
};

// Only apply rain if overcast is at least 0.7 (required by the setRain command)
// TODO: Warn user overcast needs to be 0.7 or over
if (_rain != -1) then {
	if (_currentOvercast >= 0.7) then {
		_duration setRain _rain;
		["_duration", "_rain"] remoteExec ["setRain", 0];
	};
};

// Determine fog params to apply — fallback to current values if -1
private _finalFogValue = if (_fogValue == -1) then {_currentFog select 0} else {_fogValue};
private _finalFogDecay = if (_fogDecay == -1) then {_currentFog select 1} else {_fogDecay};
private _finalFogBase  = if (_fogBase  == -1) then {_currentFog select 2} else {_fogBase};

_duration setFog [_finalFogValue, _finalFogDecay, _finalFogBase];
["_duration", "_finalFogValue", "_finalFogDecay", "_finalFogBase"] remoteExec ["setFog", 0];

// TODO: don't change wind strength or direction unless specified

if (_windStr != 0) then {
	["_duration", "_windStr"] remoteExec ["setWindStr", 0];
	
};

if (_windDir != 0) then {
	["_duration", "_windDir"] remoteExec ["setWindDir", 0];
};
