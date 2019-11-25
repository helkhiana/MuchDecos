//Parent Shed
class MD_Shed_Kit : MD_Item_Kit
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
};
//M1
class MD_Shed_M1_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_M1";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.1 0";
	}
};
class Land_MD_Shed_M1 : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Shed_M1_Kit";
	}
};
//M3
class MD_Shed_M3_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_M3";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.2 0";
	}
};
class Land_MD_Shed_M3 : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Shed_M3_Kit";
	}
};
//M4
class MD_Shed_M4_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_M4";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.1 0";
	}
};
class Land_MD_Shed_M4 : MD_OpenableItem_Base
{
	override string Get_KitName()
	{
		return "MD_Shed_M4_Kit";
	}
};