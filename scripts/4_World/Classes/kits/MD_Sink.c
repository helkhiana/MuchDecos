class MD_Sink_Kit : MD_Item_Kit
{		
	void MD_Sink_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}		
		
	override void OnPlacementComplete( Man player )
	{
		super.OnPlacementComplete( player );
		
		PlayerBase pb = PlayerBase.Cast( player );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector position = player_base.GetLocalProjectionPosition();
			vector orientation = player_base.GetLocalProjectionOrientation();
				
			Object MD_MyItem = GetGame().CreateObject("MD_Sink", pb.GetLocalProjectionPosition(), false );
			MD_MyItem.SetPosition( position + "0 0.75 0" );
			MD_MyItem.SetOrientation( orientation );
		}	
		
		SetIsDeploySound( true );
	}
}

class MD_Sink_Holo: MD_Item_Holo
{}

class MD_Sink : MD_Item
{
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}

	bool IsWell()
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWashHandsWell);
		AddAction(ActionDrinkWellContinuous);
	}
}