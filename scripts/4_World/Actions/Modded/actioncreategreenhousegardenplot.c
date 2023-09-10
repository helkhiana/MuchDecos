modded class ActionCreateGreenhouseGardenPlot: ActionContinuousBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) 
			return false;
		
		if ( player.IsPlacingLocal() )
			return false;

		Object target_object = target.GetObject();
		
		Land_MD_Greenhouse MD_Greenhouse = Land_MD_Greenhouse.Cast( target_object );
		Land_MD_Polytunnel MD_Polytunnel = Land_MD_Polytunnel.Cast( target_object) ;
		
		if ( target_object && ( MD_Greenhouse || MD_Polytunnel ) )
		{
			string action_selection = target_object.GetActionComponentName( target.GetComponentIndex() );
			//Update selections in model, name the desired part Soil to improve action condition check
			if ( action_selection != "soil" )
				return false;
			
			//check if there is any gardenplot objects in the current building
			ref array<Object> nearest_objects = new array<Object>;
			ref array<CargoBase> proxy_cargos = new array<CargoBase>;
			vector pos = target_object.GetPosition();
			pos[1] = pos[1] - 1; //Lower by one meter for check if plot already present
			GetGame().GetObjectsAtPosition3D( pos, 2, nearest_objects, proxy_cargos );
	
			for ( int i = 0; i < nearest_objects.Count(); ++i )
			{
				Object object = nearest_objects.Get( i );
				
				if ( object.IsInherited( GardenPlot ) )
				{
					return false;
				}
			}
			
			return true;
		}
		
		return super.ActionCondition(player, target, item);
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
		PlaceObjectActionData poActionData;
		poActionData = PlaceObjectActionData.Cast(action_data);
		EntityAI entity_for_placing = action_data.m_MainItem;
		Object targetObject = action_data.m_Target.GetObject();		
		//Depending on where we dig the required height offset is not the same
		Land_MD_Greenhouse MD_Greenhouse = Land_MD_Greenhouse.Cast( targetObject );
		Land_MD_Polytunnel MD_Polytunnel = Land_MD_Polytunnel.Cast( targetObject) ;
		if(MD_Greenhouse || MD_Polytunnel)
		{			
			vector position = targetObject.GetPosition();
			
			if ( MD_Polytunnel )
				position[1] = position[1] - 1.15; //Lower Y position by roughly 1 meter to compensate for spawning location offset
			else
				position[1] = position[1] - 1.05;
			
			vector orientation = targetObject.GetOrientation();
			
			if ( GetGame().IsMultiplayer() )
			{		
				if (MD_Polytunnel)
				{
					m_GardenPlot = GardenPlot.Cast( GetGame().CreateObjectEx( "GardenPlotPolytunnel", position, ECE_KEEPHEIGHT ) );
				}
				else
				{
					m_GardenPlot = GardenPlot.Cast( GetGame().CreateObjectEx( "GardenPlotGreenhouse", position, ECE_KEEPHEIGHT ) );
				}
				orientation[0] = orientation[0] + 180;
				m_GardenPlot.SetOrientation( orientation );
			}
		}
		else
		{
			super.OnFinishProgressServer(action_data);
		}
	}
}