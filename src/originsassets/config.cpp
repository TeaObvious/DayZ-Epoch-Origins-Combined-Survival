#define private 0
#define protected 1
#define public 2

class CfgPatches {
	class originsassets {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_code","dayz"};
	};
};
class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz"};
		};
	};
};
#include "configs\CfgMagazines.hpp"
#include "configs\CfgSounds.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgBuildingReceipt.hpp"