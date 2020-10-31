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
	#ifdef DAYZ_1_09	
	override void OnPlacementComplete(Man player)
	{
		super.OnPlacementComplete(player);
		PlayerBase player_base = PlayerBase.Cast(player);
		vector position = player_base.GetLocalProjectionPosition();
		vector orientation = player_base.GetLocalProjectionOrientation();
	#else
	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
	#endif
		if ( GetGame().IsServer() )
		{				
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