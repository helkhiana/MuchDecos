class CfgPatches
{
    class MuchDecos_Kits_Tables
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
	class MD_Large_Kit;
	class MD_Kit;
	class MD_Item;
	
	class MD_StudentDesk_Kit: MD_Kit
	{
		displayName="Student Desk kit";
	};
	class MD_StudentDesk: MD_Item
	{
		scope=2;
		displayName="Student Desk";
		model="\DZ\structures\furniture\school_equipment\student_desk.p3d";
	};
	class MD_TeacherDesk_Kit: MD_Kit
	{
		displayName="Teacher Desk kit";
	};
	class MD_TeacherDesk: MD_Item
	{
		scope=2;
		displayName="Teacher Desk";
		model="\DZ\structures\furniture\school_equipment\teacher_desk.p3d";
	};
	class MD_LabDesk_Kit: MD_Kit
	{
		displayName="Lab Desk kit";
	};
	class MD_LabDesk: MD_Item
	{
		scope=2;
		displayName="Lab Desk";
		model="\DZ\structures\furniture\school_equipment\lab_bench.p3d";
	};
	class MD_CampTable_Small_Kit: MD_Kit
	{
		displayName="Small Camp Table kit";
	};
	class MD_CampTable_Small: MD_Item
	{
		scope=2;
		displayName="Small Camp Table";
		model="\DZ\structures\residential\misc\misc_table_camp_small.p3d";
	};
	class MD_CampTable_Long_Kit: MD_Kit
	{
		displayName="Long Camp Table kit";
	};
	class MD_CampTable_Long: MD_Item
	{
		scope=2;
		displayName="Long Camp Table";
		model="\DZ\structures\residential\misc\misc_table_camp.p3d";
	};
	class MD_TableDrawer_Kit: MD_Kit
	{
		displayName="Table with drawer kit";
	};
	class MD_TableDrawer: MD_Item
	{
		scope=2;
		displayName="Table with drawer";
		model="\DZ\structures\furniture\tables\table_drawer\table_drawer.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_OfficeTable_Kit: MD_Kit
	{
		displayName="Office Table kit";
	};
	class MD_OfficeTable: MD_Item
	{
		scope=2;
		displayName="Office Table";
		model="\DZ\structures\furniture\tables\office_table_a\office_table_a.p3d";
	};
	class MD_ConferenceTable_Kit: MD_Kit
	{
		displayName="Conference Table kit";
	};
	class MD_ConferenceTable: MD_Item
	{
		scope=2;
		displayName="Conference Table";
		model="\DZ\structures\furniture\tables\conference_table_a\conference_table_a.p3d";
	};
	class MD_OfficeDesk_Kit: MD_Kit
	{
		displayName="Office Desk kit";
	};
	class MD_OfficeDesk: MD_Item
	{
		scope=2;
		displayName="Office Desk";
		model="\DZ\structures\furniture\tables\office_desk\desk_office.p3d";
	};
	class MD_KitchenCheckeredTable_Kit: MD_Kit
	{
		displayName="Kitchen Checkered Table kit";
	};
	class MD_KitchenCheckeredTable: MD_Item
	{
		scope=2;
		displayName="Kitchen Checkered Table";
		model="\DZ\structures\furniture\tables\stul_kuch1\stul_kuch1.p3d";
	};
	class MD_KitchenTable_Kit: MD_Kit
	{
		displayName="Kitchen Table kit";
	};
	class MD_KitchenTable: MD_Item
	{		
		scope=2;
		displayName="Kitchen Table";
		descriptionShort="";
		model="\DZ\structures\furniture\tables\kitchen_table_a\kitchen_table_a.p3d";
	};
};