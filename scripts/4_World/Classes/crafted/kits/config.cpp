class CfgPatches
{
    class MuchDecos_Craftables
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
	class MD_Flat_Kit;

	class MD_Workbench_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Craftbench Kit";
	};

	class MD_Workbench: MD_Item
	{		
		scope=2;
		displayName="Craftbench";
		descriptionShort="Craftbench used to craft various items for Much Decos. This can be dismantled with a screwdriver, hammer or pliers.";
		model="\DZ\structures\furniture\various\workbench_dz.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_Nails",
			"Material_WoodenPlanks",
			"Material_L1_WoodenPlanks",
			"Material_L2_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_MetalSheets",
			"MetalWire",
			"Material_MetalWire",
			"Wall_Barbedwire_1",
			"Wall_Barbedwire_2",			
			"Stones",
			"Body",
			"Headgear"
		};
		class GUIInventoryAttachmentsProps
		{
			class WoodMaterials
			{
				name="Wood Materials";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
					"Material_Nails",
					"Material_WoodenPlanks",
					"Material_L1_WoodenPlanks",
					"Material_L2_WoodenLogs",
					"Material_L1_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class MetalMaterials
			{
				name="Metal Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_MetalSheets",
					"MetalWire",
					"Material_MetalWire",
					"Wall_Barbedwire_1",
					"Wall_Barbedwire_2"
				};
				icon="cat_common_cargo";
				view_index=4;
			};
			class OtherMaterials
			{
				name="Other Materials";
				description="";
				attachmentSlots[]=
				{
					"Stones",
					"Body",
					"Headgear"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};   
	
	class MD_WoodTable_Indoor_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Table Indoor";
	};

	class MD_WoodTable_Indoor: MD_Item
	{
		scope=2;
		displayName="Wood Table Indoor";
		model="\DZ\structures\residential\misc\misc_woodtable_indoor.p3d";
		weight=5000;
		itemSize[]={10,7};		
	};
	
	class MD_WoodPileLarge_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Pile Large";
	};

	class MD_WoodPileLarge: MD_Item
	{		
		scope=2;
		displayName="Wood Pile Large";
		descriptionShort="A wood pile to store logs, sticks, planks. This can be dismantled with a screwdriver, hammer or pliers.";
		model="\DZ\structures\industrial\misc\misc_woodpile_forest3.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Material_L1W3_WoodenPlanks",
			"Material_L2_WoodenPlanks",
			"Material_L2W1_WoodenPlanks",
			"Material_L2W2_WoodenPlanks",
			"Material_L2W3_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs"
		};
		class GUIInventoryAttachmentsProps
		{
			class Firewoodslots
			{
				name="Small wood";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class WoodenPlankSlots
			{
				name="Wooden Planks";
				description="";
				attachmentSlots[]=
				{
					"Material_L1_WoodenPlanks",
					"Material_L1W1_WoodenPlanks",
					"Material_L1W2_WoodenPlanks",
					"Material_L1W3_WoodenPlanks",
					"Material_L2_WoodenPlanks",
					"Material_L2W1_WoodenPlanks",
					"Material_L2W2_WoodenPlanks",
					"Material_L2W3_WoodenPlanks"
				};
				icon="cat_common_cargo";
				view_index=4;
			};
			class WoodenLogsSlots
			{
				name="Wooden Logs";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L2_WoodenLogs",
					"Material_L3_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};
	
	class MD_WoodPileSmall_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Pile Small";
	};

	class MD_WoodPileSmall: MD_Item
	{		
		scope=2;
		displayName="Wood Pile Small";
		descriptionShort="A wood pile to store logs, sticks. This can be dismantled with a screwdriver, hammer or pliers.";
		model="\DZ\structures\residential\misc\misc_woodpile1.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs"
		};
		class GUIInventoryAttachmentsProps
		{
			class Firewoodslots
			{
				name="Small wood";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class WoodenLogsSlots
			{
				name="Wooden Logs";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L2_WoodenLogs",
					"Material_L3_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};

	class MD_WoodPileMossy_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Pile Mossy";
	};

	class MD_WoodPileMossy: MD_Item
	{		
		scope=2;
		displayName="Wood Pile Mossy";
		descriptionShort="A wood pile to store logs, sticks. This can be dismantled with a screwdriver, hammer or pliers.";
		model="\DZ\structures\residential\misc\misc_woodpile2.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs"
		};
		class GUIInventoryAttachmentsProps
		{
			class Firewoodslots
			{
				name="Small wood";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class WoodenLogsSlots
			{
				name="Wooden Logs";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L2_WoodenLogs",
					"Material_L3_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};

	class MD_WoodReserve_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Reserve";
	};

	class MD_WoodReserve: MD_Item
	{		
		scope=2;
		displayName="Wood Reserve";
		descriptionShort="Store your logs, sticks, planks, etc. This can be dismantled with a screwdriver, hammer or pliers.";
		model="DZ\structures\residential\misc\misc_woodreserve.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Material_L1W3_WoodenPlanks",
			"Material_L2_WoodenPlanks",
			"Material_L2W1_WoodenPlanks",
			"Material_L2W2_WoodenPlanks",
			"Material_L2W3_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_L3W1_WoodenPlanks",
			"Material_L3W2_WoodenPlanks",
			"Material_L3W3_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs"
		};
		class GUIInventoryAttachmentsProps
		{
			class Firewoodslots
			{
				name="Small wood";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class WoodenPlankSlots
			{
				name="Wooden Planks";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenPlanks",
					"Material_L1_WoodenPlanks",
					"Material_L1W1_WoodenPlanks",
					"Material_L1W2_WoodenPlanks",
					"Material_L1W3_WoodenPlanks",
					"Material_L2_WoodenPlanks",
					"Material_L2W1_WoodenPlanks",
					"Material_L2W2_WoodenPlanks",
					"Material_L2W3_WoodenPlanks",
					"Material_L3_WoodenPlanks",
					"Material_L3W1_WoodenPlanks",
					"Material_L3W2_WoodenPlanks",
					"Material_L3W3_WoodenPlanks"
				};
				icon="cat_common_cargo";
				view_index=4;
			};
			class WoodenLogsSlots
			{
				name="Wooden Logs";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs",
					"Material_L1_WoodenLogs",
					"Material_L2_WoodenLogs",
					"Material_L3_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};

	class MD_DogHouse_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Dog House";
	};

	class MD_DogHouse: MD_Item
	{
		scope=2;
		displayName="Dog House";
		model="\DZ\structures\Residential\Misc\Misc_DogHouse.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};

	class MD_FeedRack_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Animal feed rack";
	};

	class MD_FeedRack: MD_Item
	{
		scope=2;
		displayName="Animal feed rack";
		model="\DZ\structures\residential\misc\misc_feedrack.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};

	class MD_BarbedWireFence_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Barbed wire barrier kit";
	};

	class MD_BarbedWireFence: MD_Item
	{
		scope=2;
		displayName="Barbed wire barrier";
		model="\DZ\structures\military\misc\misc_barbedwire.p3d";
		weight=5000;
		itemSize[]={5,9};	
	};

	class MD_BeigeCouch_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Beige couch kit";
	};

	class MD_BeigeCouch: MD_Item
	{
		scope=2;
		displayName="Beige couch";
		model="\DZ\structures\furniture\various\couch_beige84x213x75_dz.p3d";
	};

	class MD_WhiteCouch_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="White couch kit";
	};

	class MD_WhiteCouch: MD_Item
	{
		scope=2;
		displayName="White couch";
		model="\DZ\structures\furniture\various\couch_dz.p3d";
	};
	class MD_LeatherSofaOld_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Leather sofa old kit";
	};

	class MD_LeatherSofaOld: MD_Item
	{
		scope=2;
		displayName="Leather sofa old";
		model="\DZ\structures\furniture\chairs\sofa_leather\sofa_leather_old.p3d";
	};
	
	class MD_LeatherSofaNew_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Leather sofa new kit";
	};

	class MD_LeatherSofaNew: MD_Item
	{
		scope=2;
		displayName="Leather sofa new";
		model="\DZ\structures\furniture\chairs\sofa_leather\sofa_leather_new.p3d";
	};
		
	class MD_LobbyTable_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Lobby table kit";
	};
	class MD_LobbyTable: MD_Item
	{
		scope=2;
		displayName="Lobby table";
		model="\DZ\structures\furniture\tables\lobby_table\lobby_table.p3d";
	};
	
	class MD_SquareTable_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Square table kit";
	};
	class MD_SquareTable: MD_Item
	{
		scope=2;
		displayName="Square table";
		model="\DZ\structures\furniture\various\table_dz.p3d";	
	};
	
	class MD_WornTable_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Worn Table kit";
	};
	class MD_WornTable: MD_Item
	{		
		scope=2;
		displayName="Worn Table";
		model="\DZ\structures_bliss\residential\Misc\Misc_Table_Large.p3d";
	};
};
