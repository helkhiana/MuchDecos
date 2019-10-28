class CfgPatches
{
    class MuchDecos_Tools
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Vehicles_Parts",
			"DZ_Structures"
        };
    };
};


class CfgVehicles
{
	class MD_Item;
	class FieldShovel;

	class MD_GraveShovel : FieldShovel
	{
		displayName="Grave Shovel";
		descriptionShort="Shovel to dig graves";
	}
	
};