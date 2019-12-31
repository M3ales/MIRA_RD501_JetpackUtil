params["_target"];
//simulate opening arsenal
_target setVariable ["RD501_do_energy_recharge",false,true];
//close it
[_target] call rd501_jumppack_fnc_arsenal_closed;