class CfgPatches
{
    class MuchDecos_BaseItems
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
	class Container_Base;

	class MD_Item: Container_Base
	{
		scope=0;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="The items can be dismantled with a screwdriver, hammer or pliers.";
		quantityBar=1;
		carveNavmesh=1;
		visibilityModifier=0.94999999;
		canBeDigged=0;
		alignHologramToTerain=1;
		heavyItem=1;
		weight=10;
		itemSize[]={10,10};
		itemBehaviour=2;
		physLayer="item_large";
		rotationFlags=2;
		class Cargo
		{
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
				};
			};
		};
	};

	class MD_Item_WithoutCollision: MD_Item
	{		
		physLayer="item_small";
	};

	class MD_Kit: MD_Item
	{
		scope=0;
		displayName="Wooden Box Kit";
		descriptionShort="Wooden box used to transport small items. Place to deploy item inside. The items can be dismantled with a screwdriver, hammer or pliers after deployment.";
		model="\MuchDecos\data\kitbox\kitbox_small.p3d";
		itemSize[]={5,5};
		simulation="inventoryItem";
		physLayer="item_small";
		weight=300;
	};
	
	class MD_Large_Kit: MD_Kit
	{
		scope=0;
		displayName="Large Kit";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";
		descriptionShort="Large wooden box used to transport enormous items. Place to deploy item inside. The items can be dismantled with a screwdriver, hammer or pliers after deployment.";
		itemSize[]={4,8};
	};

	class MD_Flat_Kit: MD_Kit
	{
		scope=0;
		displayName="Lumber Kit";
		descriptionShort="Small wooden box used to transport small items. Place to deploy item inside. The items can be dismantled with a screwdriver, hammer or pliers after deployment.";
		model="\MuchDecos\data\kitbox\kitbox_flat.p3d";
		itemSize[]={5,3};
	};
	
	class MD_OpenableBase: MD_Item
	{
		scope=0;		
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{	
			class Lock
			{
				name="Lock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};			
		};		
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};	

	class MD_Double_Gate: MD_OpenableBase
	{
		scope=0;
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
			};
		};
		class AnimationSources
		{
			class DoorsTwin1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};	
	};
};