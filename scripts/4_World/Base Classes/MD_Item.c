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

class MD_Item_Kit extends ItemBase
{	
	ref protected EffectSound m_DeployLoopSound;
	
	void MD_Item_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		//RegisterNetSyncVariableBool("m_IsDeploySound");
	}

	void ~MD_Item_Kit()
	{
		if ( m_DeployLoopSound )
		{
			SEffectManager.DestroySound( m_DeployLoopSound );
		}
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			//PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			//PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			//StopDeployLoopSound();
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
				
			Object kitItem = GetGame().CreateObject(Get_MDItemName(), position, false );
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
		}
		
		SetIsDeploySound( true );
	}
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			if ( !m_DeployLoopSound.IsSoundPlaying() )
				m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );			
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SetSoundFadeOut(0.5);
			m_DeployLoopSound.SoundStop();
		}
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