class MD_CraftedItemBase extends ItemBase
{	
	ref protected EffectSound 						m_DeployLoopSound;
	
	void MD_CraftedItemBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	
	override void EEInit()
	{
		super.EEInit();
	}	
	
	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged( old_owner, new_owner );
	}	
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
	}
	
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
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
				
			Object MD_MyCraftedItemBase = GetGame().CreateObject(Get_MDCraftedItemName(), pb.GetLocalProjectionPosition(), false );
			MD_MyCraftedItemBase.SetPosition( position);
			MD_MyCraftedItemBase.SetOrientation( orientation );
		}	
		
		SetIsDeploySound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "placeMediumTent_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "mediumtent_deploy_SoundSet";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SoundStop();
			delete m_DeployLoopSound;
		}
	}
	
	string Get_MDCraftedItemName()
	{
		return "MD_CraftedItemBase";
	}

    vector Get_MDCraftedItemPos()
	{
		return "0 0 0";
	}

}