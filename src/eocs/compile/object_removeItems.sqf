private["_object","_materialList","_objectInventory","_ObjItem","_ObjItemQty","_MatItem","_MatItemQty"];

_object = _this select 0;
_materialList = _this select 1;

_objectInventory = getMagazineCargo _object;
_objectItems = (_objectInventory select 0);
_objectItemsQty = (_objectInventory select 1);

clearMagazineCargoGlobal _object;
{
	_ObjItem = _x;
	_ObjItemQty = _objectItemsQty select _forEachIndex;

	{
		_MatItem = _x select 0;
		_MatItemQty = _x select 1; 

		if(_ObjItem == _MatItem) then {
			_ObjItemQty = _ObjItemQty - _MatItemQty;
		};
	} forEach _materialList;

	if(_ObjItemQty > 0) then {
		_object addMagazineCargoGlobal [_ObjItem, _ObjItemQty];
	};
} forEach _objectItems;
