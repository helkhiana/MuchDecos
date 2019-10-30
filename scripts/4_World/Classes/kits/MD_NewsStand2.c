class MD_NewsStand2_Kit : MD_Item_Kit
{		
	void MD_NewsStand2_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "Land_MD_NewsStand2";
	}

	override vector Get_MDItemPos()
	{
		return "0 1.45 0";
	}
}

class Land_MD_NewsStand2 : MD_OpenableItem_Base
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

	override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
}