class MD_Bed_Double_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Bed_Double";
	}
	override vector Get_MDItemPos()
	{
		return "0 -0.13 0";
	}
};
class MD_Bed_Double : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_Bed_Double_Kit";
	}
};
class MD_Bed_Folding_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Bed_Folding";
	}
};
class MD_Bed_Folding : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_Bed_Folding_Kit";
	}
};
class MD_Bed_Wood_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Bed_Wood";
	}
};
class MD_Bed_Wood : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_Bed_Wood_Kit";
	}
};