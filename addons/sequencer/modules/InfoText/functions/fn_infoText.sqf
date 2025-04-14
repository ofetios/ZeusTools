params ["_module"];

private _header = _module getVariable "headerString";
private _lineOne = _module getVariable "lineOneString";
private _lineTwo = _module getVariable "lineTwoString";

[ 
 [ 
  [_header, "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>"], 
  [_lineOne, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>"], 
  [_lineTwo, "<t align = 'center' shadow = '1' size = '1.0'>%1</t>", 15] 
 ],  
 safeZoneH/2, safeZoneY + safeZoneH/1.4
] spawn BIS_fnc_typeText;