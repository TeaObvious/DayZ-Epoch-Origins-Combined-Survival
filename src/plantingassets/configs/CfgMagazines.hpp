class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class ItemFertilizer: CA_Magazine {
		scope = 2;
		count = 1;
		displayName = "Fertilizer";
		descriptionShort = "Fertilizer";
		weight = 0.1;
		model = "\z\addons\plantingassets\models\fertilizer.p3d";
		picture = "\z\addons\plantingassets\pictures\equip_fertilizer_CA.paa";
		type = 256;
	};

	class ItemUnknownSeed: CA_Magazine {
		scope = 2;
		count = 1;
		displayName = "Unknown Seed";
		descriptionShort = "A Bag of Unknown Seed";
		weight = 0.1;
		//model = "\z\addons\plantingassets\models\unknown_seed.p3d";
		//picture = "\z\addons\plantingassets\pictures\equip_unknown_seed_CA.paa";
		model = "\z\addons\dayz_epoch\models\doc_child1.p3d";	// TODO: model + icon
		picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
		type = 256;
		class ItemActions {
			class Crafting {
				text = "Examine Seed";
				script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {};
				randomOutput = 1;
				output[] = {{"FoodSunFlowerSeed",1},{"ItemPumpkinSeed",1},{"ItemHempSeed",1},{"ItemPoppySeed",1},{"ItemWheatSeed",1}};
				input[] = {{"ItemUnknownSeed",1}};
			};
		};
	};

	#include "CfgMagazines\Hemp.hpp"
	#include "CfgMagazines\Poppy.hpp"
	#include "CfgMagazines\Pumpkin.hpp"
	#include "CfgMagazines\Wheat.hpp"
};
