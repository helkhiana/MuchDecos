class MD_PaddedWoodenChair_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_PaddedWoodenChair";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
};

class MD_PaddedWoodenChair : MD_Item
{
    override string Get_KitName()
	{
		return "MD_PaddedWoodenChair_Kit";
	}
};