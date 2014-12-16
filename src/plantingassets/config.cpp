class CfgPatches {
	class plantingassets {
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
#include "configs\CfgVehicles.hpp"