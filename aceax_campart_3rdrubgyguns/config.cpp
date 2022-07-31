class CfgPatches
{
	class aceax_compat_nsw_3rdrudbgy
	{
		name = "compat_3rdrudbgy";
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
	class sleeveBase;
	class shirtBase;
	class CamoBase;
	class teebase;
	class jobBase;
	class sleevesBase;
	class Weapon_Base_F;
	class CfgWeapons
	{
		class mod3rdtees
		{
			label = "[3rd] tees";
			author = "TFL";
			options[] =
				{
					"tee",
					"camo"};
			class camo : CamoBase
			{
				label = "camo";
				values[] =
					{
						"mc",
						"m81"};
			};
			class tee : teebase
			{
				label = "tee";
				values[] =
					{

						"1",
						"2",
						"3",
						"4",
						"5",
						"6",
						"7",
						"8",
						"9",
						"10",
						"11",
						"12",
						"13",
						"14",
						"15",
						"16"};
			};
		};

		class mod3rdrugby
		{
			label = "[3rd] rubgy";
			author = "TFL";
			options[] =
				{
					"shirt",
					"camo",
					"sleeve"};
			class camo : CamoBase
			{
				label = "camo";
				values[] =
					{
						"mc",
						"m81",
						"black",
						"tan",
						"gry",
						"mcb"};
			};
			class sleeve : sleeveBase
			{
				label = "sleve";
				values[] =
					{
						"no",
						"full"};
			};
			class shirt : shirtBase
			{
				label = "shirts";
				values[] =
					{
						"mc",
						"tan",
						"rg",
						"m81",
						"black"};
			};
		};

		class nswlsbs
		{
			label = "nsw L&S";
			author = "TFL";
			options[] =
				{
					"gen",
					"camo",
					"shirts",
					"sleeves",
					"glove"};
			class camo : CamoBase
			{
				label = "camo";
				values[] =
					{
						"mc",
						"m81"};
			};
			class sleeves : sleevesBase
			{
				label = "sleve";
				values[] =
					{
						"no",
						"rs1",
						"rs2",
						"full"};
			};
			class shirts
			{
				label = "shirts";
				values[] =
					{
						"camoflage",
						"pata",
						"ac",
						"ts",
						"ts1",
						"ts2",
						"vts",
						"plain",
						"pcu",
						"mc2"};
			};
			class glove
			{
				label = "glove";
				values[] =
					{
						"no",
						"yes"};
			};
			class gen
			{
				label = "gen";
				values[] =
					{
						"2",
						"3"};
			};
		};

		class hk416bs
		{
			label = "hk416bs";
			author = "prota";
			options[] =
				{
					"diameter",
					"configas",
					"uwucam"};
			class diameter
			{
				label = "d";
				values[] =
					{
						"10",
						"14"};
			};
			class configas
			{
				label = "configas";
				values[] =
					{
						"M320",
						"RAHG/CTR",
						"RAHG/IMOD",
						"RAHG/LMT",
						"SMR/CTR",
						"SMR/LMT",
						"SMR/IMOD",
						"SMR/MFT"};
			};
			class uwucam
			{
				label = "uwucamo";
				values[] =
					{
						"normal",
						"black",
						"desert"};
			};
		};
		class sopmodm4
		{
			label = "sopmodm4";
			author = "prota";
			options[] =
				{
					"diameter",
					"configas",
					"uwucam"};
			class diameter
			{
				label = "d";
				values[] =
					{
						"10",
						"13",};
			};
			class configas
			{
				label = "configas";
				values[] =
					{
						"KAC/BCM",
						"KAC/CTR",
						"KAC/B5",
						"URGI/BCM",
						"URGI/CTR",
						"URGI/B5"};
			};
			class uwucam
			{
				label = "uwucamo";
				values[] =
					{
						"camo1",
						"black"};
			};
		};

		class MK18SOPMOD
		{
			label = "MK18 SOPD";
			author = "prota";
			options[] =
				{
					"diameter",
					"configas",
					"uwucam"};
			class diameter
			{
				label = "d";
				values[] =
					{
						"8",
						"10",};
			};
			class configas
			{
				label = "configas";
				values[] =
					{
						"B5",
						"BCM",
						"MCMR",
						"M203"};
			};
			class uwucam
			{
				label = "uwucamo";
				values[] =
					{
						"black",
						"mix1",
						"mix2",
						"paint1",
						"paint2"
						};
			};
		};
	};
};

class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class Weapon_Base_F;
	class R29 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R30 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R1 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R2 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R9 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R10 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R15 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R16 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "full";
			shirt = "tan";
		};
	};
	class R23 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R24 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "full";
			shirt = "tan";
		};
	};

	class R41 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R42 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mc";
			sleeve = "full";
			shirt = "black";
		};
	};

	class R43 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R44 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "full";
			shirt = "black";
		};
	};
	class R45 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R46 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "full";
			shirt = "black";
		};
	};
	class R47 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R48 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "full";
			shirt = "black";
		};
	};
	class R49 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R50 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "full";
			shirt = "black";
		};
	};
	class R51 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "no";
			shirt = "black";
		};
	};
	class R52 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "full";
			shirt = "black";
		};
	};
	class R31 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R32 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "full";
			shirt = "mc";
		};
	};
	class R33 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R34 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "full";
			shirt = "mc";
		};
	};
	class R35 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R36 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "full";
			shirt = "mc";
		};
	};
	class R37 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R38 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "m81";
			sleeve = "full";
			shirt = "mc";
		};
	};
	class R39 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "no";
			shirt = "mc";
		};
	};
	class R40 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "full";
			shirt = "mc";
		};
	};
	class R3 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R4 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R5 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R6 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R7 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R8 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R13 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "no";
			shirt = "rg";
		};
	};
	class R14 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "full";
			shirt = "rg";
		};
	};
	class R17 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R18 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "black";
			sleeve = "full";
			shirt = "tan";
		};
	};
	class R19 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R20 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "tan";
			sleeve = "full";
			shirt = "tan";
		};
	};
	class R21 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R22 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "gry";
			sleeve = "full";
			shirt = "tan";
		};
	};
	class R27 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "no";
			shirt = "tan";
		};
	};
	class R28 : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdrugby";
			camo = "mcb";
			sleeve = "full";
			shirt = "tan";
		};
	};

	class 3rdSFG_Tee_M81_1_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "1";
		};
	};
	class 3rdSFG_Tee_M81_2_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "2";
		};
	};
	class 3rdSFG_Tee_M81_3_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "3";
		};
	};
	class 3rdSFG_Tee_M81_4_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "4";
		};
	};
	class 3rdSFG_Tee_M81_5_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "5";
		};
	};
	class 3rdSFG_Tee_M81_6_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "6";
		};
	};
	class 3rdSFG_Tee_M81_7_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "7";
		};
	};
	class 3rdSFG_Tee_M81_8_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "8";
		};
	};
	class 3rdSFG_Tee_M81_9_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "9";
		};
	};
	class 3rdSFG_Tee_M81_10_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "10";
		};
	};
	class 3rdSFG_Tee_M81_11_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "11";
		};
	};
	class 3rdSFG_Tee_M81_12_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "12";
		};
	};
	class 3rdSFG_Tee_M81_13_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "13";
		};
	};
	class 3rdSFG_Tee_M81_14_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "14";
		};
	};
	class 3rdSFG_Tee_M81_15_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "15";
		};
	};
	class 3rdSFG_Tee_M81_16_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "m81";
			tee = "16";
		};
	};
	class 3rdSFG_Tee_MC_1_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "1";
		};
	};
	class 3rdSFG_Tee_MC_2_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "2";
		};
	};
	class 3rdSFG_Tee_MC_3_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "3";
		};
	};
	class 3rdSFG_Tee_MC_4_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "4";
		};
	};
	class 3rdSFG_Tee_MC_5_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "5";
		};
	};
	class 3rdSFG_Tee_MC_6_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "6";
		};
	};
	class 3rdSFG_Tee_MC_7_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "7";
		};
	};
	class 3rdSFG_Tee_MC_8_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "8";
		};
	};
	class 3rdSFG_Tee_MC_9_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "9";
		};
	};
	class 3rdSFG_Tee_MC_10_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "10";
		};
	};
	class 3rdSFG_Tee_MC_11_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "11";
		};
	};
	class 3rdSFG_Tee_MC_12_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "12";
		};
	};
	class 3rdSFG_Tee_MC_13_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "13";
		};
	};
	class 3rdSFG_Tee_MC_14_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "14";
		};
	};
	class 3rdSFG_Tee_MC_15_Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "15";
		};
	};
	class 3rdSFG_Tee_MC_16Item : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "mod3rdtees";
			camo = "mc";
			tee = "16";
		};
	};
	class gen3_cryes_l : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "ac";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen2p_crye_B : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "plain";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen2p_cryes_o : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "camoflage";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen2p_cryes_n : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "plain";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen2p_crye_h : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "m81";
			shirts = "plain";
			sleeves = "rs";
			glove = "yes";
		};
	};
	class gen2p_crye_A : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "plain";
			sleeves = "rs";
			glove = "yes";
		};
	};
	class gen2p_crye_tee7_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "m81";
			shirts = "ts1";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen2p_crye_tee1_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "ts1";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen2p_crye_tee8_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "m81";
			shirts = "ts2";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen2p_crye_tee4_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "ts2";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen2p_crye_rugby1_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "2";
			camo = "mc";
			shirts = "vts";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_cut5_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_cut_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_long5_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen3p_crye_long_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen3p_crye_long5_uni_ng : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3p_crye_long_ng_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3_cryes_e : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc2";
			shirts = "pata";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen3_cryes_d : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "pata";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen3_pata_e : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "pata";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3_pata_d : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "mc2";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3_pata_rs_e : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "rs2";
			sleeves = "full";
			glove = "yes";
		};
	};
	class gen3_pata_rs_d : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "rs2";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3_cryes_j : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "rs1";
			glove = "yes";
		};
	};
	class gen3_cryes_A : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "rs1";
			glove = "yes";
		};
	};
	class gen3_cryes_j_ng : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "rs1";
			glove = "no";
		};
	};
	class gen3_cryes_A_ng : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "rs";
			sleeves = "full";
			glove = "no";
		};
	};
	class gen3_cryes_j_rs : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "rs2";
			glove = "yes";
		};
	};
	class gen3_cryes_A_rs : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "rs2";
			glove = "yes";
		};
	};
	class gen3_cryes_j_rs_ng : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "plain";
			sleeves = "rs2";
			glove = "no";
		};
	};
	class gen3_cryes_A_rs_ng : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "plain";
			sleeves = "rs2";
			glove = "no";
		};
	};
	class gen3p_crye_tee7_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "ts1";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_tee1_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "ts1";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_tee8_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "m81";
			shirts = "ts2";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_tee4_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "ts2";
			sleeves = "no";
			glove = "yes";
		};
	};
	class gen3p_crye_rugby1_uni : Uniform_Base
	{
		class XtdGearInfo
		{
			model = "nswlsbs";
			gen = "3";
			camo = "mc";
			shirts = "vts";
			sleeves = "no";
			glove = "yes";
		};
	};
	class Tier1_HK416D10_SMR_CTR : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/CTR";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_SMR_CTR_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/CTR";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_SMR_CTR_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/CTR";
			uwucam = "black";
		};
	};
	class Tier1_HK416D10_RAHG_CTR : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/CTR";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_RAHG_CTR_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/CTR";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_RAHG_CTR_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/CTR";
			uwucam = "black";
		};
	};
	class Tier1_HK416D10_RAHG_IMOD : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/IMOD";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_RAHG_IMOD_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/IMOD";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_RAHG_IMOD_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/IMOD";
			uwucam = "black";
		};
	};

	class Tier1_HK416D10_RAHG_LMT : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/LMT";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_RAHG_LMT_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/LMT";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_RAHG_LMT_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "RAHG/LMT";
			uwucam = "black";
		};
	};
	class Tier1_HK416D10_SMR_IMOD : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/IMOD";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_SMR_IMOD_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/IMOD";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_SMR_IMOD_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/IMOD";
			uwucam = "black";
		};
	};
	class Tier1_HK416D10_SMR_LMT : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/LMT";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D10_SMR_LMT_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/LMT";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D10_SMR_LMT_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "10";
			configas = "SMR/LMT";
			uwucam = "black";
		};
	};

	class Tier1_HK416D145_RAHG_CTR : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/CTR";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_RAHG_CTR_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/CTR";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_RAHG_CTR_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/CTR";
			uwucam = "black";
		};
	};

	class Tier1_HK416D145_RAHG_IMOD : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/IMOD";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_RAHG_IMOD_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/IMOD";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_RAHG_IMOD_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/IMOD";
			uwucam = "black";
		};
	};
	class Tier1_HK416D145_RAHG_LMT : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/LMT";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_RAHG_LMT_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/LMT";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_RAHG_LMT_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "RAHG/LMT";
			uwucam = "black";
		};
	};

	class Tier1_HK416D145_SMR_CTR : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/CTR";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_SMR_CTR_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/CTR";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_SMR_CTR_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/CTR";
			uwucam = "black";
		};
	};

	class Tier1_HK416D145_SMR_IMOD : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/IMOD";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_SMR_IMOD_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/IMOD";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_SMR_IMOD_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/IMOD";
			uwucam = "black";
		};
	};

	class Tier1_HK416D145_SMR_LMT : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/LMT";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_SMR_LMT_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/LMT";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_SMR_LMT_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/LMT";
			uwucam = "black";
		};
	};
	class Tier1_HK416D145_SMR_MFT : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/MFT";
			uwucam = "normal";
		};
	};
	class Tier1_HK416D145_SMR_MFT_Desert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/MFT";
			uwucam = "desert";
		};
	};
	class Tier1_HK416D145_SMR_MFT_BlackDesert : Weapon_Base_F
	{
		class XtdGearInfo
		{
			model = "hk416bs";
			diameter = "14";
			configas = "SMR/MFT";
			uwucam = "black";
		};
	};
	
	class flb_M4A1_URX4_BCM_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/BCM";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_BCM_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/BCM";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URX4_CTR_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/CTR";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_CTR_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/CTR";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URX4_B5_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/B5";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_B5_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "KAC/B5";
			uwucam = "camo1";
		};
	};


	class flb_M4A1_URGI_BCM_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/BCM";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_BCM_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/BCM";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URGI_CTR_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/CTR";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_CTR_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/CTR";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URGI_B5_1075_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/B5";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_B5_1075_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "10";
			configas = "URGI/B5";
			uwucam = "camo1";
		};
	};


	///////////////////

	class flb_M4A1_URX4_BCM_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/BCM";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_BCM_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/BCM";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URX4_CTR_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/CTR";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_CTR_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/CTR";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URX4_B5_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/B5";
			uwucam = "black";
		};
	};
	class flb_M4A1_URX4_B5_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "KAC/B5";
			uwucam = "camo1";
		};
	};


	class flb_M4A1_URGI_BCM_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/BCM";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_BCM_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/BCM";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URGI_CTR_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/CTR";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_CTR_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/CTR";
			uwucam = "camo1";
		};
	};
	class flb_M4A1_URGI_B5_13_Blk
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/B5";
			uwucam = "black";
		};
	};
	class flb_M4A1_URGI_B5_13_Camo1
	{

		class XtdGearInfo
		{
			model = "sopmodm4";
			diameter = "13";
			configas = "URGI/B5";
			uwucam = "camo1";
		};
	};
	
	//////////////////////////////////////////
	class flb_M4_DDMK18_B5_Blk
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "black";
		};
	};

	class flb_M4_DDMK18_B5_Mix1
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "mix1";
		};
	};
	class flb_M4_DDMK18_B5_Mix2
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "mix2";
		};
	};

	class flb_M4_DDMK18_B5_Paint1
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "paint1";
		};
	};
	class flb_M4_DDMK18_B5_Paint2
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "paint2";
		};
	};


	class flb_M4_DDMK18_BCM_Blk
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "black";
		};
	};

	class flb_M4_DDMK18_BCM_Mix01
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "BCM";
			uwucam = "mix1";
		};
	};
	class flb_M4_DDMK18_BCM_Mix02
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "BCM";
			uwucam = "mix2";
		};
	};

	class flb_M4_DDMK18_BCM_Paint01
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "B5";
			uwucam = "paint1";
		};
	};
	class flb_M4_DDMK18_BCM_Paint02
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "8";
			configas = "BCM";
			uwucam = "paint2";
		};
	};



	////
	class flb_M4_DDMK18_MCMR_10_BCM_Blk
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "MCMR";
			uwucam = "black";
		};
	};

	class flb_M4_DDMK18_MCMR_10_BCM_Mix01
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "MCMR";
			uwucam = "mix1";
		};
	};
	class flb_M4_DDMK18_MCMR_10_BCM_Mix02
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "MCMR";
			uwucam = "mix2";
		};
	};

	class flb_M4_DDMK18_MCMR_10_BCM_Camo01
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "MCMR";
			uwucam = "paint1";
		};
	};
	class flb_M4_DDMK18_MCMR_10_BCM_Camo02
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "MCMR";
			uwucam = "paint2";
		};
	};

	class flb_M4_DDMK18_12_CTR_M203_Mix
	{

		class XtdGearInfo
		{
			model = "MK18SOPMOD";
			diameter = "10";
			configas = "M203";
			uwucam = "black";
		};
	};

	

};
class cfgMods
{
	author = "UWU";
	timepacked = "1631795977";
};
