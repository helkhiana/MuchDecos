class MD_Stand_Grocery_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Stand_Grocery";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.7 0";
	}
};

class Land_MD_Stand_Grocery : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Stand_Grocery_Kit";
	}
};