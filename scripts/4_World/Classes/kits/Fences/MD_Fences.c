class MD_Fence : MD_Item
{
	override bool IsWallOrGate()
	{
		return true;
	}
};

//MD_Fence_PipeRailing_Kit
class MD_Fence_PipeRailing_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_PipeRailing";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.55 0";
	} 
};
class MD_Fence_PipeRailing : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_PipeRailing_Kit";
	}
};

//MD_Fence_PipeFenceSmall_Kit
class MD_Fence_PipeFenceSmall_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_PipeFenceSmall";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.3 0";
	} 
};
class MD_Fence_PipeFenceSmall : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_PipeFenceSmall_Kit";
	}
};
//MD_Fence_PipeFenceLarge_Kit
class MD_Fence_PipeFenceLarge_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_PipeFenceLarge";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.3 0";
	} 
};
class MD_Fence_PipeFenceLarge : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_PipeFenceLarge_Kit";
	}
};


//MD_Fence_WoodPole
class MD_Fence_WoodPole_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_WoodPole";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.45 0";
	}
};
class MD_Fence_WoodPole : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_WoodPole_Kit";
	}
};
class MD_Fence_End_WoodPole_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_End_WoodPole";
	}
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	} 
};
class MD_Fence_End_WoodPole : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_End_WoodPole_Kit";
	}
};

//MD_Fence_Vineyard_Kit
class MD_Fence_Vineyard_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_Vineyard";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.65 0";
	} 
};
class MD_Fence_Vineyard : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_Vineyard_Kit";
	}
};

//MD_Fence_Forest_Kit
class MD_Fence_Forest_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_Forest";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.55 0";
	} 
};
class MD_Fence_Forest : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_Forest_Kit";
	}
};
class MD_Fence_End_Forest_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_End_Forest";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.55 0";
	} 
};
class MD_Fence_End_Forest : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_End_Forest_Kit";
	}
};

//MD_Fence_WoodGrid_Kit
class MD_Fence_WoodGrid_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_WoodGrid";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.2 0";
	} 
};
class MD_Fence_WoodGrid : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_WoodGrid_Kit";
	}
};
class MD_Fence_End_WoodGrid_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_End_WoodGrid";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.2 0";
	} 
};
class MD_Fence_End_WoodGrid : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_End_WoodGrid_Kit";
	}
};

//MD_Fence_MetalGrid_Kit
class MD_Fence_MetalGrid_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_MetalGrid";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	} 
};
class MD_Fence_MetalGrid : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_MetalGrid_Kit";
	}
};
class MD_Fence_End_MetalGrid_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_End_MetalGrid";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	} 
};
class MD_Fence_End_MetalGrid : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_End_MetalGrid_Kit";
	}
};

//MD_Fence_Field_Kit
class MD_Fence_Field_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_Field";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.7 0";
	} 
};
class MD_Fence_Field : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_Field_Kit";
	}
};
class MD_Fence_End_Field_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Fence_End_Field";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	} 
};
class MD_Fence_End_Field : MD_Fence
{
    override string Get_KitName()
	{
		return "MD_Fence_End_Field_Kit";
	}
};