/*	New Animation Name			Old Animation Name
	stupenJeden 				= stage_1
	stupenDva 					= stage_2
	stupenTri 					= stage_3
	stupen4tiri 				= stage_4
	stupenDvaSkryt 				= stage_2_hide
	povyseniJednaStupenJeden 	= upgrd_1_stage_1
	povyseniDvaStupenDruhy 		= upgrd_1_stage_2
	povyseniTriStupenTreti 		= upgrd_1_stage_3
	povyseniJednaStupen4tvrty 	= upgrd_1_stage_4
	povyseniJednaPojevitJedna 	= upgrd_1_show_1
	povyseniJednaSkrytJedna 	= upgrd_1_hide_1
*/
class CfgBuildingReceipt {
	class Bandit_Level_1_DZEOCS {
		Humanity = -2900;
		Stages = 2;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1}};
		};
		class Stage2 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0}};
		};
	};

	class Bandit_Level_2_DZEOCS {
		Humanity = -6500;
		Stages = 4;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1}};
		};
		class Stage2 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",4},{"ItemCementBag",4}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0}};
		};
	};

	class Bandit_Level_3_DZEOCS {
		Humanity = -15000;
		Stages = 8;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2},{"ItemCinderblocks",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",1}};
		};
		class Stage2 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",10}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",1}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",15},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",6},{"ItemCementBag",4},{"ItemCinderblocks",25}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage5 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2},{"ItemCinderblocks",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage6 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",10}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage7 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",15},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",0},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage8 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",6},{"ItemCementBag",4},{"ItemCinderblocks",20}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",0},{"povyseniJednaStupen4tvrty",0},{"povyseniJednaPojevitJedna",0},{"povyseniJednaSkrytJedna",1}};
		};
	};

	class Hero_Level_1_DZEOCS {
		Humanity = 2900;
		Stages = 2;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1}};
		};
		class Stage2 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0}};
		};
	};

	class Hero_Level_2_DZEOCS {
		Humanity = 6500;
		Stages = 4;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage2 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",0}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",4},{"ItemCementBag",4}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"stupenDvaSkryt",1}};
		};
	};

	class Hero_Level_3_DZEOCS {
		Humanity = 15000;
		Stages = 8;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2},{"ItemCinderblocks",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",1}};
		};
		class Stage2 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",10},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",15}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",6},{"ItemCementBag",4},{"ItemCinderblocks",25}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",1},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage5 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",15},{"PartWoodPile",25},{"PartScrap",2},{"ItemCementBag",2},{"ItemCinderblocks",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",1},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage6 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",35},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",10}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",1},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage7 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",30},{"PartWoodPile",45},{"PartScrap",4},{"ItemCementBag",4},{"ItemCinderblocks",15},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",0},{"povyseniJednaStupen4tvrty",1},{"povyseniJednaPojevitJedna",1},{"povyseniJednaSkrytJedna",0}};
		};
		class Stage8 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",55},{"PartScrap",6},{"ItemCementBag",4},{"ItemCinderblocks",20}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"povyseniJednaStupenJeden",0},{"povyseniDvaStupenDruhy",0},{"povyseniTriStupenTreti",0},{"povyseniJednaStupen4tvrty",0},{"povyseniJednaPojevitJedna",0},{"povyseniJednaSkrytJedna",1}};
		};
	};
	
	class SmallGarage_DZEOCS {
		Stages = 4;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",25},{"PartWoodPile",25},{"PartScrap",5},{"ItemCementBag",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage2 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",35},{"PartWoodPile",35},{"PartScrap",5},{"ItemCementBag",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",0}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",45},{"PartWoodPile",45},{"PartScrap",5},{"ItemCementBag",5},{"ItemBattery",1},{"ItemPin",1}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",55},{"PartWoodPile",55},{"PartScrap",5},{"ItemCementBag",5}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"stupenDvaSkryt",1}};
		};
	};

	class BigGarage_DZEOCS {
		Stages = 4;
		class Stage1 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",45},{"PartWoodPile",45},{"PartScrap",5},{"ItemCementBag",10},{"ItemCinderblocks",10}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",1},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage2 {
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",55},{"PartWoodPile",55},{"PartScrap",5},{"ItemCementBag",10},{"ItemCinderblocks",20}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",1},{"stupen4tiri",1},{"stupenDvaSkryt",0}};
		};
		class Stage3 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",65},{"PartWoodPile",65},{"PartScrap",10},{"ItemCementBag",20},{"ItemBattery",1},{"ItemPin",1},{"ItemCinderblocks",30}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",1},{"stupenDvaSkryt",1}};
		};
		class Stage4 {
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",75},{"PartWoodPile",75},{"PartScrap",10},{"ItemCementBag",20},{"ItemCinderblocks",40}};
			animationStates[] = {{"stupenJeden",0},{"stupenDva",0},{"stupenTri",0},{"stupen4tiri",0},{"stupenDvaSkryt",1}};
		};
	};
	
	class Stronghold_DZEOCS {
		Stages = 26;
		class Stage1 { //foundation
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",1},{"basnja_show_2",1},{"basnja_show_3",1},{"basnja_show_4",1},{"wall_1",1},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage2 { //first tower
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",1},{"basnja_show_3",1},{"basnja_show_4",1},{"wall_1",1},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage3 { //second tower
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",1},{"basnja_show_4",1},{"wall_1",1},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage4 { //Third tower
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",1},{"wall_1",1},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage5 { //fourth tower
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",1},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage6 { //right wall
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",1},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage7 { //left wall
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",1},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage8 { //rear wall
			lockable = 0;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",1},{"boxes_2",1},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",1},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage9 { //gate (stronghold stays save)
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15},{"ItemBattery",5},{"ItemPin",0},{"ItemJerrycanB",3},{"PartEngine",0}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",1},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage10 { //the roof
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",1},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage11 { //the fountain
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",1},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage12 { //foundation for the armory
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",1},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage13 { //wall from the armory
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",1},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage14 { //roof beams for the armory
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",1},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage15 { //roof from the armory
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",1},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage16 { //foundation for the barrack
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",1},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage17 { //walls from the barrack
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",1},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage18 { //roof beams from he barrack
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",1},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage19 { //roof from the barrack
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",1},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage20 { //foundation from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",1},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage21 { //walls from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",1},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage22 { //roof beams from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",0},{"sleep_stupen4tiri",1},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage23 { //roof from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",0},{"sleep_stupen4tiri",0},{"bar_stupenJeden",1},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage24 { //roof from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",0},{"sleep_stupen4tiri",0},{"bar_stupenJeden",0},{"bolnica_stupenJeden",1},{"chlev_stupenJeden",1}};
		};
		class Stage25 { //roof from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",0},{"sleep_stupen4tiri",0},{"bar_stupenJeden",0},{"bolnica_stupenJeden",0},{"chlev_stupenJeden",1}};
		};
		class Stage26 { //roof from the church
			lockable = 6;
			stageMaterials[] = {{"ItemRocks",120},{"PartWoodPile",300},{"PartScrap",15},{"ItemCementBag",50},{"ItemCinderblocks",15}};
			animationStates[] = {{"fundament",0},{"boxes_1",0},{"boxes_2",0},{"basnja_show_1",0},{"basnja_show_2",0},{"basnja_show_3",0},{"basnja_show_4",0},{"wall_1",0},{"wall_2",0},{"wall_3",0},{"wall_4",0},{"garageRoof",0},{"chram_stupenJeden",0},{"chram_stupenDva",0},{"chram_stupenTri",0},{"chram_stupen4tiri",0},{"sklad_stupenJeden",0},{"sklad_stupenDva",0},{"sklad_stupenTri",0},{"sklad_stupen4tiri",0},{"pumpa",0},{"sleep_stupenJeden",0},{"sleep_stupenDva",0},{"sleep_stupenTri",0},{"sleep_stupen4tiri",0},{"bar_stupenJeden",0},{"bolnica_stupenJeden",0},{"chlev_stupenJeden",0}};
		};
	};
	class Bandit_Nest_Level_1_DZEOCS {
		Stages = 2;
		class Stage1 { //foundation
			lockable = 0;
			stageMaterials[] = {{"ItemSPlanks",11},{"PartScrap",3},{"ItemCementBag",10},{"PartMetalS",3},{"ItemScrapCon",4},{"ItemScrews",2},{"PartChipB",3},{"PartAluminium",3},{"ItemLPlanks",7},{"ItemRope",1}};
			animationStates[] = {};
		};
		class Stage2 { //first level
			lockable = 0;
			stageMaterials[] = {{"ItemSPlanks",11},{"PartScrap",3},{"PartMetalS",2},{"ItemScrapCon",4},{"ItemScrews",2},{"PartChipB",2},{"PartAluminium",2},{"ItemLPlanks",5},{"ItemPin",1},{"ItemBattery",1}};
			animationStates[] = {};
		};
	};
};
