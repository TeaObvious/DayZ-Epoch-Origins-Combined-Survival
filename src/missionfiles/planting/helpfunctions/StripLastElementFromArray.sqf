private ["_ori_array","_last_element","_stripped_array"];
_ori_array = _this select 0;

_last_element = (_ori_array select ((count _ori_array) - 1));
_stripped_array = _ori_array - [_last_element];

_stripped_array;