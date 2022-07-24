class CfgPatches
{
	class aceax_3rdvests
	{
		name = "aceax_3rdvests";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.88;
		requiredAddons[] =
			{
				"A3_Characters_F"};
		author = "wanoO";
		version = "0.1.0.0";
		versionStr = "0.1.0.0";
		versionAr[] = {0, 1, 0, 0};
	};
};

class XtdGearModels
{
	class CamoBase;
	class Typebase;
	class Mosbase;
	class ExtrasBase;
	class CfgWeapons
	{
		class mod3rdvests
		{
			label = "[3rd] vests";
			author = "prota";
			options[] =
				{
					"Type",
					"MOS",
					"camo",
					"extras"};
			class camo : CamoBase
			{
				label = "camo";
				values[] =
					{
						"mc"
					};
			};
			class Type : Typebase
			{
				label = "Type";
				values[] =
					{

						"AVS",
						"JPC"};
			};
			class Mos : Mosbase
			{
				label = "Mos";
				values[] =
					{"Assaulters", "LMG", "Medics", "Comms", "Team Leader", "Breacher", "Grenadier", "MK17", "KZ"}
			};
			class extras : ExtrasBase
			{
				label = "Extras";
				values[] =
					{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15","16","17","18","19","20"}
			};
		};

		
	};
};

class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class Viking_viking_avs_586 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Breacher";
			Extras = "1";
		};
	};
	class Viking_viking_avs_585 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="KZ";
			Extras = "1";
		};
	};
	class Viking_viking_avs_561 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "10";
		};
	};
	class Viking_viking_avs_562 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "11";
		};
	};
	class Viking_viking_avs_563 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "12";
		};
	};
	class Viking_viking_avs_564 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "13";
		};
	};
	class Viking_viking_avs_565 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "14";
		};
	};
	class Viking_viking_avs_566 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "15";
		};
	};
	class Viking_viking_avs_567 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "16";
		};
	};
	class Viking_viking_avs_568 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "17";
		};
	};
	class Viking_viking_avs_574 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "18";
		};
	};
	class Viking_viking_avs_581 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "19";
		};
	};
	class Viking_viking_avs_582 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "20";
		};
	};
};
class cfgMods
{
	author = "UWU";
	timepacked = "1631795977";
};
