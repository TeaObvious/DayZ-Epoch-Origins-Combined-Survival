private ["_item","_classname","_require","_text","_playerUID","_itemOldCount","_itemNewCount","_cancel","_reason","_started","_finished","_animState","_isMedic","_dis","_sfx","_hasbuilditem","_tmpbuilt","_onLadder","_isWater","_require","_text","_offset","_IsNearPlot","_isOk","_location1","_location2","_counter","_limit","_proceed","_num_removed","_position","_object","_canBuildOnPlot","_friendlies","_nearestPole","_ownerID","_findNearestPoles","_findNearestPole","_distance","_classnametmp","_ghost","_isPole","_needText","_lockable","_zheightchanged","_rotate","_combination","_zheightdirection","_abort","_isNear","_need","_needNear","_vehicle","_inVehicle","_requireplot","_objHDiff","_isLandFireDZ","_isTankTrap"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;
_limit = 3;

_object = _this;
_object setVehicleLock "LOCKED";

_classname = typeOf _object;
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

_curStage = _object getVariable ["buildStage", 0];
_curStageText = format["Stage%1",_curStage];
_nextStage = _curStage + 1;
_nextStageText = format["Stage%1",_nextStage];
_object setVariable ["buildStage",_nextStage,true];

diag_log format["%1 upgrade from %2 to %3", _classname, _curStageText, _nextStageText];

if (_curStage > 0 && isClass (configFile >> "CfgBuildingReceipt" >> _classname)) then {
	_curlockable = getNumber (configFile >> "CfgBuildingReceipt" >> _classname >> _curStageText >> "lockable");
	_nextlockable = getNumber (configFile >> "CfgBuildingReceipt" >> _classname >> _nextStageText >> "lockable");
	_combination = "";
	diag_log format["lockable: %1 -> %2", _curlockable, _nextlockable];
	if (_curlockable != _nextlockable) then {
		_round = 0;
		_prevNumber = 0;

		while {_round < _nextlockable} do {
			_tmp = floor(random 10);
			// prevent multiple same numbers like 666 and leading zero
			if (_tmp != _prevNumber) then {
				_prevNumber = _tmp;
				_combination = _combination + str(_prevNumber);
				_round = _round + 1;
			};
		};

		dayz_combination = _combination;

		/*
		_deagOK = createDialog "KeypadHouse";
		waitUntil { !dialog };
		if (CODE != "") then {
			_object setVariable ["CharacterID",dayz_characterID,true];
			_passUch = [CODEINPUT,CODE] call _chePsw;
		} else {
			exitWith {DZE_ActionInProgress = false; cutText ["Your Code cannot be Empty" , "PLAIN DOWN"]; };
		};
		*/
	};

	_stageMaterials = getArray (configFile >> "CfgBuildingReceipt" >> _classname >> _nextStageText >> "stageMaterials");
	_animationStates = getArray (configFile >> "CfgBuildingReceipt" >> _classname >> _nextStageText >> "animationStates");
	_isOK = [[_object], _stageMaterials] call object_hasMaterial;
	
	diag_log format["%1 -> %2", _isOK, _stageMaterials];
	
	if (_isOK) then {
		_proceed = [_text, _limit] call player_doActionLoop;
		if (_proceed) then {
			/* does only work on units
			{
				//_removed = [_object,(_x select 0),(_x select 1)] call BIS_fnc_invRemove;
				
				diag_log format["Removing %2 times %1",(_x select 0),(_x select 1)];
			} forEach _stageMaterials;
			*/
			[_object,_stageMaterials] call object_removeItems;
			
			{
				_object animate _x;
			} forEach _animationStates;

			cutText [format["You have upgraded %1 to Stage %2",_text,_nextStage], "PLAIN DOWN"];
			/*
			we need something like PVDZE_obj_Swap for setting new owners
			*/
			if (_curlockable != _nextlockable) then {
				PVDZE_veh_Update = [_object,"changeCharacterID",_combination,player];
				publicVariableServer "PVDZE_veh_Update";
				sleep 5;
				cutText [format[(localize "str_epoch_player_140"),_combination,_text], "PLAIN DOWN", 5]; //display new combination
			} else {
				PVDZE_veh_Update = [_object,"all"];
				publicVariableServer "PVDZE_veh_Update";
			};
		} else {
			cutText [(localize "str_epoch_player_46") , "PLAIN DOWN"];
			_object setVariable ["buildStage",_curStage,true];
		};
	} else {
		cutText ["You are missing some materials", "PLAIN DOWN"];
		_object setVariable ["buildStage",_curStage,true];
	};
} else {
	cutText ["You cannot upgrade this Object", "PLAIN DOWN"];
	_object setVariable ["buildStage",_curStage,true];
};

_object setVehicleLock "UNLOCKED";
DZE_ActionInProgress = false;