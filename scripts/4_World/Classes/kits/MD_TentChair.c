class MD_TentChair_Kit : MD_Item_Kit
{		
	void MD_TentChair_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override string Get_MDItemName()
	{
		return "MD_TentChair";
	} 

	override vector Get_Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
}

class MD_TentChair_Holo : MD_Item_Holo
{}

class MD_TentChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_TentChair_Kit";
	}      
    
	override void SetActions()
	{
		super.SetActions();
	}
}