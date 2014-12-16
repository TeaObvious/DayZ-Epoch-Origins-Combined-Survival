class ItemOldFoldingBike : CA_Magazine {
	scope = public;
	count = 1;
	type = (256 * 2);
	displayName = $STR_EQUIP_NAME_FOLDING_BIKE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_FOLDING_BIKE;
	class ItemActions {
		class Build {
			text = $STR_EQUIP_NAME_FOLDING_BIKE;
			script = "spawn player_build_tempobject;";
			create = "Old_bike_TK_CIV_EP1";
		};
	};
};
class ItemOldFoldingBikePerm : CA_Magazine {
	scope = public;
	count = 1;
	type = (256 * 2);
	displayName = $STR_EQUIP_NAME_FOLDING_BIKE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_FOLDING_BIKE;
	class ItemActions {
		class Build {
			text = $STR_EQUIP_NAME_FOLDING_BIKE;
			script = "spawn player_build;";
			create = "Old_bike_TK_CIV_EP1";
		};
	};
};