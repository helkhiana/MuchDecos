class MD_Polytunnel_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Polytunnel";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.30 0";
	}
};

class Land_MD_Polytunnel : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Polytunnel_Kit";
	}
};