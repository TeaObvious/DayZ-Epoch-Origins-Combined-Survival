class Default;	// External class reference
class ItemCore;	// External class reference

class ItemHose : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_51;
	model = "\origins_pack\items\item_hose.p3d";
	picture = "\origins_pack\items\textures\item_hose_ui.paa";
	descriptionShort = $STR_EQUIP_DESC_51;
};
class ItemTow : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_52;
	model = "\origins_pack\items\item_tow.p3d";
	picture = "\origins_pack\items\textures\item_tow_ui_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_52;
};
class ItemRope : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_58;
	model = "\origins_pack\items\item_rope.p3d";
	picture = "\origins_pack\items\textures\ui_rope_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_58;
};
class ItemEILSCT : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_60;
	model = "\origins_pack\items\item_uncoder.p3d";
	picture = "\origins_pack\items\textures\ui_uncoder_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_60;
};
class ItemEIL : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_53;
	model = "\origins_pack\items\item_decoder.p3d";
	picture = "\origins_pack\items\textures\item_decoder_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_53;
};
class ItemPager : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_121;
	model = "\origins_pack\items\item_pager.p3d";
	picture = "\origins_pack\items\textures\item_pager_ui.paa";
	descriptionShort = $STR_EQUIP_DESC_121;
};
class ItemWTalkie : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_59;
	model = "\origins_pack\items\ori_walkietalkie.p3d";
	picture = "\origins_pack\items\walkie_ico_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_59;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_WTALKIE;
			script = ";[_id,'Wtalkie'] call fnc_use_item";
		};
	};
};
class ItemPickaxe : ItemCore {
	scope = public;
	displayName = $STR_PICKAXE;
	model = "\origins_pack\items\item_pickaxe.p3d";
	picture = "\origins_pack\items\textures\item_pickaxe_ui.paa";
	descriptionShort = $STR_PICKAXE_DESC;
	
	class ItemActions {
		class Use {
			text = $STR_PICKAXE_USE;
			script = ";[_id,'chopWood3'] call fnc_use_item";
		};
	};
};
class ItemSaw : ItemCore {
	scope = public;
	displayName = $STR_SAW;
	model = "\origins_pack\items\item_saw.p3d";
	picture = "\origins_pack\items\textures\item_saw_ui.paa";
	descriptionShort = $STR_SAW_DESC;
	class ItemActions {
		class Use2 {
			text = $STR_SAW_USE2;
			script = ";[_id,'sawWood2'] call fnc_use_item";
		};
		class Use1 {
			text = $STR_SAW_USE1;
			script = ";[_id,'sawWood1'] call fnc_use_item";
		};
	};
};
class ItemHammer : ItemCore {
	scope = public;
	displayName = $STR_HAMMER;
	model = "\origins_pack\items\item_hammer.p3d";
	picture = "\origins_pack\items\textures\item_hammer_ui.paa";
	descriptionShort = $STR_HAMMER_DESC;
	class ItemActions {
		class Use {
			text = $STR_HAMMER_USE;
			script = ";[_id,'pHamm4'] call fnc_use_item";
		};
	};
};
class ItemPliers : ItemCore {
	scope = public;
	displayName = $STR_PLIERS;
	model = "\origins_pack\items\item_pliers.p3d";
	picture = "\origins_pack\items\textures\item_pliers_ui.paa";
	descriptionShort = $STR_PLIERS_DESC;
	class ItemActions {
		class Use {
			text = $STR_PLIERS_USE;
			script = ";[_id,'pPliers5'] call fnc_use_item";
		};
	};
};

class ItemToolbox_b : ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_b_2;
	picture = "\origins_pack\items\brokenitems\equip_toolbox_b_ca.paa";
};
class ItemMap_b : ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_b_7;
	picture = "\origins_pack\items\brokenitems\gear_picture_map_b_ca.paa";
};
class ItemCompass_b : ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_b_8;
	picture = "\origins_pack\items\brokenitems\gear_picture_compass_b_ca.paa";
};
class ItemWatch_b : ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_b_9;
	picture = "\origins_pack\items\brokenitems\gear_picture_watch_b_ca.paa";
};
class ItemGPS_b : ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_b_10;
	picture = "\origins_pack\items\brokenitems\gear_picture_gps_b_ca.paa";
};
class ItemEtool_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_1;
	picture = "\origins_pack\items\brokenitems\equip_etool_b_ca.paa";
};
class ItemHose_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_11;
	picture = "\origins_pack\items\brokenitems\item_hose_b_ui.paa";
};
class ItemTow_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_12;
	picture = "\origins_pack\items\brokenitems\item_tow_b_ui_ca.paa";
};
class ItemRope_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_13;
	picture = "\origins_pack\items\brokenitems\ui_rope_b_ca.paa";
};
class ItemEILSCT_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_14;
	picture = "\origins_pack\items\brokenitems\ui_uncoder_b_ca.paa";
};
class ItemEIL_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_15;
	picture = "\origins_pack\items\brokenitems\item_decoder_b_ca.paa";
};
class ItemPager_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_16;
	picture = "\origins_pack\items\brokenitems\item_pager_b_ui.paa";
};
class ItemWTalkie_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_17;
	picture = "\origins_pack\items\brokenitems\walkie_ico_b_ca.paa";
};
class ItemMatchbox_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_3;
	picture = "\origins_pack\items\brokenitems\equip_matchbox_b_ca.paa";
};
class ItemPickaxe_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_18;
	picture = "\origins_pack\items\brokenitems\item_pickaxe_b_ui.paa";
};
class ItemSaw_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_19;
	picture = "\origins_pack\items\brokenitems\item_saw_b_ui.paa";
};
class ItemHammer_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_20;
	picture = "\origins_pack\items\brokenitems\item_hammer_b_ui.paa";
};
class ItemPliers_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_21;
	picture = "\origins_pack\items\brokenitems\item_pliers_b_ui.paa";
};
class ItemHatchet_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_22;
	picture = "\origins_pack\items\brokenitems\equip_hatchet_b_CA.paa";
};
class ItemKnife_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_4;
	picture = "\origins_pack\items\brokenitems\equip_knife_b_ca.paa";
};
class ItemFlashlight_b : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_b_5;
	picture = "\origins_pack\items\brokenitems\equip_flashlight_b_ca.paa";
};
class ItemFlashlightRed_b : ItemCore {
	scope = public;
	picture = "\origins_pack\items\brokenitems\equip_flashlight_mil_b_ca.paa";
	displayName = $STR_EQUIP_NAME_b_6;
};


