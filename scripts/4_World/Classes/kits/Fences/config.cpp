class CfgPatches
{
    class MuchDecos_Kits_Fences
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
    
	class MD_Fence_PipeRailing_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Pipe railing Kit";
	};
	class MD_Fence_PipeRailing: MD_Item
	{		
		scope=2;
		displayName="Pipe railing";
		model="\DZ\structures_bliss\walls\Wall_PipeFence_4_nolc.p3d";
	};
	class MD_Fence_PipeFenceSmall_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Small Pipe Fence Kit";
	};
	class MD_Fence_PipeFenceSmall: MD_Item
	{		
		scope=2;
		displayName="Small Pipe Fence";
		model="\DZ\structures_bliss\walls\Wall_PipeFence_4.p3d";
	};
	class MD_Fence_PipeFenceLarge_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Large Pipe Fence Kit";
	};
	class MD_Fence_PipeFenceLarge: MD_Item
	{		
		scope=2;
		displayName="Large Pipe Fence";
		model="\DZ\structures_bliss\walls\Wall_PipeFence_8.p3d";
	};

	
	class MD_Fence_WoodPole_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Pole Fence Kit";
	};
	class MD_Fence_WoodPole: MD_Item
	{		
		scope=2;
		displayName="Wood Pole Fence";
		model="\DZ\structures_bliss\walls\Wall_PoleWall_5_2.p3d";
	};
	class MD_Fence_End_WoodPole_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="End Wood Pole Fence Kit";
	};
	class MD_Fence_End_WoodPole: MD_Item
	{		
		scope=2;
		displayName="End Wood Pole Fence";
		model="\DZ\structures_bliss\walls\Wall_PoleWall_End.p3d";
	};

	
	class MD_Fence_Vineyard_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Vineyard Fence Kit";
	};
	class MD_Fence_Vineyard: MD_Item
	{		
		scope=2;
		displayName="Vineyard Fence";
		model="\DZ\structures_bliss\walls\Wall_FenVineyard.p3d";
	};

	
	class MD_Fence_Forest_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Forest Fence Kit";
	};
	class MD_Fence_Forest: MD_Item
	{		
		scope=2;
		displayName="Forest Fence";
		model="\DZ\structures_bliss\walls\Wall_FenForest_5.p3d";
	};
	class MD_Fence_End_Forest_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="End Forest Fence Kit";
	};
	class MD_Fence_End_Forest: MD_Item
	{		
		scope=2;
		displayName="End Forest Fence";
		model="\DZ\structures_bliss\walls\Wall_FenForest_Pole.p3d";
	};	

	class MD_Fence_WoodGrid_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Wood Grid Fence Kit";
	};
	class MD_Fence_WoodGrid: MD_Item
	{		
		scope=2;
		displayName="Wood Grid Fence";
		model="\DZ\structures_bliss\walls\Wall_Fen7_4.p3d";
	};
	class MD_Fence_End_WoodGrid_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="End Wood Grid Fence Kit";
	};
	class MD_Fence_End_WoodGrid: MD_Item
	{		
		scope=2;
		displayName="End Wood Grid Fence";
		model="\DZ\structures_bliss\walls\Wall_Fen7_Pole.p3d";
	};
	

	class MD_Fence_MetalGrid_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Metal Grid Fence Kit";
	};
	class MD_Fence_MetalGrid: MD_Item
	{		
		scope=2;
		displayName="Metal Grid Fence";
		model="\DZ\structures_bliss\walls\Wall_Fen6_8.p3d";
	};
	class MD_Fence_End_MetalGrid_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="End Metal Grid Fence Kit";
	};
	class MD_Fence_End_MetalGrid: MD_Item
	{		
		scope=2;
		displayName="End Metal Grid Fence";
		model="\DZ\structures_bliss\walls\Wall_Fen6_Pole.p3d";
	};
	

	class MD_Fence_Field_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="Field Fence Kit";
	};
	class MD_Fence_Field: MD_Item
	{		
		scope=2;
		displayName="Field Fence";
		model="\DZ\structures\walls\wall_forfieldfen_1.p3d";
	};
	class MD_Fence_End_Field_Kit: MD_Flat_Kit
	{
		scope=2;
		displayName="End Field Fence Kit";
	};
	class MD_Fence_End_Field: MD_Item
	{		
		scope=2;
		displayName="End Field Fence";
		model="\DZ\structures\walls\wall_forfieldfen_end.p3d";
	};
};