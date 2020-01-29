class MD_Item: ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }	
};

class MD_Item_Kit: ItemBase
{	
	void MD_Item_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsPlaceSound() )
		{
			PlayPlaceSound();
		}
	}
		
	override void OnPlacementComplete( Man player )
	{
		super.OnPlacementComplete( player );		
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector position = player_base.GetLocalProjectionPosition();
			vector orientation = player_base.GetLocalProjectionOrientation();
				
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObject(Get_MDItemName(), position, false ));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
			kitItem.SetLifetime(3888000);
		}
		
		SetIsPlaceSound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetPlaceSoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}

	string Get_MDItemName()
	{
		return "MD_Item";
	}

	vector Get_MDItemPos()
	{
		return "0 0 0";
	}
	
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    }
};