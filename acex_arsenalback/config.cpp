class CfgPatches
{
	class aceax_3rdback
	{
		name = "aceax_3rdback";
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
		class mod3rdback
		{
			label = "[3rd] back";
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
						"mc",
						"od"
					};
			};
			class Type : Typebase
			{
				label = "Type";
				values[] =
					{

						"backpanel",
						"flatpack",
						"rush",
						"30L",
						"modular",
						};
			};
			class Mos : Mosbase
			{
				label = "Mos";
				values[] =
					{"Assaulters", "Candidate", "Medic", "JTAC", "Team Leader", "Breacher", "Grenadier", "MK17", "KZ"};
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
	class packpanel_1 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "1";
		};
	};
	class packpanel_2 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "2";
		};
	};
	class packpanel_3 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "3";
		};
	};
	class packpanel_4 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "4";
		};
	};
	class packpanel_8 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "5";
		};
	};
	class packpanel_9 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "6";
		};
	};
	class packpanel_10 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "7";
		};
	};
	class packpanel_11 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "8";
		};
	};
	class packpanel_12 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Assaulters";
			Extras = "9";
		};
	};
	class packpanel_31 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="candidate";
			Extras = "1";
		};
	};
	class packpanel_32 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="candidate";
			Extras = "2";
		};
	};
	class packpanel_33 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="candidate";
			Extras = "3";
		};
	};
	class packpanel_34 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="candidate";
			Extras = "4";
		};
	};
	class packpanel_35 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="candidate";
			Extras = "5";
		};
	};
	class packpanel_5 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "1";
		};
	};
	class packpanel_6 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "2";
		};
	};
	class packpanel_7 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "3";
		};
	};
	class Apex_LR_Bag_1 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "4";
		};
	};
	class Apex_LR_Bag_2 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "5";
		};
	};
	
	class backpanel_15 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "6";
		};
	};
	class backpanel_17 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "7";
		};
	};
	class backpanel_18 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "8";
		};
	};
	class backpanel_19 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "9";
		};
	};
	class backpanel_20
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "10";
		};
	};
	class backpanel_24 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "11";
		};
	};
	class backpanel_25 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="JTAC";
			Extras = "12";
		};
	};

	
	
	
	
	class backpanel_26 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Breacher";
			Extras = "1";
		};
	};
	class backpanel_27 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Breacher";
			Extras = "2";
		};
	};
	class backpanel_28 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Breacher";
			Extras = "3";
		};
	};
	class backpanel_29 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Breacher";
			Extras = "4";
		};
	};
	class backpanel_30 
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo = "mc";
			Type = "backpanel";
			Mos ="Breacher";
			Extras = "5";
		};
	};
};
class cfgMods
{
	author = "UWU";
	timepacked = "1631795977";
};
