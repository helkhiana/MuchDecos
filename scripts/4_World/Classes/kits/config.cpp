class CfgPatches
{
    class MuchDecos_Kits
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};


class CfgVehicles
{
	class MD_Kit;
	class MD_Item;
	class MD_Flat_Kit;
	class MD_Large_Kit;


	class MD_Sink_Kit: MD_Kit
	{
		scope=2;
		displayName="Sink Kit";
	};
	class MD_Sink: MD_Item
	{		
		scope=2;
		displayName="Sink";
		descriptionShort="A working sink";
		model="\DZ\structures\furniture\Bathroom\SINK\sink.p3d";
		class AnimationSources
		{
			class Arm
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
	};
	
	class MD_Power_Transformer_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Power Transformer";
	};

	class MD_Power_Transformer: MD_Item
	{
		scope=2;
		displayName="Power Transformer";
		descriptionShort="A generator with a lot of power and silent";
		model="\DZ\structures\industrial\power\power_transformer_small.p3d";
		rotationFlags=2;
		slopeTolerance=0.30000001;
		weight=45000;
		itemSize[]={10,10};
		itemBehaviour=0;
		attachments[]=
		{
			"SparkPlug"
		};
		fuelTankCapacity=7000;
		carveNavmesh=1;
		heavyItem=1;
		hiddenSelections[]=
		{
			"socket_1_plugged",
			"socket_2_plugged",
			"socket_3_plugged",
			"socket_4_plugged",
			"sparkplug_installed",
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\plug_black_CO.paa",
			"dz\gear\camping\data\plug_yellow_CO.paa",
			"dz\gear\camping\data\plug_white_CO.paa",
			"dz\gear\camping\data\plug_orange_CO.paa",
			"dz\gear\camping\data\power_generator_CO.paa",
			"dz\gear\camping\data\power_generator_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\power_generator.rvmat",
			"dz\gear\camping\data\power_generator.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;					
				};
			};
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyStorageMax=10000;
			energyUsagePerSecond=0.01;
			reduceMaxEnergyByDamageCoef=0.5;
			energyAtSpawn=10000;	
			powerSocketsCount=4;
			compatiblePlugTypes[]={2,6};
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_2_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_3_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_4_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class sparkplug
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class fuel_tank
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class sparkplug_installed
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class dial_fuel
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walk
				{
					soundSet="powergenerator_movement_walk_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="powergenerator_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class MD_PostBox_Kit: MD_Kit
	{
		scope=2;
		displayName="Postbox kit";
	};
	class MD_PostBox: MD_Item
	{		
		scope=2;
		displayName="Postbox";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_postbox1.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_PostBoxWall_Kit: MD_Kit
	{
		scope=2;
		displayName="Wall Postbox kit";
	};
	class MD_PostBoxWall: MD_Item
	{		
		scope=2;
		displayName="Wall Postbox";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_postbox2.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_BlueBench_Kit: MD_Kit
	{
		scope=2;
		displayName="Blue Bench kit";
	};
	class MD_BlueBench: MD_Item
	{		
		scope=2;
		displayName="Blue Bench";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_bench1.p3d";
	};
	
	class MD_Sunshade_Kit: MD_Kit
	{
		scope=2;
		displayName="Sunshade kit";
	};
	class MD_Sunshade: MD_Item
	{		
		scope=2;
		displayName="Sunshade";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_sunshade.p3d";
	};

	//camonets - needs fabric/camonet kit
	
	class MD_CamonetShelter_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter kit";
		descriptionShort="Deploys into a camonet shelter";
	};
	class Land_MD_CamonetShelter: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter";
		model="\DZ\gear\camping\camo_net_shelter.p3d";
	};
	class MD_CamonetShelter_BE_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter BE kit";
		descriptionShort="Deploys into a camonet shelter, big east variant";
	};
	class Land_MD_CamonetShelter_BE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter BE";
		model="\DZ\structures\military\improvised\mil_camonet_big_east.p3d";
	};
	class MD_CamonetShelter_BN_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter BN kit";
		descriptionShort="Deploys into a camonet shelter, big nato variant";
	};
	class Land_MD_CamonetShelter_BN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter BN";
		model="\DZ\structures\military\improvised\mil_camonet_big_nato.p3d";
	};
	class MD_CamonetShelter_RE_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter RE kit";
		descriptionShort="Deploys into a camonet shelter, roof east variant";
	};
	class Land_MD_CamonetShelter_RE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter RE";
		model="\DZ\structures\military\improvised\mil_camonet_roof_east.p3d";
	};
	class MD_CamonetShelter_RN_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter RN kit";
		descriptionShort="Deploys into a camonet shelter, roof nato variant";
	};
	class Land_MD_CamonetShelter_RN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter RN";
		model="\DZ\structures\military\improvised\mil_camonet_roof_nato.p3d";
	};
	class MD_CamonetShelter_SE_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter SE kit";
		descriptionShort="Deploys into a camonet shelter, side east variant";
	};
	class Land_MD_CamonetShelter_SE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter SE";
		model="\DZ\structures\military\improvised\mil_camonet_side_east.p3d";
	};
	class MD_CamonetShelter_SN_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Camonet Shelter SN kit";
		descriptionShort="Deploys into a camonet shelter, side nato variant";
	};
	class Land_MD_CamonetShelter_SN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter SN";
		model="\DZ\structures\military\improvised\mil_camonet_side_nato.p3d";
	};

};