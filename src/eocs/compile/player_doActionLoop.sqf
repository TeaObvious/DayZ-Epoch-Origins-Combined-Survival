private ["_limit","_action","_sfx","_dis","_isOk","_proceed","_counter","_finished"];
_text = "Unknown";
_limit = 3;
_action = "Medic";
_sfx = "repair";
_dis = 20;

if ((typeName(_this)) == "Array") then {
	_argc = count _this;

	if (_argc >= 1) then {
		_text = _this select 0;
	};

	if (_argc >= 2) then {
		_limit = _this select 1;
	};

	if (_argc >= 3) then {
		_action = _this select 2;
	};
	
	if (_argc >= 4) then {
		_sfx = _this select 3;
	};

	if (_argc >= 5) then {
		_dis = _this select 4;
	};
};

if ((typeName(_this)) == "Number") then {
	_limit = _this;
};

if (DZE_StaticConstructionCount > 0) then {
	_limit = DZE_StaticConstructionCount;
};



_isOk = true;
_proceed = false;
_counter = 0;

while {_isOk} do {
	[10,10] call dayz_HungerThirst;
	player playActionNow "Medic";

	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] spawn player_alertZombies;


	r_interrupt = false;
	r_doLoop = true;
	_started = false;
	_finished = false;

	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started && !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt || (player getVariable["combattimeout", 0] >= time)) then {
			r_doLoop = false;
		};
		if (DZE_cancelBuilding) exitWith {
			r_doLoop = false;
		};
		sleep 0.1;
	};
	r_doLoop = false;


	if(!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};

	if(_finished) then {
		_counter = _counter + 1;
	};

	cutText [format[(localize "str_epoch_player_139"),_text, _counter,_limit], "PLAIN DOWN"];

	if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};
};

_proceed