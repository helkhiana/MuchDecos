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