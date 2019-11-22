class MD_Shed_W5_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W5";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.5 0";
	}
};

class Land_MD_Shed_W5 : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Shed_W5_Kit";
	}
};