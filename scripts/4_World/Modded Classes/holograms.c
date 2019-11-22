modded class Hologram
{	
	override void UpdateHologram( float timeslice )
	{
		super.UpdateHologram(timeslice);
		MD_Item_Kit mdItemKit = MD_Item_Kit.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		if(mdItemKit){
			vector mdItemKitPos = GetProjectionEntityPosition( m_Player ) + mdItemKit.Get_MDItemPos();
			SetProjectionPosition( mdItemKitPos );
			SetProjectionOrientation( AlignProjectionOnTerrain( timeslice ) );		
			m_Projection.OnHologramBeingPlaced( m_Player );
			return;
		}

		MD_CraftedItemBase craftedItem = MD_CraftedItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		if(craftedItem){
			vector pos = GetProjectionEntityPosition( m_Player ) + craftedItem.Get_MDCraftedItemPos();
			SetProjectionPosition( pos );
			SetProjectionOrientation( AlignProjectionOnTerrain( timeslice ) );		
			m_Projection.OnHologramBeingPlaced( m_Player );
			return;
		}
	}


	override string ProjectionBasedOnParent()
	{
		ItemBase fieldShovel_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
        if ( fieldShovel_in_hands && fieldShovel_in_hands.CanMakeMD_Grave() )
        {
            return "MD_Grave";
		}

		MD_CraftedItemBase craftedItem = MD_CraftedItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		if ( craftedItem )
		{
			return craftedItem.Get_MDCraftedItemName();
		}

		MD_Item_Kit item_in_hands = MD_Item_Kit.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
		if ( item_in_hands )
		{
			return item_in_hands.Get_MDItemName();
		}
		
		return super.ProjectionBasedOnParent();
	}

	override EntityAI PlaceEntity( EntityAI entity_for_placing )
	{	
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
	
		if ( item_in_hands && item_in_hands.CanMakeGardenplot() )
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
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );

		if ( item_in_hands.IsInherited( MD_Item_Kit ))
		{
			SetIsColliding(false);
			return;
		}

		if ( item_in_hands.IsInherited( MD_CraftedItemBase ))
		{
			SetIsColliding(false);
			return;
		}		
		
		if ( item_in_hands.IsInherited( FieldShovel ))
		{
			SetIsColliding(false);
			return;
		}
		super.EvaluateCollision();
	}
}