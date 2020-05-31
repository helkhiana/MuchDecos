class CfgPatches
{
    class MuchDecos_Kits_Chairs
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
    
	class MD_OfficeChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Office chair kit";
	};
	class MD_OfficeChair: MD_Item
	{		
		scope=2;
		displayName="Office chair";
		descriptionShort="";
		model="\DZ\structures\furniture\chairs\ch_office_b\ch_office_b.p3d";
	};
	
	class MD_StudentChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Student chair kit";
	};
	class MD_StudentChair: MD_Item
	{		
		scope=2;
		displayName="Student chair";
		descriptionShort="";
		model="\DZ\structures\furniture\school_equipment\student_chair.p3d";
	};	
	class MD_RedChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Red chair kit";
	};
	class MD_RedChair: MD_Item
	{		
		scope=2;
		displayName="Red chair";
		model="\DZ\structures\furniture\chairs\office_chair\office_chair.p3d";
	};	
	class MD_LobbyChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Lobby chair kit";
	};
	class MD_LobbyChair: MD_Item
	{		
		scope=2;
		displayName="Lobby chair";
		model="\DZ\structures\furniture\chairs\lobby_chair\lobby_chair.p3d";
	};class MD_TentChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Tent Chair Kit";
	};	
	class MD_TentChair: MD_Item
	{		
		scope=2;
		displayName="Tent Chair";
		model="\DZ\structures\military\Improvised\proxy\tent_chair.p3d";
	};
	class MD_WoodenChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Wooden Chair";
	};
	class MD_WoodenChair: MD_Item
	{		
		scope=2;
		displayName="Wooden Chair";
		model="\DZ\structures\furniture\chairs\ch_mod_c\ch_mod_c.p3d";
	};
	class MD_PaddedWoodenChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Padded Wooden Chair";
	};
	class MD_PaddedWoodenChair: MD_Item
	{		
		scope=2;
		displayName="Padded Wooden Chair";
		model="\DZ\structures\furniture\chairs\ch_mod_h\ch_mod_h.p3d";
	};
	class MD_KitchenChair_Kit: MD_Kit
	{
		scope=2;
		displayName="Kitchen Chair";
	};
	class MD_KitchenChair: MD_Item
	{		
		scope=2;
		displayName="Kitchen Chair";
		model="\DZ\structures\furniture\chairs\kitchen_chair_a\kitchen_chair_a.p3d";
	};
};