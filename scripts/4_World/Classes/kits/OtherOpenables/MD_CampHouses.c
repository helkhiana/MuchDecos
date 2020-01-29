//Parent CampHouse kit
class MD_CampHouse_Kit : MD_Item_Kit
{
	override vector Get_MDItemPos()
	{
		return "0 2 0";
	}
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
};
//MD_CampHouse_White_Kit
class MD_CampHouse_White_Kit : MD_CampHouse_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CampHouse_White";
	}
};
class Land_MD_CampHouse_White : MD_OpenableDoorWoodSmall
{
	override string Get_KitName()
	{
		return "MD_CampHouse_White_Kit";
	}
};
//MD_CampHouse_Brown_Kit
class MD_CampHouse_Brown_Kit : MD_CampHouse_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CampHouse_Brown";
	}
};
class Land_MD_CampHouse_Brown : MD_OpenableDoorWoodSmall
{
	override string Get_KitName()
	{
		return "MD_CampHouse_Brown_Kit";
	}
};
//MD_CampHouse_Red_Kit
class MD_CampHouse_Red_Kit : MD_CampHouse_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CampHouse_Red";
	}
};
class Land_MD_CampHouse_Red : MD_OpenableDoorWoodSmall
{
	override string Get_KitName()
	{
		return "MD_CampHouse_Red_Kit";
	}
};