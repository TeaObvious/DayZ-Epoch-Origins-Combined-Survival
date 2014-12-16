private["_isOk","_objectList","_materialList","_objectInventory","_objectItems","_objectItemsQty","_Item","_ItemQty","_materialFound"];

_isOk = true;
_objectList = _this select 0;
_materialList = _this select 1;

// TODO: virtually combine gear of all objects in _objectList
_objectInventory = getMagazineCargo (_objectList select 0);
_objectItems = (_objectInventory select 0);
_objectItemsQty = (_objectInventory select 1);

{
	_Item = _x select 0;
	_ItemQty = _x select 1;
	
	_materialFound = false;
	{
		if(_x == _Item && (_objectItemsQty select _forEachIndex) >= _ItemQty) then { 
			_materialFound = true;
		};
	} forEach _objectItems;

	if (!_materialFound) then {
		_isOk = false;
	};
} forEach _materialList;
	
_isOk