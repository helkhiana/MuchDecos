class CfgPatches
{
    class MuchDecos_Kits_Slum_Shelter
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
    
	class MD_SlumShelter_LightBlue_Kit: MD_Kit
	{
		scope=2;
		displayName="Light Blue Slum Shelter kit";
	};
	class MD_SlumShelter_LightBlue: MD_Item
	{		
		scope=2;
		displayName="Light Blue Slum Shelter";
		descriptionShort="";
		model="\DZ\structures_bliss\residential\Slums\Slum_Roof3.p3d";
	};
	
	class MD_SlumShelter_DarkBlue_Kit: MD_Kit
	{
		scope=2;
		displayName="Dark Blue Slum Shelter kit";
	};
	class MD_SlumShelter_DarkBlue: MD_Item
	{		
		scope=2;
		displayName="Dark Blue Slum Shelter";
		descriptionShort="";
		model="\DZ\structures_bliss\residential\Slums\Slum_Roof4.p3d";
	};	
	class MD_SlumShelter_ThinBlue_Kit: MD_Kit
	{
		scope=2;
		displayName="Thin Blue Slum Shelter kit";
	};
	class MD_SlumShelter_ThinBlue: MD_Item
	{		
		scope=2;
		displayName="Thin Blue Slum Shelter";
		model="\DZ\structures_bliss\residential\Slums\Slum_Roof6.p3d";
	};	
	class MD_SlumShelter_SmallMetal_Kit: MD_Kit
	{
		scope=2;
		displayName="Small Metal Slum Shelter kit";
	};
	class MD_SlumShelter_SmallMetal: MD_Item
	{		
		scope=2;
		displayName="Small Metal Slum Shelter";
		model="\DZ\structures_bliss\residential\Slums\Slum_Roof2.p3d";
	};
	class MD_SlumShelter_LargeMetal_Kit: MD_Kit
	{
		scope=2;
		displayName="Large Metal Slum Shelter kit";
	};	
	class MD_SlumShelter_LargeMetal: MD_Item
	{		
		scope=2;
		displayName="Large Metal Slum Shelter";
		model="\DZ\structures_bliss\residential\Slums\Slum_Roof5.p3d";
	};
};