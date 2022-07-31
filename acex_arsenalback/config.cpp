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
				"aceax_3rdvests"};
		author = "wanoO";
		version = "0.1.0.0";
		versionStr = "0.1.0.0";
		versionAr[] = {0, 1, 0, 0};
	};
};

class XtdGearModels
{
	class CamoBase1;
	class Typebase1;
	class Mosbase1;
	class ExtrasBase1;
	class CfgWeapons
	{
		class mod3rdback
		{
			label = "[3rd] back";
			author = "prota";
			options[] =
				{
					"Type1",
					"MOS1",
					"camo1",
					"extras1"};
			class camo1 : CamoBase1
			{
				label = "camo1";
				values[] =
					{
						"mc",
						"od"
					};
			};
			class Type1 : Typebase1
			{
				label = "Type1";
				values[] =
					{
						"backpanel",
						"flatpack",
						"rush",
						"30L",
						"modular"
						};
			};
			class Mos1 : Mosbase1
			{
				label = "Mos1";
				values[] =
					{"Assaulters", "Candidate", "Medic", "JTAC", "Team Leader", "Breacher", "Grenadier", "MK17", "KZ"};
			};
			class extras1 : ExtrasBase1
			{
				label = "extras1";
				values[] =
					{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15","16"};
			};
		};

		
	};
};

class CfgWeapons
{
	class packpanel_1
	{
		class XtdGearInfo
		{
			model = "mod3rdback";
			camo1 = "mc";
			Type1 = "backpanel";
			Mos1 ="Assaulters";
			extras1 = "1";
		};
	};
	// class packpanel_2 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "2";
	// 	};
	// };
	// class packpanel_3 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "3";
	// 	};
	// };
	// class packpanel_4 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "4";
	// 	};
	// };
	// class packpanel_8 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "5";
	// 	};
	// };
	// class packpanel_9 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "6";
	// 	};
	// };
	// class packpanel_10 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "7";
	// 	};
	// };
	// class packpanel_11 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "8";
	// 	};
	// };
	// class packpanel_12 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Assaulters";
	// 		extras1 = "9";
	// 	};
	// };
	// class packpanel_31 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="candidate";
	// 		extras1 = "1";
	// 	};
	// };
	// class packpanel_32 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="candidate";
	// 		extras1 = "2";
	// 	};
	// };
	// class packpanel_33 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="candidate";
	// 		extras1 = "3";
	// 	};
	// };
	// class packpanel_34 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="candidate";
	// 		extras1 = "4";
	// 	};
	// };
	// class packpanel_35 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="candidate";
	// 		extras1 = "5";
	// 	};
	// };
	// class packpanel_5 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "1";
	// 	};
	// };
	// class packpanel_6 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "2";
	// 	};
	// };
	// class packpanel_7 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "3";
	// 	};
	// };
	// class Apex_LR_Bag_1 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "4";
	// 	};
	// };
	// class Apex_LR_Bag_2 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "5";
	// 	};
	// };
	
	// class backpanel_15 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "6";
	// 	};
	// };
	// class backpanel_17 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "7";
	// 	};
	// };
	// class backpanel_18 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "8";
	// 	};
	// };
	// class backpanel_19 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "9";
	// 	};
	// };
	// class backpanel_20
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "10";
	// 	};
	// };
	// class backpanel_24 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "11";
	// 	};
	// };
	// class backpanel_25 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="JTAC";
	// 		extras1 = "12";
	// 	};
	// };

	
	
	
	
	// class backpanel_26 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Breacher";
	// 		extras1 = "1";
	// 	};
	// };
	// class backpanel_27 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Breacher";
	// 		extras1 = "2";
	// 	};
	// };
	// class backpanel_28 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Breacher";
	// 		extras1 = "3";
	// 	};
	// };
	// class backpanel_29 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Breacher";
	// 		extras1 = "4";
	// 	};
	// };
	// class backpanel_30 
	// {
	// 	class XtdGearInfo
	// 	{
	// 		model = "mod3rdback";
	// 		camo = "mc";
	// 		Type = "backpanel";
	// 		Mos ="Breacher";
	// 		extras1 = "5";
	// 	};
	// };
};
class cfgMods
{
	author = "UWU";
	timepacked = "1631795977";
};
