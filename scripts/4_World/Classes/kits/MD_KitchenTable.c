class MD_KitchenTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_KitchenTable";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};


class MD_KitchenTable : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_KitchenTable_Kit";
	}
};