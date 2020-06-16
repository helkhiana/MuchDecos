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
		}
		
		SetIsPlaceSound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}

    override void SetActions()
    {
        super.SetActions();        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    }
};