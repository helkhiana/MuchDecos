class MD_KitchenChair_Kit : MD_Item_Kit
{		
	void MD_KitchenChair_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

    override string Get_MDItemName()
	{
		return "MD_KitchenChair";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
}

class MD_KitchenChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_KitchenChair_Kit";
	}   
    
	override void SetActions()
	{
		super.SetActions();
		//AddAction(ActionSitChair);
	}
}