params ["_logic", "_units", "_activated"];

_logic spawn {
    params ["_logic"];

    if (!alive VIP) then {
        hint "VIP is dead!";
    } else {
        hint "VIP is still alive.";
    };

    sleep 10;

    private _syncedModules = synchronizedObjects _logic;

    {
        if (_x isKindOf "Module_F" && { _x != _logic }) then {
            [_x, [], true] call BIS_fnc_moduleExecute;
        };
    } forEach _syncedModules;
};
