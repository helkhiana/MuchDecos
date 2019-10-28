class ActionDigGraveCB : ActiondeployObjectCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.DIG_GARDEN);
	}
	
	override void DropDuringPlacing()
	{
		if ( m_ActionData.m_MainItem.CanMakeMD_Grave() )
		{
			return;
		} 
	}
};

class ActionDigGrave: ActionDeployObject
{	
	MD_Grave m_MD_Grave;
	
	void ActionDigGrave()
	{
		m_CallbackClass	= ActionDigGraveCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DIGMANIPULATE;
	}
		
	override string GetText()
	{
		return "Dig grave";
	}
	
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
		//Client
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( player.IsPlacingLocal() )
			{
				Hologram hologram = player.GetHologramLocal();
				MD_Grave item_grave;
				Class.CastTo(item_grave,  hologram.GetProjectionEntity() );	
				CheckSurfaceBelowGrave(player, item_grave, hologram);
	
				if ( !hologram.IsColliding() )
				{
					return true;
				}
			}
			return false;
		}
		//Server
		return true;
	}

	override void SetupAnimation( ItemBase item )
	{
		if ( item )
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DIG;
		}
	}
	
	void CheckSurfaceBelowGrave(PlayerBase player, MD_Grave item_grave, Hologram hologram)
	{
		if (item_grave) // TO DO: When MD_Grave is renamed back to MD_Grave then remove this check.
		{
			if ( item_grave.CanBePlaced(player, item_grave.GetPosition() )  )
			{
				if( item_grave.CanBePlaced(NULL, item_grave.CoordToParent(hologram.GetLeftCloseProjectionVector())) )
				{
					if( item_grave.CanBePlaced(NULL, item_grave.CoordToParent(hologram.GetRightCloseProjectionVector())) )
					{
						if( item_grave.CanBePlaced(NULL, item_grave.CoordToParent(hologram.GetLeftFarProjectionVector())) )
						{
							if( item_grave.CanBePlaced(NULL, item_grave.CoordToParent(hologram.GetRightFarProjectionVector())) )
							{
								hologram.SetIsCollidingGPlot( false );
	
								return;
							}
						}
					}
				}
			}
			
			hologram.SetIsCollidingGPlot( true );
		}
	}
	
	override void OnFinishProgressClient( ActionData action_data )
	{
		
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
		PlaceObjectActionData poActionData;
		poActionData = PlaceObjectActionData.Cast(action_data);
		EntityAI entity_for_placing = action_data.m_MainItem;
		vector position = action_data.m_Player.GetLocalProjectionPosition();
		vector orientation = action_data.m_Player.GetLocalProjectionOrientation();
				
		if ( GetGame().IsMultiplayer() )
		{		
			m_MD_Grave = MD_Grave.Cast( action_data.m_Player.GetHologramServer().PlaceEntity( entity_for_placing ));
			m_MD_Grave.SetOrientation( orientation );
			action_data.m_Player.GetHologramServer().CheckPowerSource();
			action_data.m_Player.PlacingCompleteServer();	
			
			m_MD_Grave.OnPlacementComplete( action_data.m_Player );
		}
			
		//local singleplayer
		if ( !GetGame().IsMultiplayer())
		{						
			m_MD_Grave = MD_Grave.Cast( action_data.m_Player.GetHologramLocal().PlaceEntity( entity_for_placing ));
			m_MD_Grave.SetOrientation( orientation );
			action_data.m_Player.PlacingCompleteLocal();
			
			m_MD_Grave.OnPlacementComplete( action_data.m_Player );
		}
		
		GetGame().ClearJuncture( action_data.m_Player, entity_for_placing );
		action_data.m_MainItem.SetIsBeingPlaced( false );
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		poActionData.m_AlreadyPlaced = true;	
		action_data.m_MainItem.SoundSynchRemoteReset();
	}
};
