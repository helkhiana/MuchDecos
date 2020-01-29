class MD_OpenableDoorWoodGreenhouse : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorWoodGreenhouseOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorWoodGreenhouseClose_SoundSet"; }
};

class MD_Greenhouse_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Greenhouse";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.30 0";
	}
};

class Land_MD_Greenhouse : MD_OpenableDoorWoodGreenhouse
{  
	override string Get_KitName()
	{
		return "MD_Greenhouse_Kit";
	}
};

class MD_Polytunnel_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "Land_MD_Polytunnel";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.30 0";
	}
};

class Land_MD_Polytunnel : MD_OpenableDoorWoodGreenhouse
{
	override string Get_KitName()
	{
		return "MD_Polytunnel_Kit";
	}
};