class ItemPumpkinSeed: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Pumpkin Seed";
	descriptionShort = "A Bag of Pumpkin Seed";
	weight = 0.1;
	model = "\z\addons\plantingassets\models\pumpkin_seed.p3d";
	picture = "\z\addons\plantingassets\pictures\equip_pumpkin_seed_CA.paa";
	type = 256;
	class ItemActions {
		class Crafting
		{
			text = "Craft Pumpkin Plant";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"ItemKnife"};
			output[] = {{"ItemPumpkinPlant",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"ItemPumpkinSeed",1},{"ItemFertilizer",1},{"ItemWaterbottle",1}};
		};
	};
};

class ItemPumpkinPlant: CA_Magazine {
	scope = 2;
	count = 1;
	displayName = "Pumpkin Plant";
	descriptionShort = "A Pumpkin Plant";
	weight = 0.1;
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	type = 256;
	class ItemActions {
		class Build {
			text = "Plant Pumpkin";
			script = "spawn player_build;";
			require[] = {"ItemEtool"};
			create = "pumpkin_stage1";			// TODO: model for Pumpkin Stage 1
		};
	};
};
