params ["_logic", "_units", "_activated"];

[_logic] spawn {
    params ["_logic"];

    if (!alive VIP) then {
        hint "VIP is dead!";
    } else {
        hint "VIP is still alive.";
    };

    sleep 1;

    {
        if (_x isKindOf "Module_F" && { _x != _logic }) then {
            [_x, [], true] call BIS_fnc_moduleExecute;
        };
    } forEach synchronizedObjects _logic;
};
