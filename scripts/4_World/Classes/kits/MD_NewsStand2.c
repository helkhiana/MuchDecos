class MD_NewsStand2_Kit : MD_Item_Kit
{		
	void MD_NewsStand2_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "MD_NewsStand2";
	}

	override vector Get_Get_MDItemPos()
	{
		return "0 1.45 0";
	}
}

class MD_NewsStand2_Holo : MD_Item_Holo
{}

class MD_NewsStand2 : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_NewsStand2_Kit";
	}   

	override void SetActions()
	{
		super.SetActions();
	}
}