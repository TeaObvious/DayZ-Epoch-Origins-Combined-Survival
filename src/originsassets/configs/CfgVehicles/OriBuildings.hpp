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
	//GhostPreview = "banditiUroven1DrevenaBudka_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="[this,[[""vratka"", 1],[""dvereJednaA"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="[this,[[""vratka"", 0],[""dvereJednaA"", 0]]] spawn player_LockUnlock";
		};
	};
};

class Uroven2KladaDomek;
class Bandit_Level_2_DZEOCS_Dummy : Uroven2KladaDomek { scope=1; class UserActions; };
class Bandit_Level_2_DZEOCS: Bandit_Level_2_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "banditiUroven2KladaDomek_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupen4tiri"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="[this,[[""vratkaDva"", 1],[""dvereJedna"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="[this,[[""vratkaDva"", 0],[""dvereJedna"", 0]]] spawn player_LockUnlock";
		};
	};
};


class Uroven3DrevenyDomek;
class Bandit_Level_3_DZEOCS_Dummy : Uroven3DrevenyDomek { scope=1; class UserActions; };
class Bandit_Level_3_DZEOCS: Bandit_Level_3_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "banditiUroven3DrevenyDomek_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="[this,[[""vratkaDva"", 1],[""vrataGaraz2"", 1],[""dvereGarazLeve"", 1],[""dvereGarazPrave"", 1],[""dvereDvaB"", 1],[""dvereJedna"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="[this,[[""vratkaDva"", 0],[""vrataGaraz2"", 0],[""dvereGarazLeve"", 0],[""dvereGarazPrave"", 0],[""dvereDvaB"", 0],[""dvereJedna"", 0]]] spawn player_LockUnlock";
		};
	};
};

class Uroven1VelkaBudka;
class Hero_Level_1_DZEOCS_Dummy : Uroven1VelkaBudka { scope=1; class UserActions; };
class Hero_Level_1_DZEOCS: Hero_Level_1_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "gerojUroven1VelkaBudka_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="[this,[[""vratka"", 1],[""dvereJednaA"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="[this,[[""vratka"", 0],[""dvereJednaA"", 0]]] spawn player_LockUnlock";
		};
	};
};
class Uroven2MalyDomek;
class Hero_Level_2_DZEOCS_Dummy : Uroven2MalyDomek { scope=1; class UserActions; };
class Hero_Level_2_DZEOCS: Hero_Level_2_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "gerojUroven2MalyDomek_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupen4tiri"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 0)";
			statement="[this,[[""vratkaDva"", 1],[""dvereJedna"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""vratkaDva"" == 1)";
			statement="[this,[[""vratkaDva"", 0],[""dvereJedna"", 0]]] spawn player_LockUnlock";
		};
	};
};

class Uroven3VelkyDomek;
class Hero_Level_3_DZEOCS_Dummy : Uroven3VelkyDomek { scope=1; class UserActions; };
class Hero_Level_3_DZEOCS: Hero_Level_3_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "gerojUroven3VelkyDomek_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 0)";
			statement="[this,[[""vratka"", 1],[""vrataGaraz"", 1],[""dvereGarazLeve"", 1],[""dvereGarazPrave"", 1],[""dvereDva"", 1],[""dvereJednaA"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""vratka"" == 1)";
			statement="[this,[[""vratka"", 0],[""vrataGaraz"", 0],[""dvereGarazLeve"", 0],[""dvereGarazPrave"", 0],[""dvereDva"", 0],[""dvereJednaA"", 0]]] spawn player_LockUnlock";
		};
	};
};

class malaGaraz;
class SmallGarage_DZEOCS_Dummy : malaGaraz { scope=1; class UserActions; };
class SmallGarage_DZEOCS: SmallGarage_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "malaGaraz_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDvaSkryt"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 0) && (this animationPhase ""dvereGarazPraveDva"" == 0)";
			statement="[this,[[""dvereGarazLeveDva"", 1],[""dvereGarazPraveDva"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
			statement="[this,[[""dvereGarazLeveDva"", 0],[""dvereGarazPraveDva"", 0]]] spawn player_LockUnlock";
		};
	};
};
class velkaGaraz;
class BigGarage_DZEOCS_Dummy : velkaGaraz { scope=1; class UserActions; };
class BigGarage_DZEOCS: BigGarage_DZEOCS_Dummy
{
	scope=2;
	//GhostPreview = "velkaGaraz_ghostg_gs";
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenDvaSkryt"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 0) && (this animationPhase ""dvereGarazPraveDva"" == 0)";
			statement="[this,[[""dvereGarazLeveDva"", 1],[""dvereGarazPraveDva"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
			statement="[this,[[""dvereGarazLeveDva"", 0],[""dvereGarazPraveDva"", 0]]] spawn player_LockUnlock";
		};
	};
};

class kingramida;
class Kings_Pyramid_DZEOCS_Dummy : kingramida { scope=1; class UserActions; };
class Kings_Pyramid_DZEOCS: Kings_Pyramid_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,10,1.2};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""povyseniJednaStupen4tvrty"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 0)";
			statement="[this,[[""dvereJednaC"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="pos_door";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 1)";
			statement="[this,[[""dvereJednaC"", 0]]] spawn player_LockUnlock";
		};
	};
};

class krepost;
class Stronghold_DZEOCS_Dummy : krepost { scope=1; class UserActions; };
class Stronghold_DZEOCS: Stronghold_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,20,8};
	class UserActions : UserActions
	{
		class upgradeBuilding
		{
			displayName="Upgrade Stage";
			position="";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""chlev_stupenJeden"" == 1)";
			statement="this spawn player_upgrade_building";
		};
		class unlock
		{
			displayName="Unlock";
			position="pos_vrata_in";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""wall_4"" == 0) && (this animationPhase ""vrata"" == 0)";
			statement="[this,[[""vrata"", 1],[""hridel"", 1],[""kolo1"", 1],[""kolo2"", 1],[""vaha"", 1],[""dvere1"", 1]]] spawn player_LockUnlock";
		};
		class lock
		{
			displayName="Lock";
			position="pos_vrata_in";
			radius=10;
			onlyForPlayer=1;
			condition="(this animationPhase ""wall_4"" == 0) && (this animationPhase ""vrata"" == 1)";
			statement="[this,[[""vrata"", 0],[""hridel"", 0],[""kolo1"", 0],[""kolo2"", 0],[""vaha"", 0],[""dvere1"", 0]]] spawn player_LockUnlock";
		};
		//["vrata", "hride1", "kolo1", "kolo2", "vaha", "dvere1"]
	};
};

class elektro;
class Bandit_Nest_Level_1_DZEOCS_Dummy : elektro { scope=1; class UserActions; };
class Bandit_Nest_Level_1_DZEOCS : Bandit_Nest_Level_1_DZEOCS_Dummy 
{ 
	scope=2;
	offset[] = {0,10,5};
};

class elektro2;
class Bandit_Nest_Level_2_DZEOCS_Dummy : elektro2 { scope=1; class UserActions; };
class Bandit_Nest_Level_2_DZEOCS : Bandit_Nest_Level_2_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,10,5};
};


class elektro3;
class Bandit_Nest_Level_3_DZEOCS_Dummy : elektro3 { scope=1; class UserActions; };
class Bandit_Nest_Level_3_DZEOCS : Bandit_Nest_Level_3_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,10,5};
};

class elektro_hero;
class Hero_Nest_Level_1_DZEOCS_Dummy : elektro_hero { scope=1; class UserActions;};
class Hero_Nest_Level_1_DZEOCS : Hero_Nest_Level_1_DZEOCS_Dummy
{
	scope=2;
	offset[] = {0,10,5};
};

class elektro2_hero;
class Hero_Nest_Level_2_DZEOCS_Dummy : elektro2_hero { scope=1; class UserActions; };
class Hero_Nest_Level_2_DZEOCS : Hero_Nest_Level_2_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,10,5};
};

class elektro3_hero;
class Hero_Nest_Level_3_DZEOCS_Dummy : elektro3_hero { scope=1;	class UserActions; };
class Hero_Nest_Level_3_DZEOCS : Hero_Nest_Level_3_DZEOCS_Dummy
{ 
	scope=2;
	offset[] = {0,10,5};
};
