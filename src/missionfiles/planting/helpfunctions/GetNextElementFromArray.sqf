private ["_element","_array","_takeNext","_next"];

_element = _this select 0;
_array = _this select 1;
_takeNext = false;
_next = "undef";

{
	if (_takeNext) then {
		_next = _x;
		_takeNext = false;
	};

	if (_x == typeOf _element) then {
		_takeNext = true;
	};
} foreach _array;

_next;