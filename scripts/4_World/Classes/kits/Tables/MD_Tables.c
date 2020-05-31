//MD_StudentDesk_Kit
class MD_StudentDesk_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_StudentDesk";
	}	
};
class MD_StudentDesk : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_StudentDesk_Kit";
	}
};
//MD_TeacherDesk_Kit
class MD_TeacherDesk_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_TeacherDesk";
	}
};
class MD_TeacherDesk : MD_Item
{	
	override string Get_MDKitName()
	{
		return "MD_TeacherDesk_Kit";
	}
};
//MD_LabDesk_Kit
class MD_LabDesk_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_LabDesk";
	} 
};
class MD_LabDesk : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_LabDesk_Kit";
	}
};
//MD_CampTable_Small_Kit
class MD_CampTable_Small_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_CampTable_Small";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.43 0";
	} 
};
class MD_CampTable_Small : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_CampTable_Small_Kit";
	} 
};
//MD_CampTable_Long_Kit
class MD_CampTable_Long_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_CampTable_Long";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}  
};
class MD_CampTable_Long : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_CampTable_Long_Kit";
	}
};
//MD_TableDrawer_Kit
class MD_TableDrawer_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_TableDrawer";
	} 
};
class MD_TableDrawer : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_TableDrawer_Kit";
	}
};
//MD_OfficeTable_Kit
class MD_OfficeTable_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_OfficeTable";
	}
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
};
class MD_OfficeTable : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_OfficeTable_Kit";
	}  
};
//MD_ConferenceTable_Kit
class MD_ConferenceTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_ConferenceTable";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.35 0";
	}  
};
class MD_ConferenceTable : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_ConferenceTable_Kit";
	}
};
//MD_OfficeDesk_Kit
class MD_OfficeDesk_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_OfficeDesk";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.45 0";
	}  
};
class MD_OfficeDesk : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_OfficeDesk_Kit";
	}
};
//MD_KitchenCheckeredTable_Kit
class MD_KitchenCheckeredTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_KitchenCheckeredTable";
	}
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}  
};
class MD_KitchenCheckeredTable : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_KitchenCheckeredTable_Kit";
	}
};
//MD_KitchenTable_Kit
class MD_KitchenTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_KitchenTable";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}  
};
class MD_KitchenTable : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_KitchenTable_Kit";
	}
};
//MD_MarketTable_Kit
class MD_MarketTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_MarketTable";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};
class MD_MarketTable : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_MarketTable_Kit";
	}
};