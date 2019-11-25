//Parent Caravan kit
class MD_Caravan_Kit : MD_Item_Kit
{
	override vector Get_MDItemPos()
	{
		return "0 1.89 0";
	}
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
};
//MD_Caravan_WGreen_Kit
class MD_Caravan_WGreen_Kit : MD_Caravan_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Caravan_WGreen";
	}
};
class Land_MD_Caravan_WGreen : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Caravan_WGreen_Kit";
	}
};
//MD_Caravan_WBrown_Kit
class MD_Caravan_WBrown_Kit : MD_Caravan_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Caravan_WBrown";
	}
};
class Land_MD_Caravan_WBrown : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Caravan_WBrown_Kit";
	}
};
//MD_Caravan_MGreen_Kit
class MD_Caravan_MGreen_Kit : MD_Caravan_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Caravan_MGreen";
	}
};
class Land_MD_Caravan_MGreen : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Caravan_MGreen_Kit";
	}
};
//MD_Caravan_MRust_Kit
class MD_Caravan_MRust_Kit : MD_Caravan_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Caravan_MRust";
	}
};
class Land_MD_Caravan_MRust : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Caravan_MRust_Kit";
	}
};