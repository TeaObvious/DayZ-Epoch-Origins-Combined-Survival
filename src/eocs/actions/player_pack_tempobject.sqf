private ["_object","_classname","_item","_actionID","_proceed","_itemAdded"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_object = _this select 0;
_classname = typeOf _object;
_text = 	getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_item = _object getVariable ["SpawnItem", ""];
_actionID = _this select 2;

if (_item != "") then {
	_limit = 2;
	if (isNumber (configFile >> "CfgVehicles" >> _classname >> "constructioncount")) then {
		_limit = getNumber(configFile >> "CfgVehicles" >> _classname >> "constructioncount");
	};

	_object removeAction _actionID;
	_object setVehicleLock "LOCKED";
	_proceed = [_text, _limit] call player_doActionLoop;

	if (_proceed) then {
		_itemAdded = ([player,_item] call BIS_fnc_invAdd);
		if(_itemAdded) then {
			deleteVehicle _object;
		} else {
			_object setVehicleLock "UNLOCKED";
			_object addAction ["Pack Object", "\z\addons\eocs\actions\player_pack_tempobject.sqf", [], 0, false, true, "","vehicle player == player"];
			cutText [(localize "str_epoch_player_107"), "PLAIN DOWN"];
		};
	} else {
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		_object setVehicleLock "UNLOCKED";
		_object addAction ["Pack Object", "\z\addons\eocs\actions\player_pack_tempobject.sqf", [], 0, false, true, "","vehicle player == player"];
		cutText [(localize "str_epoch_player_46") , "PLAIN DOWN"];
	};
};

DZE_ActionInProgress = false;
