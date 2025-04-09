params ["_string"];


private _compiledString = compile _string;
_targets = call _compiledString;

private _result = [];
switch (typeName _targets) do
{
	case "ARRAY": {
		if ([_targets] call ZT_Sequencer_fnc_teleport_is_position) exitWith { _result = [_targets] };
		
		{
					
			if (typeName _x == "ARRAY" AND ([_x] call ZT_Sequencer_fnc_teleport_is_position) ) then { _result pushBack _x };
			if (typeName _x == "OBJECT") then { _result pushBack (getPosASL _x) };

		} forEach _targets;
	};

	case "OBJECT": {
		_result pushBack (getPosASL _targets);
	};
	
	default {
		_result = []
	};
};

_result;