params ["_module"];

private _header = _module getVariable "ZT_InfoText_Header";
private _lineOne = _module getVariable "ZT_InfoText_LineOne";
private _lineTwo = _module getVariable "ZT_InfoText_LineTwo";
private _type = _module getVariable "ZT_InfoText_Type";

private _delay = _module getVariable "ZT_InfoText_Delay";

_delay = _delay / 15; // slider only goes from 0 to 1 min, so we consider 1 in slider as 0.0666 character delay

if (_type == 0) then {
	[ 
		[ 
			[_header, "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>"], 
			[_lineOne, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>"], 
			[_lineTwo, "<t align = 'center' shadow = '1' size = '1.0'>%1</t>", 15] 
		],  
		safeZoneH/2, safeZoneY + safeZoneH/1.4,
		"<t>%1</t>", // default _rootFormat, required so _delay gets to param 4
		_delay
	] remoteExec ["ZT_Sequencer_fnc_typeText", 0]
} else {
	[_header, _lineOne, _lineTwo] remoteExec ["BIS_fnc_infoText", 0];
}
