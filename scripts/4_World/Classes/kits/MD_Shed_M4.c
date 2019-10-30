class MD_Shed_M4_Kit : MD_Item_Kit
{		
	void MD_Shed_M4_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "MD_Shed_M4";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.1 0";
	}
}

class MD_Shed_M4 : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_Shed_M4_Kit";
	}   

	override void SetActions()
	{
		super.SetActions();
	}
}