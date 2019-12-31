#include "function_macros.hpp"
params [["_target", player, [player]]];
_parachute = GVAR(jumppack_temp);
if(backpack _target == _parachute) exitWith {
	[_target] call FUNC(rechargePack);
};
if(backpack _target != "") then
{
	_chestpack = [_target] call zade_boc_fnc_chestpack;
	if(_chestpack == "") then{
			[_target] call zade_boc_fnc_actionOnChest;
			removeBackpack _target;
	}else{
		[_target] call zade_boc_fnc_actionSwap;
	};
	if(backpack _target == _parachute) exitWith{};
	_target addBackpack _parachute;
	[_target] call FUNC(rechargePack);
}else{
	_target addBackpack _parachute;
	[_target] call FUNC(rechargePack);
};