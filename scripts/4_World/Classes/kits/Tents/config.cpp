class CfgPatches
{
    class MuchDecos_Kits_Tents
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
	class MD_Large_Kit;
    
	class MD_Medical_Tent_Large_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Large Medical Tent kit";
	};
	class MD_Medical_Tent_Large: MD_Item
	{		
		scope=2;
		displayName="Large Medical Tent";
		model="\DZ\structures\Residential\Medical\Medical_Tent_Big.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};