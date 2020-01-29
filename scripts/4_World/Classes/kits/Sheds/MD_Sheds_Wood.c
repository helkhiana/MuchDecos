class MD_OpenableDoorWoodNolatch : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorWoodNolatchOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorWoodNolatchClose_SoundSet"; }
};
//W1
class MD_Shed_W1_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W1";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.3 0";
	}
};
class Land_MD_Shed_W1 : MD_OpenableDoorWoodNolatch
{
	override string Get_KitName()
	{
		return "MD_Shed_W1_Kit";
	}
};
//W2
class MD_Shed_W2_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W2";
	}

	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
};
class Land_MD_Shed_W2 : MD_OpenableDoorWoodNolatch
{
	override string Get_KitName()
	{
		return "MD_Shed_W2_Kit";
	}
};
//W3
class MD_Shed_W3_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W3";
	}

	override vector Get_MDItemPos()
	{
		return "0 0.9 0";
	}
};
class Land_MD_Shed_W3 : MD_OpenableDoorWoodNolatch
{
	override string Get_KitName()
	{
		return "MD_Shed_W3_Kit";
	}
};
//W4
class MD_Shed_W4_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W4";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.5 0";
	}
};
class Land_MD_Shed_W4 : MD_OpenableDoorWoodNolatch
{
	override string Get_KitName()
	{
		return "MD_Shed_W4_Kit";
	}
};
//W5
class MD_Shed_W5_Kit : MD_Shed_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W5";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.5 0";
	}
};
class Land_MD_Shed_W5 : MD_OpenableDoorWoodNolatch
{
	override string Get_KitName()
	{
		return "MD_Shed_W5_Kit";
	}
};