if (!alive VIP) then {
    hint "VIP is dead!";
} else {
    hint "VIP is still alive.";
};

sleep 10;

// Find all synced modules (excluding the logic itself)
{
	if (_x isKindOf "Module_F" && { _x != _logic }) then {
		[_x, [], true] call BIS_fnc_moduleExecute;
	};
} forEach synchronizedObjects _logic;