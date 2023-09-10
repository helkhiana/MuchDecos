class MD_DoubleFridge : MD_StorageItem {};
class MD_Flat_WoodBox : MD_StorageItem {};
class MD_Large_WoodBox : MD_StorageItem {};
class MD_Small_WoodBox : MD_StorageItem {};
class MD_TV : MD_StorageItem {};
class MD_OldRadio : MD_StorageItem {};
class MD_Radio : MD_StorageItem {};
class MD_Cashier : MD_StorageItem {};
class MD_WhiteFridge : MD_StorageItem {};
class MD_DeskGlobe : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.218 0";
	}
};

class MD_Scale : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.486 0";
	}
};
class MD_Clock : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.5 0.2";
	}
};
class MD_ClothBag : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.437 0";
	}
};
class MD_Box_C : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.3 0";
	}
};
class MD_DarkWoodenCrate : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.3 0";
	}
};