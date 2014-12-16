private ["_item","_classname","_require","_text","_playerUID","_itemOldCount","_itemNewCount","_cancel","_reason","_started","_finished","_animState","_isMedic","_dis","_sfx","_hasbuilditem","_tmpbuilt","_onLadder","_isWater","_require","_text","_offset","_IsNearPlot","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_findNearestPoles","_findNearestPole","_distance","_classnametmp","_ghost","_isPole","_needText","_lockable","_zheightchanged","_rotate","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display","_combinationDisplay","_zheightdirection","_abort","_isNear","_need","_needNear","_vehicle","_inVehicle","_requireplot","_objHDiff","_isLandFireDZ","_isTankTrap"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_item =	_this;
_classname =	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_text = 	getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_playerUID = 	getPlayerUID player;
_offset = 	getArray (configFile >> "CfgVehicles" >> _classname >> "offset");
if((count _offset) <= 0) then {
	_offset = [0,1.5,0];
};

_object = createVehicle [_classname, [0,0,100], [], 0, "CAN_COLLIDE"];
_object setVariable ["ObjectID", "1", true];
_object setVariable ["ObjectUID", "1", true];
_object attachto [player,_offset];

if ([] call playerActionLoop) then {
	_object setVariable ["OEMPos",(getPos _object),true];
	_object setVariable ["CharacterID",dayz_characterID,true];
	_object setVariable ["PlayerUID", _playerUID, true];

	detach _object;
	player reveal _object;
} else {
	r_interrupt = false;
	if (vehicle player == player) then {
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};

	deleteVehicle _object;
	cutText [(localize "str_epoch_player_46") , "PLAIN DOWN"];
};

sleep 5;

cutText [format["Warning: This spawned Object DOES NOT RESPAWN after server restart!"], "PLAIN DOWN"];
DZE_ActionInProgress = false;
