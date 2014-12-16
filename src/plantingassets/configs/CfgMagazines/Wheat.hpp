class ItemWheatSeed: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Wheat Seed";
	descriptionShort = "A Bag of Wheat Seed";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Wheat Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemWheatPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemWheatSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemWheatPlant: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Wheat Plant";
	descriptionShort = "A Wheat Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Wheat";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "wheat_stage1";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemWheatCereal: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Wheat Tears";
	descriptionShort = "Wheat Tears";
	weight = 0.1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
};
