class MD_Polytunnel_Kit : MD_Item_Kit
{		
	void MD_Polytunnel_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "Land_MD_Polytunnel";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.30 0";
	}

}

class Land_MD_Polytunnel : MD_GardenBase
{
	void Land_MD_Polytunnel(){
		
	}

	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

	
	override void EEInit()
	{
		super.EEInit();
		//PrintSlots();
	}
    
	override string Get_KitName()
	{
		return "MD_Polytunnel_Kit";
	}

	override void SetActions()
	{
		super.SetActions();
		//AddAction(ActionHousePlantSeed);
	}

};