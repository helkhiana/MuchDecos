modded class Hologram
{	
	override void UpdateHologram( float timeslice )
	{
		super.UpdateHologram(timeslice);
		ItemBase mdItem = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		if(mdItem.IsKindOf("MD_Item_Kit" ) || mdItem.IsKindOf("MD_StorageItem")){
			vector mdItemPos = GetProjectionEntityPosition( m_Player ) + mdItem.Get_MDItemPos();
			SetProjectionPosition( mdItemPos );
			SetProjectionOrientation( AlignProjectionOnTerrain( timeslice ) );		
			m_Projection.OnHologramBeingPlaced( m_Player );
			return;
		}
	}


	override string ProjectionBasedOnParent()
	{
        if (m_Parent.CanMakeMD_Grave() )
        {
            return "MD_Grave";
		}
		
		if ( m_Parent.IsInherited(MD_Item_Kit) )
		{
			return m_Parent.Get_MDItemName();
		}
		
		return super.ProjectionBasedOnParent();
	}

	override EntityAI PlaceEntity( EntityAI entity_for_placing )
	{	
		if ( m_Parent && m_Parent.CanMakeGardenplot())
		{	
			Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition()));
		}
			
		if( entity_for_placing.CanAffectPathgraph() )
		{		
			entity_for_placing.SetAffectPathgraph( true, false );
			
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
		}
		
		return entity_for_placing;
	}		

	override void EvaluateCollision()
	{	
		if ( m_Parent.IsInherited(MD_Item_Kit) || m_Parent.IsInherited(MD_StorageItem) || m_Parent.IsInherited(FieldShovel))
		{
			SetIsColliding(false);
			return;
		}

		super.EvaluateCollision();
	}

	override bool IsFloating() 
	{
		if (m_Parent.IsInherited(MD_Item_Kit) || m_Parent.IsInherited(MD_StorageItem))
		{
			return true;
		}
		
		return super.IsFloating();
	}

	override void SetProjectionPosition( vector position )
	{	
		if (m_Parent.IsInherited(MD_Item_Kit) || m_Parent.IsInherited(MD_StorageItem) && IsFloating())
		{ 
			vector mdItemPos = SetOnGround( position ) + m_Parent.Get_MDItemPos();
			m_Projection.SetPosition( mdItemPos );
			return;
		}

		super.SetProjectionPosition(position);
	}
};