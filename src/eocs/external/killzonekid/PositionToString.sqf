KK_fnc_floatToString = {
	private "_arr";
	if (abs (_this - _this % 1) == 0) exitWith { str _this };
	_arr = toArray str abs (_this % 1);
	_arr set [0, 32];
	toString (toArray str (
		abs (_this - _this % 1) * _this / abs _this
	) + _arr - [32])
};

KK_fnc_positionToString = {
	format [
		"[%1,%2,%3]",
		_this select 0 call KK_fnc_floatToString,
		_this select 1 call KK_fnc_floatToString,
		_this select 2 call KK_fnc_floatToString
	]
};

/*
KK_fnc_floatToString = { 
	private ["_num","_rem"]; 
	_num = str _this + "."; 
	_rem = str (_this % 1); 
	(_num select [0, _num find "."]) + (_rem select [_rem find "."]) 
};

KK_fnc_positionToString = { 
	format [ "[%1,%2,%3]", _this select 0 call KK_fnc_floatToString, _this select 1 call KK_fnc_floatToString, _this select 2 call KK_fnc_floatToString ] 
};
*/