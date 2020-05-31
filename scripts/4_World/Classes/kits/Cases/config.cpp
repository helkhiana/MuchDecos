class CfgPatches
{
    class MuchDecos_Kits_Cases
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
	class MD_Kit;
    
	class MD_BrownWardrobe_Kit: MD_Kit
	{
		scope=2;
		displayName="Brown Wardrobe kit";
	};
	class MD_BrownWardrobe: MD_Item
	{		
		scope=2;
		displayName="Brown Wardrobe";
		model="\DZ\structures\furniture\cases\case_a\case_a.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Shoulder",
			"Melee",
			"Pistol",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
			"Knife"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifle_Storage
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Melee",
					"Pistol",
					"Knife"
				};
			};
			class Loadout_Storage
			{
				name="Loadout";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
			};
		};
	};
	class MD_GreenWardrobe_Kit: MD_Kit
	{
		scope=2;
		displayName="Green Wardrobe kit";
	};
	class MD_GreenWardrobe: MD_BrownWardrobe
	{		
		scope=2;
		displayName="Green Wardrobe";
		model="\DZ\structures\furniture\cases\case_cans_b\case_cans_b.p3d";		
	};	
};