class MD_NewsStand2_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_NewsStand2";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.45 0";
	}
};

class Land_MD_NewsStand2 : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_NewsStand2_Kit";
	}
};