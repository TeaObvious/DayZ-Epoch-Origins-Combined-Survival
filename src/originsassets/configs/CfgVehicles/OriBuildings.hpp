class Land_A_tent;
class CementMixer : Land_A_tent {
	vehicleClass = "Survival";
	displayName = $STR_CEMENT_MIXER;
	armor = 45;
	model = "\origins_pack\items\item_cementMixer.p3d";
	transportMaxMagazines = 500;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
};
class TentStorageR : Land_A_tent {
	vehicleClass = "Survival";
	displayName = $STR_EQUIP_NAME_20;
	armor = 6;
	model = "\origins_pack\items\items_tent_u.p3d";
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
};
class BCrane : Land_A_tent {
	vehicleClass = "Survival";
	displayName = $STR_CRANE;
	armor = 45;
	model = "\origins_pack\items\item_crane.p3d";
	transportMaxMagazines = 500;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;

	class AnimationSources
	{
		class vaha
		{
			source = "user";
			animPeriod = 10;
			initPhase = 0;
		};
		class hak: vaha {};
		class kola: vaha {};
	};
};

class Uroven1DrevenaBudka;
class Bandit_Level_1_DZEOCS_Dummy : Uroven1DrevenaBudka { scope=1; class UserActions; };
class Bandit_Level_1_DZEOCS: Bandit_Level_1_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="this animate [""vratka"", 1]; this animate [""dvereJednaA"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="this animate [""vratka"", 0]; this animate [""dvereJednaA"", 0]";
		};
	};
};

class Uroven2KladaDomek;
class Bandit_Level_2_DZEOCS_Dummy : Uroven2KladaDomek { scope=1; class UserActions; };
class Bandit_Level_2_DZEOCS: Bandit_Level_2_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=7.5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupen4tiri"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="this animate [""vratkaDva"", 1]; this animate [""dvereJedna"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="this animate [""vratkaDva"", 0]; this animate [""dvereJedna"", 0]";
		};
	};
};


class Uroven3DrevenyDomek;
class Bandit_Level_3_DZEOCS_Dummy : Uroven3DrevenyDomek { scope=1; class UserActions; };
class Bandit_Level_3_DZEOCS: Bandit_Level_3_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="this animate [""vratkaDva"", 1]; this animate [""vrataGaraz2"", 1]; this animate [""dvereGarazLeve"", 1]; this animate [""dvereGarazPrave"", 1]; this animate [""dvereDvaB"", 1]; this animate [""dvereJedna"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="this animate [""vratkaDva"", 0]; this animate [""vrataGaraz2"", 0]; this animate [""dvereGarazLeve"", 0]; this animate [""dvereGarazPrave"", 0]; this animate [""dvereDvaB"", 0]; this animate [""dvereJedna"", 0]";
		};
	};
};

class Uroven1VelkaBudka;
class Hero_Level_1_DZEOCS_Dummy : Uroven1VelkaBudka { scope=1; class UserActions; };
class Hero_Level_1_DZEOCS: Hero_Level_1_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="this animate [""vratka"", 1]; this animate [""dvereJednaA"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="this animate [""vratka"", 0]; this animate [""dvereJednaA"", 0]";
		};
	};
};
class Uroven2MalyDomek;
class Hero_Level_2_DZEOCS_Dummy : Uroven2MalyDomek { scope=1; class UserActions; };
class Hero_Level_2_DZEOCS: Hero_Level_2_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupen4tiri"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="this animate [""vratkaDva"", 1]; this animate [""dvereJedna"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=5;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="this animate [""vratkaDva"", 0]; this animate [""dvereJedna"", 0]";
		};
	};
};

class Uroven3VelkyDomek;
class Hero_Level_3_DZEOCS_Dummy : Uroven3VelkyDomek { scope=1; class UserActions; };
class Hero_Level_3_DZEOCS: Hero_Level_3_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="this animate [""vratka"", 1]; this animate [""vrataGaraz"", 1]; this animate [""dvereGarazLeve"", 1]; this animate [""dvereGarazPrave"", 1]; this animate [""dvereDva"", 1]; this animate [""dvereJednaA"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="this animate [""vratka"", 0]; this animate [""vrataGaraz"", 0]; this animate [""dvereGarazLeve"", 0]; this animate [""dvereGarazPrave"", 0]; this animate [""dvereDva"", 0]; this animate [""dvereJednaA"", 0]";
		};
	};
};

class malaGaraz;
class SmallGarage_DZEOCS_Dummy : malaGaraz { scope=1; class UserActions; };
class SmallGarage_DZEOCS: SmallGarage_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDvaSkryt"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 0) && (this animationPhase ""dvereGarazPraveDva"" == 0)";
			statement="this animate [""dvereGarazLeveDva"", 1]; this animate [""dvereGarazPraveDva"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
			statement="this animate [""dvereGarazLeveDva"", 0]; this animate [""dvereGarazPraveDva"", 0]";
		};
	};
};
class velkaGaraz;
class BigGarage_DZEOCS_Dummy : velkaGaraz { scope=1; class UserActions; };
class BigGarage_DZEOCS: BigGarage_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDvaSkryt"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 0) && (this animationPhase ""dvereGarazPraveDva"" == 0)";
			statement="this animate [""dvereGarazLeveDva"", 1]; this animate [""dvereGarazPraveDva"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
			statement="this animate [""dvereGarazLeveDva"", 0]; this animate [""dvereGarazPraveDva"", 0]";
		};
	};
};

class kingramida;
class Kings_Pyramid_DZEOCS_Dummy : kingramida { scope=1; class UserActions; };
class Kings_Pyramid_DZEOCS: Kings_Pyramid_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 0)";
			statement="this animate [""dvereJednaC"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 1)";
			statement="this animate [""dvereJednaC"", 0]";
		};
	};
};

class krepost;
class Stronghold_DZEOCS_Dummy : krepost { scope=1; class UserActions; };
class Stronghold_DZEOCS: Stronghold_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,30,2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""chlev_stupenJeden"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_vrata_in";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""wall_4"" == 0) && (this animationPhase ""vrata"" == 0)";
			statement="this animate [""vrata"", 1]; this animate [""hridel"", 1]; this animate [""kolo1"", 1]; this animate [""kolo2"", 1]; this animate [""vaha"", 1]; this animate [""dvere1"", 1]";
		};
		class lock
		{
			displayName="Lock";
			position="pos_vrata_in";
			radius=8;
			onlyForPlayer=1;
			condition="(this animationPhase ""wall_4"" == 0) && (this animationPhase ""vrata"" == 1)";
			statement="this animate [""vrata"", 0]; this animate [""hridel"", 0]; this animate [""kolo1"", 0]; this animate [""kolo2"", 0]; this animate [""vaha"", 0]; this animate [""dvere1"", 0]";
		};
		//["vrata", "hride1", "kolo1", "kolo2", "vaha", "dvere1"]
	};
};

class elektro;
class Bandit_Nest_Level_1_DZEOCS_Dummy : elektro { scope=1; class UserActions; };
class Bandit_Nest_Level_1_DZEOCS : Bandit_Nest_Level_1_DZEOCS_Dummy 
{ 
	scope=2;
	offset[] = {0,12,2};
};

class elektro2;
class Bandit_Nest_Level_2_DZEOCS_Dummy : elektro2 { scope=1; class UserActions; };
class Bandit_Nest_Level_2_DZEOCS : Bandit_Nest_Level_2_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,12,2};
};


class elektro3;
class Bandit_Nest_Level_3_DZEOCS_Dummy : elektro3 { scope=1; class UserActions; };
class Bandit_Nest_Level_3_DZEOCS : Bandit_Nest_Level_3_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,12,2};
};

class elektro_hero;
class Hero_Nest_Level_1_DZEOCS_Dummy : elektro_hero { scope=1; class UserActions;};
class Hero_Nest_Level_1_DZEOCS : Hero_Nest_Level_1_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,12,2};
};

class elektro2_hero;
class Hero_Nest_Level_2_DZEOCS_Dummy : elektro2_hero { scope=1; class UserActions; };
class Hero_Nest_Level_2_DZEOCS : Hero_Nest_Level_2_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,12,2};
};

class elektro3_hero;
class Hero_Nest_Level_3_DZEOCS_Dummy : elektro3_hero { scope=1;	class UserActions; };
class Hero_Nest_Level_3_DZEOCS : Hero_Nest_Level_3_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,12,2};
};