class MD_Medical_Tent_Large_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_Medical_Tent_Large";
	}
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.02 0";
	} 
};
class MD_Medical_Tent_Large : MD_Item
{
    override string Get_KitNameMD()
	{
		return "MD_Medical_Tent_Large_Kit";
	}
};