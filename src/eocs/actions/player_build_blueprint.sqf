private ["_item","_classname","_require","_text","_playerUID","_itemOldCount","_itemNewCount","_cancel","_reason","_started","_finished","_animState","_isMedic","_dis","_sfx","_hasbuilditem","_tmpbuilt","_onLadder","_isWater","_require","_text","_offset","_IsNearPlot","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_findNearestPoles","_findNearestPole","_distance","_classnametmp","_ghost","_isPole","_needText","_lockable","_zheightchanged","_rotate","_combination_1","_combination_2","_combination_3","_combination_4","_combination","_combination_1_Display","_combinationDisplay","_zheightdirection","_abort","_isNear","_need","_needNear","_vehicle","_inVehicle","_requireplot","_objHDiff","_isLandFireDZ","_isTankTrap"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_item =	_this;
_classname =	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_require =		getArray (configFile >> "cfgMagazines" >> _this >> "ItemActions" >> "Build" >> "require");
_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_playerUID = 	getPlayerUID player;
_distance = 30;

_itemOldCount = {_x == _item} count magazines player;
if (_itemOldCount == 0) exitWith {DZE_ActionInProgress = false; cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"]; };

// permanent origins building
if (isClass (configFile >> "CfgBuildingReceipt" >> _classname)) then {
	_neededObjects = [];
	_abort = false;
	{
		_foundNeededObject = objNull;
		_foundNeededObjects = nearestObjects [player, [_x], _distance];
		{
			// _objectPlayerUID = _x getVariable ["PlayerUID", 0];
			//if ((isNull _foundNeededObject) && (_objectPlayerUID == _playerUID)) then {
			if (isNull _foundNeededObject) then {
				_foundNeededObject = _x;
			};
		} forEach _foundNeededObjects;
		
		if(isNull _foundNeededObject) then {
			_abort = true;
			_reason = _x;
		} else {
			_neededObjects set [count _neededObjects, _foundNeededObject];
		};
	} forEach getArray (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "neednearby");

	if(_abort) exitWith {
		DZE_ActionInProgress = false;
		cutText [format[(localize "str_epoch_player_135"),_reason,_distance], "PLAIN DOWN"];
	};
	
	{
		_x setVehicleLock "LOCKED";
	} forEach _neededObjects;
	
	_stageMaterials = getArray (configFile >> "CfgBuildingReceipt" >> _classname >> "Stage1" >> "stageMaterials");
	_isOK = [_neededObjects, _stageMaterials] call object_hasMaterial;
	
	DZE_ActionInProgress = false;
	if (_isOK) then {
		_item call player_build;
		_itemNewCount = {_x == _item} count magazines player;
		if (_itemNewCount == _itemOldCount - 1) then {
			{
				deleteVehicle _x;
			} forEach _neededObjects;
		} else {
			{
				_x setVehicleLock "UNLOCKED";
			} forEach _neededObjects;
		};
	} else {
		cutText ["You are missing some materials", "PLAIN DOWN"];
	};
} else { // temp origins building
	DZE_ActionInProgress = false;
	_item call player_build_tempobject;
};

