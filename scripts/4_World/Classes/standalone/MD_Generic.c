class MD_DoubleFridge : MD_PItem {};
class MD_Flat_WoodBox : MD_PItem {};
class MD_Large_WoodBox : MD_PItem {};
class MD_Small_WoodBox : MD_PItem {};
class MD_TV : MD_PItem {};
class MD_OldRadio : MD_PItem {};
class MD_Radio : MD_PItem {};
class MD_Cashier : MD_PItem {};
class MD_WhiteFridge : MD_PItem {};
class MD_DeskGlobe : MD_PItem
{
	override vector Get_MDItemPos()
	{
		return "0 0.218 0";
	}
};

class MD_Scale : MD_PItem
{
	override vector Get_MDItemPos()
	{
		return "0 0.486 0";
	}
};
class MD_Clock : MD_PItem
{
	override vector Get_MDItemPos()
	{
		return "0 0.5 0.2";
	}
};
class MD_ClothBag : MD_PItem
{
	override vector Get_MDItemPos()
	{
		return "0 0.437 0";
	}
};
class MD_Box_C : MD_PItem
{
	vector Get_MDItemPos()
	{
		return "0 0.3 0";
	}
};
class MD_DarkWoodenCrate : MD_PItem
{
	override vector Get_MDItemPos()
	{
		return "0 0.3 0";
	}
};