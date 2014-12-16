class SkinBase;
class Skin_Sniper1_DZ : SkinBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_43;
	descriptionShort = $STR_EQUIP_DESC_43;
	class ItemActions {
		class Use {
			text = "$STR_EQUIP_NAME_43";
			script = ";[_id,'wearClothes'] call fnc_use_item";
		};
		class UseMake1 {
			text = "$STR_EQUIP_NAME_107";
			script = ";[_id,'mGhil6'] call fnc_use_item";
		};
		class UseMake2 {
			text = "$STR_EQUIP_NAME_108";
			script = ";[_id,'mGhil7'] call fnc_use_item";
		};
		class UseMake3 {
			text = "$STR_EQUIP_NAME_109";
			script = ";[_id,'mGhil8'] call fnc_use_item";
		};
	};
};
class Skin_Survivor2_DZ : SkinBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_45;
	descriptionShort = $STR_EQUIP_DESC_45;
};

class Skin_Sniper_Snow : SkinBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_107;
	descriptionShort = $STR_EQUIP_DESC_107;
};
class Skin_Sniper_City : SkinBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_108;
	descriptionShort = $STR_EQUIP_DESC_108;
};
class Skin_Sniper_Wood : SkinBase {
	scope = public;
	displayName = $STR_EQUIP_NAME_109;
	descriptionShort = $STR_EQUIP_DESC_109;
};