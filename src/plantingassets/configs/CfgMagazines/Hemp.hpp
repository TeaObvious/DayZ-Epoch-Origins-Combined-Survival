class ItemHempSeed: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Hemp Seed";
	descriptionShort = "A Bag of Hemp Seed";
	weight = 0.1;
	model = "\z\addons\plantingassets\models\hemp_seed.p3d";
	picture = "\z\addons\plantingassets\pictures\equip_hemp_seed_CA.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Hemp Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemHempSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemHempPlant: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Hemp Plant";
	descriptionShort = "A Hemp Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Hemp";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "hemp_stage1";			// TODO: model for Hemp Stage 1
		};
	};
};

class ItemKiloHemp : CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Kilo of Hemp";
	descriptionShort = "Kilo of Hemp";
	weight = 1;
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	type = 256;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_269b;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"ItemKiloHemp",1}};
		};
		class Crafting1
		{
			text = "Craft Hemp Seeds";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemHempSeed",3}};
			input[] = {{"ItemKiloHemp",1}};
		};
	};
};
