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
class Bandit_Level_1_DZEOCS: Uroven1DrevenaBudka
{
	offset[] = {0,12,2};
};
class Uroven2KladaDomek;
class Bandit_Level_2_DZEOCS: Uroven2KladaDomek
{
	offset[] = {0,12,2};
};
class Uroven3DrevenyDomek;
class Bandit_Level_3_DZEOCS: Uroven3DrevenyDomek
{
	offset[] = {0,12,2};
};

class Uroven1VelkaBudka;
class Hero_Level_1_DZEOCS: Uroven1VelkaBudka
{
	offset[] = {0,12,2};
};
class Uroven2MalyDomek;
class Hero_Level_2_DZEOCS: Uroven2MalyDomek
{
	offset[] = {0,12,2};
};
class Uroven3VelkyDomek;
class Hero_Level_3_DZEOCS: Uroven3VelkyDomek
{
	offset[] = {0,12,2};
};

class malaGaraz;
class SmallGarage_DZEOCS: malaGaraz
{
	offset[] = {0,12,2};
};
class velkaGaraz;
class BigGarage_DZEOCS: velkaGaraz
{
	offset[] = {0,12,2};
};

class kingramida;
class Kings_Pyramid_DZEOCS: kingramida
{
	offset[] = {0,12,2};
};
class krepost;
class Stronghold_DZEOCS: krepost
{
	offset[] = {0,30,2};
};

class electro;
class Bandit_Nest_Level_1_DZEOCS : electro 
{ 
	offset[] = {0,12,2};
};
class electro2;
class Bandit_Nest_Level_2_DZEOCS : electro2
{ 
	offset[] = {0,12,2};
};
class electro3;
class Bandit_Nest_Level_3_DZEOCS : electro3
{ 
	offset[] = {0,12,2};
};

class elektro_hero;
class Hero_Nest_Level_1_DZEOCS : elektro_hero
{ 
	offset[] = {0,12,2};
};
class elektro_hero2;
class Hero_Nest_Level_2_DZEOCS : elektro_hero2
{ 
	offset[] = {0,12,2};
};
class elektro_hero3;
class Hero_Nest_Level_3_DZEOCS : elektro_hero3
{ 
	offset[] = {0,12,2};
};