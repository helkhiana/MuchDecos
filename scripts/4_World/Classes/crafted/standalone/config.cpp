class CfgPatches
{
    class MuchDecos_Craftables_Standalone
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
	class MD_Item;
    
	class MD_Scarecrow: MD_Item
	{		
		scope=2;
		displayName="Scarecrow";
		descriptionShort="A scarecrow to scare those pesty crows.";
		model="\DZ\structures\residential\misc\misc_boogieman.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
    
	class MD_Haybale: MD_Item
	{
		scope=2;
		displayName="Haybale";
		descriptionShort="A haybale to stash your things";
		model="\DZ\structures\industrial\misc\misc_haybale.p3d";
		weight=500;
		itemSize[]={10,7};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_GraveCross_One: MD_Item
	{
		scope=2;
		displayName="Wood Cross";
		descriptionShort="A cross to put at your lost one's grave. Style 1";
		model="\DZ\structures\specific\cemeteries\cemetery_tombstone9.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};
	
	class MD_GraveCross_Two: MD_Item
	{
		scope=2;
		displayName="Wood Cross";
		descriptionShort="A cross to put at your lost one's grave. Style 2";
		model="\DZ\structures\specific\cemeteries\cemetery_tombstone3.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};
	
	class MD_GraveCross_Three: MD_Item
	{
		scope=2;
		displayName="Wood Cross";
		descriptionShort="A cross to put at your lost one's grave. Style 3";
		model="\DZ\structures\specific\cemeteries\cemetery_tombstone11.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};
	
	class MD_GraveCross_Four: MD_Item
	{
		scope=2;
		displayName="Wood Cross";
		descriptionShort="A cross to put at your lost one's grave. Style 4";
		model="\DZ\structures\specific\cemeteries\cemetery_tombstone10.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};

	class MD_GraveCross_Five: MD_Item
	{
		scope=2;
		displayName="Wood Cross";
		descriptionShort="A cross to put at your lost one's grave. Style 5";
		model="\DZ\structures\specific\cemeteries\cemetery_smallcross.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};

	class MD_WoodBlock: MD_Item
	{		
		scope=2;
		displayName="Wood Block";
		descriptionShort="A wood block to hold your firewood";
		model="\DZ\structures\residential\misc\misc_woodblock.p3d";		
		itemSize[]={4,4};		
		itemBehaviour=2;
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood"
		};
		class GUIInventoryAttachmentsProps
		{
			class Firewoodslots
			{
				name="Wood";
				description="";
				attachmentSlots[]=
				{
					"Firewood"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
		};
	};

	class MD_HayStack: MD_Item
	{
		scope=2;
		displayName="Haystack";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_haystack.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};
	
	class MD_CampBench: MD_Item
	{
		scope=2;
		displayName="Camping bench";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_bench3.p3d";
		weight=5000;
		itemSize[]={9,2};	
	};

	class MD_LogBench: MD_Item
	{
		scope=2;
		displayName="Log bench";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_bench5.p3d";
		weight=5000;
		itemSize[]={9,2};	
	};

	class MD_WornBench: MD_Item
	{
		scope=2;
		displayName="Worn bench";
		descriptionShort="";
		model="\DZ\structures_bliss\residential\Misc\Misc_Bench9.p3d";
		weight=5000;
		itemSize[]={9,2};	
	};

	class MD_EvergreenFlowerPot: MD_Item
	{
		scope=2;
		displayName="Evergreen Flower Pot";
		descriptionShort="";
		model="\DZ\structures\furniture\decoration\flowers\flower_02.p3d";
		weight=50;
		itemSize[]={2,9};	
	};
	
	class MD_SnakePlantFlowerPot: MD_Item
	{
		scope=2;
		displayName="Snake Plant Flower Pot";
		descriptionShort="";
		model="\DZ\structures\furniture\decoration\flowers\flower_01.p3d";
		weight=50;
		itemSize[]={2,9};	
	};	
};
