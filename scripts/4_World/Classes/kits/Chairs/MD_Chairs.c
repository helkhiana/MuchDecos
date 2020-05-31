//MD_KitchenChair_Kit
class MD_KitchenChair_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_KitchenChair";
	}	
};
class MD_KitchenChair : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_KitchenChair_Kit";
	}    
	override void SetActions()
	{
		super.SetActions();
		//AddAction(ActionSitChair);
	}
};
//MD_LobbyChair_Kit
class MD_LobbyChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_LobbyChair";
	}
};
class MD_LobbyChair : MD_Item
{	
	override string Get_MDKitName()
	{
		return "MD_LobbyChair_Kit";
	}
};
//MD_OfficeChair_Kit
class MD_OfficeChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_OfficeChair";
	} 
};
class MD_OfficeChair : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_OfficeChair_Kit";
	}
};
//MD_PaddedWoodenChair_Kit
class MD_PaddedWoodenChair_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_PaddedWoodenChair";
	}
};
class MD_PaddedWoodenChair : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_PaddedWoodenChair_Kit";
	}
};
//MD_RedChair_Kit
class MD_RedChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_RedChair";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}  
};
class MD_RedChair : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_RedChair_Kit";
	}
};
//MD_StudentChair_Kit
class MD_StudentChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_StudentChair";
	} 
};
class MD_StudentChair : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_StudentChair_Kit";
	}
};
//MD_WoodenChair_Kit
class MD_WoodenChair_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_WoodenChair";
	}
};
class MD_WoodenChair : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_WoodenChair_Kit";
	}
};
//MD_TentChair_Kit
class MD_TentChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_TentChair";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};
class MD_TentChair : MD_Item
{
	override string Get_MDKitName()
	{
		return "MD_TentChair_Kit";
	}
};