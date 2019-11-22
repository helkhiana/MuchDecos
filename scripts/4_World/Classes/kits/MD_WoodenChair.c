class MD_WoodenChair_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_WoodenChair";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
};

class MD_WoodenChair : MD_Item
{
	override string Get_KitName()
	{
		return "MD_WoodenChair_Kit";
	}
};