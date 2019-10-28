class MD_Greenhouse_Kit : MD_Item_Kit
{		
	void MD_Greenhouse_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override string Get_MDItemName()
	{
		return "Land_MD_Greenhouse";
	}

	override vector Get_Get_MDItemPos()
	{
		return "0 1.30 0";
	}
}

class MD_Greenhouse_Holo : MD_Item_Holo
{}

class Land_MD_Greenhouse : MD_OpenableItem_Base
{
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}   
    
	override string Get_KitName()
	{
		return "MD_Greenhouse_Kit";
	}

	override void OnPlacementComplete( Man player )
	{
		super.OnPlacementComplete( player );
	}

	override void SetActions()
	{
		super.SetActions();
		//AddAction(ActionHousePlantSeed);
	}

	override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
}