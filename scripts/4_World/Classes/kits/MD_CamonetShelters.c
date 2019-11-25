//Parent CamonetShelter kit
class MD_Camonet_Kit : MD_Item_Kit
{
	override vector Get_MDItemPos()
	{
		return "0 1.9 0";
	}
};
//MD_CamonetShelter_Kit
class MD_CamonetShelter_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter";
	}
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
};
class Land_MD_CamonetShelter : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_Kit";
	}
};
//MD_CamonetShelter_BE_Kit
class MD_CamonetShelter_BE_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_BE";
	}
};
class Land_MD_CamonetShelter_BE : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_BE_Kit";
	}
};
//MD_CamonetShelter_BN_Kit
class MD_CamonetShelter_BN_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_BN";
	}
};
class Land_MD_CamonetShelter_BN : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_BN_Kit";
	}
};
//MD_CamonetShelter_RE_Kit
class MD_CamonetShelter_RE_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_RE";
	}
};
class Land_MD_CamonetShelter_RE : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_RE_Kit";
	}
};
//MD_CamonetShelter_RN_Kit
class MD_CamonetShelter_RN_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_RN";
	}
};
class Land_MD_CamonetShelter_RN : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_RN_Kit";
	}
};
//MD_CamonetShelter_SE_Kit
class MD_CamonetShelter_SE_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_SE";
	}
	override vector Get_MDItemPos()
	{
		return "0 1.3 0";
	}
};
class Land_MD_CamonetShelter_SE : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_SE_Kit";
	}
};
//MD_CamonetShelter_SN_Kit
class MD_CamonetShelter_SN_Kit : MD_Camonet_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_CamonetShelter_SN";
	}
	override vector Get_MDItemPos()
	{
		return "0 1.3 0";
	}
};
class Land_MD_CamonetShelter_SN : MD_Item
{
	override string Get_KitName()
	{
		return "MD_CamonetShelter_SN_Kit";
	}
};