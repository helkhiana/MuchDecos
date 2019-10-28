modded class Hologram
{	
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

		if (item_in_hands && item_in_hands.IsInherited( MD_Sink_Kit ))
		{
			return "MD_Sink";
		}

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

		if ( item_in_hands.IsInherited( MD_Item ))
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