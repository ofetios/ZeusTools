params ["_module"];

private _time = _module getVariable ["time", 1];

// duration, blur and other need to be arguments
[0, "BLACK", 1, 0] call BIS_fnc_fadeEffect;
sleep 1;

private _text = if (_time != 1) then {
	format ["%1 hours later", _time];
} else {
	"1 hour later"
};

[
	[
		[_text, nil, 5]
	],
	0, safeZoneY + safeZoneH / 2
] spawn BIS_fnc_typeText;

skipTime _time;

// duration, blur and other need to be arguments
sleep 3;
[1, "BLACK", 3, 0] call BIS_fnc_fadeEffect;
