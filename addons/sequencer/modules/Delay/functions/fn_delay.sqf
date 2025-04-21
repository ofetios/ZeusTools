params ["_module"];

private _delay = _module getVariable "ZT_Delay_DelayDuration";

diag_log format ["[ZT Sequencer] Delay Module - Waiting %1 seconds...", _delay];

sleep _delay;
