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
					{"Assaulters", "LMG", "Medic", "JTAC", "Team Leader", "Breacher", "Grenadier", "MK17", "KZ"};
			};
			class extras : ExtrasBase
			{
				label = "Extras";
				values[] =
					{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15","16"};
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
			Extras = "7";
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
			Extras = "8";
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
			Extras = "8";
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
			Extras = "9";
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
			Extras = "10";
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
			Extras = "11";
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
			Extras = "12";
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
			Extras = "13";
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
			Extras = "14";
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
			Extras = "15";
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
			Extras = "16";
		};
	};
	class Viking_viking_avs_555 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "1";
		};
	};
	class Viking_viking_avs_556 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "2";
		};
	};
	class Viking_viking_avs_557 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "3";
		};
	};
	class Viking_viking_avs_558 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "4";
		};
	};
	class Viking_viking_avs_559 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "5";
		};
	};
	class Viking_viking_avs_560 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Assaulters";
			Extras = "6";
		};
	};
	class Viking_viking_avs_579 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Grenadier";
			Extras = "1";
		};
	};
	class Viking_viking_avs_580 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Grenadier";
			Extras = "2";
		};
	};
	class Viking_viking_avs_569 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="JTAC";
			Extras = "1";
		};
	};
	class Viking_viking_avs_570 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="JTAC";
			Extras = "2";
		};
	};
	class Viking_viking_avs_571 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="JTAC";
			Extras = "3";
		};
	};
	class Viking_viking_avs_572 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="JTAC";
			Extras = "4";
		};
	};
	class Viking_viking_avs_573 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="JTAC";
			Extras = "5";
		};
	};
	class Viking_viking_avs_576 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="LMG";
			Extras = "1";
		};
	};
	class Viking_viking_avs_578 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="LMG";
			Extras = "2";
		};
	};
	class Viking_viking_avs_583 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="Medic";
			Extras = "1";
		};
	};
	class Viking_viking_avs_575 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="MK17";
			Extras = "1";
		};
	};
	class Viking_viking_avs_584 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdvests";
			camo = "mc";
			Type = "AVS";
			Mos ="MK17";
			Extras = "2";
		};
	};

};
class cfgMods
{
	author = "UWU";
	timepacked = "1631795977";
};
