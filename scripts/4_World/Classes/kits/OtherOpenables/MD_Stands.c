//Parent stand kit
class MD_Stand_Kit : MD_Item_Kit
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.7 0";
	}
};
//NewStand1
class MD_NewsStand1_Kit : MD_Stand_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_NewsStand1";
	}
};
class Land_MD_NewsStand1 : MD_OpenableDoorWoodSmall
{
	override string Get_KitNameMD()
	{
		return "MD_NewsStand1_Kit";
	}
};
//NewsStand2
class MD_NewsStand2_Kit : MD_Stand_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_NewsStand2";
	}
	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.45 0";
	}
};
class Land_MD_NewsStand2 : MD_OpenableDoorWoodSmall
{
	override string Get_KitNameMD()
	{
		return "MD_NewsStand2_Kit";
	}
};
//FastFoodstand
class MD_FastFoodStand_Kit : MD_Stand_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_FastFoodStand";
	}
};
class Land_MD_FastFoodStand : MD_OpenableDoorWoodSmall
{
	override string Get_KitNameMD()
	{
		return "MD_FastFoodStand_Kit";
	}
};
//GroceryStand
class MD_GroceryStand_Kit : MD_Stand_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_GroceryStand";
	}
};
class Land_MD_GroceryStand : MD_OpenableDoorWoodSmall
{
	override string Get_KitNameMD()
	{
		return "MD_GroceryStand_Kit";
	}
};