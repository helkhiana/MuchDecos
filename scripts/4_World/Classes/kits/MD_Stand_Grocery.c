class MD_Stand_Grocery_Kit : MD_Item_Kit
{		
	void MD_Stand_Grocery_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "Land_MD_Stand_Grocery";
	}

	override vector Get_Get_MDItemPos()
	{
		return "0 1.9 0";
	}
}

class MD_Stand_Grocery_Holo : MD_Item_Holo
{}

class Land_MD_Stand_Grocery : MD_OpenableItem_Base
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_Stand_Grocery_Kit";
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