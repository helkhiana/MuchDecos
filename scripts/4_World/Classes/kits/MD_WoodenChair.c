class MD_WoodenChair_Kit : MD_Item_Kit
{		
	void MD_WoodenChair_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "MD_WoodenChair";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}
}

class MD_WoodenChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_WoodenChair_Kit";
	}   

	override void SetActions()
	{
		super.SetActions();
	}
}