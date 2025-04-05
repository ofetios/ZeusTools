params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

// If module is deactivated, just exit
if (!_activated) exitWith {};

// Recirsively build a directed graph representation of the sync train.
private _graph = [_logic, objNull, []] call ZT_Sequencer_fnc_Global_buildDirectedGraph;
diag_log format ["Whole Graph: %1", _graph];

// Start executing the sequence.
// Sequence loop:

while {(count _graph) > 0} do {

	// Pick the next module in the sequence.
	private _module = _graph select 0;
	private _children = _graph select 1;

	diag_log format ["Module: %1, Children: %2", _module, _children];

	// Run main script
	[_module] call ZT_Sequencer_fnc_Global_invokeSequenceItem;


	// TODO: Implement Branching graphs
	// Select the first child and continue down the graph

	if (count _children < 1) then {break;};

	_graph = _children select 0;
	diag_log format ["New Graph: %1", _graph];
}
