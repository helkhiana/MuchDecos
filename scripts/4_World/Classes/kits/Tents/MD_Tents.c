class MD_Medical_Tent_Large_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Medical_Tent_Large";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.02 0";
	} 
};
class MD_Medical_Tent_Large : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_Medical_Tent_Large_Kit";
	}
};