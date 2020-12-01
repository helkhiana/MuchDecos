modded class Hologram
{
	override void UpdateHologram(float timeslice)
	{
		super.UpdateHologram(timeslice);
		ItemBase mdItem = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		if (mdItem.IsKindOf("MD_Item_Kit") || mdItem.IsKindOf("MD_StorageItem"))
		{
			vector mdItemPos = GetProjectionEntityPosition(m_Player) + mdItem.Get_MDItemPos();
			SetProjectionPosition(mdItemPos);
			SetProjectionOrientation(AlignProjectionOnTerrain(timeslice));
			m_Projection.OnHologramBeingPlaced(m_Player);
			return;
		}
	}

	EntityAI PlaceEntity(EntityAI entity_for_placing)
	{
		if (entity_for_placing.IsInherited(MD_Item_Kit) || entity_for_placing.IsInherited(FieldShovel))
			return entity_for_placing;

		return super.PlaceEntity(entity_for_placing);
	}

	override string GetProjectionName(ItemBase item)
	{
		if (item.CanMakeMD_Grave())
			return "MD_Grave";

		if (item.IsInherited(MD_Item_Kit))
			return item.Get_MDItemName();

		return super.GetProjectionName(item);
	}

	override void EvaluateCollision(ItemBase action_item = null)
	{
		if (m_Parent.IsInherited(MD_Item_Kit) || m_Parent.IsInherited(MD_StorageItem) || m_Parent.IsInherited(FieldShovel))
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

	override void SetProjectionPosition(vector position)
	{
		if (m_Parent.IsInherited(MD_Item_Kit) || m_Parent.IsInherited(MD_StorageItem) && IsFloating())
		{
			vector mdItemPos = SetOnGroundOld(position) + m_Parent.Get_MDItemPos();
			m_Projection.SetPosition(mdItemPos);
			return;
		}

		super.SetProjectionPosition(position);
	}	

	vector SetOnGroundOld( vector position )
	{
		vector from = position;
		vector ground;
		vector player_to_projection_vector;
		float projection_diameter = GetProjectionDiameter();
			
		ground = Vector(0, - Math.Max( projection_diameter, SMALL_PROJECTION_GROUND ), 0);	
		vector to = from + ground;
		vector contact_pos;
		int contact_component;
		
		DayZPhysics.RaycastRV( from, to, contact_pos, m_ContactDir, contact_component, NULL, NULL, m_Projection, false, false );

		HideWhenClose( contact_pos );

		return contact_pos;
	}
};