class MD_Shed_W5_Kit : MD_Item_Kit
{		
	void MD_Shed_W5_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "Land_MD_Shed_W5";
	}

	override vector Get_Get_MDItemPos()
	{
		return "0 1.5 0";
	}
}

class MD_Shed_W5_Holo : MD_Item_Holo
{}

class Land_MD_Shed_W5 : MD_OpenableItem_Base
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_Shed_W5_Kit";
	}   

	override void SetActions()
	{
		super.SetActions();
	}

	override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
}