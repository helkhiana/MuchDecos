modded class Hologram
{
	override void UpdateHologram(float timeslice)
	{
		super.UpdateHologram(timeslice);
		ItemBase mdItem = ItemBase.Cast(m_Parent);
		if (mdItem.IsKindOf("MD_Item_Kit") || mdItem.IsKindOf("MD_StorageItem"))
		{			
			vector containerPos = GetProjectionEntityPosition( m_Player ) + mdItem.Get_ItemPlacingPosMD();
			vector containerOrientation = AlignProjectionOnTerrain( timeslice ) + mdItem.Get_ItemPlacingOrientationMD();
			SetProjectionPosition( containerPos );
			SetProjectionOrientation( containerOrientation );		
			m_Projection.OnHologramBeingPlaced( m_Player );
			return;
		}
	}

	override string GetProjectionName(ItemBase item)
	{
		if (item.IsInherited(MD_Item_Kit))
			return item.Get_ItemNameMD();

		return super.GetProjectionName(item);
	}

	override void EvaluateCollision(ItemBase action_item = null)
	{
		if (m_Parent.IsAnyInherited({MD_Item_Kit, MD_StorageItem}))
		{
			SetIsColliding(false);
			return;
		}
		super.EvaluateCollision();
	}


	override bool IsFloating()
	{
		if (m_Parent.IsAnyInherited({MD_Item_Kit, MD_StorageItem}))
		{
			return true;
		}

		return super.IsFloating();
	}

	override void SetProjectionPosition(vector position)
	{
		if (m_Parent.IsAnyInherited({MD_Item_Kit, MD_StorageItem}) && IsFloating())
		{ 
			vector itemPos = SetOnGroundOldMD( position ) + m_Parent.Get_ItemPlacingPosMD();
			m_Projection.SetPosition( itemPos );
			return;
		}

		super.SetProjectionPosition(position);
	}

	vector SetOnGroundOldMD( vector position )
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
	
	//doing this so items don't snap to middle of other items
	//removed the part where it checks for the BBox
	override protected vector GetProjectionEntityPosition( PlayerBase player )
	{		
		if(m_Projection.IsKindOf("MD_Item") || m_Projection.IsKindOf("MD_StorageItem"))
		{
			float minProjectionDistance;
			float maxProjectionDistance; 
			m_ContactDir = vector.Zero;
			vector minMax[2];
			float projectionRadius = GetProjectionRadius();
			float cameraToPlayerDistance = vector.Distance(GetGame().GetCurrentCameraPosition(), player.GetPosition());

			if (projectionRadius < SMALL_PROJECTION_RADIUS) // objects with radius smaller than 1m
			{
				minProjectionDistance = SMALL_PROJECTION_RADIUS;
				maxProjectionDistance = SMALL_PROJECTION_RADIUS * 2;
			}
			else
			{
				minProjectionDistance = projectionRadius;
				maxProjectionDistance = projectionRadius * 2;
				maxProjectionDistance = Math.Clamp(maxProjectionDistance, SMALL_PROJECTION_RADIUS, LARGE_PROJECTION_DISTANCE_LIMIT);
			}
			
			vector from = GetGame().GetCurrentCameraPosition();
			//adjusts raycast origin to player head approx. level (limits results behind the character)
			if ( DayZPlayerCamera3rdPerson.Cast(player.GetCurrentCamera()) )
			{
				vector head_pos;
				MiscGameplayFunctions.GetHeadBonePos(player,head_pos);
				float dist = vector.Distance(head_pos,from);
				from = from + GetGame().GetCurrentCameraDirection() * dist;
			}
			
			vector to = from + (GetGame().GetCurrentCameraDirection() * (maxProjectionDistance + cameraToPlayerDistance));
			vector contactPosition;
			set<Object> hitObjects = new set<Object>();

			DayZPhysics.RaycastRV(from, to, contactPosition, m_ContactDir, m_ContactComponent, hitObjects, player, m_Projection, false, false, ObjIntersectFire);
			
			static const float raycastOriginOffsetOnFail = 0.25;
			static const float minDistFromStart = 0.01;
			// Camera isn't correctly positioned in some cases, leading to raycasts hitting the object directly behind the camera
			if ((hitObjects.Count() > 0) && (vector.DistanceSq(from, contactPosition) < minDistFromStart))
			{
				from = contactPosition + GetGame().GetCurrentCameraDirection() * raycastOriginOffsetOnFail;
				DayZPhysics.RaycastRV(from, to, contactPosition, m_ContactDir, m_ContactComponent, hitObjects, player, m_Projection, false, false, ObjIntersectFire);
			}

			bool isFloating = SetHologramPosition(player.GetPosition(), minProjectionDistance, maxProjectionDistance, contactPosition);
			SetIsFloating(isFloating);
			
			m_FromAdjusted = from;

			return contactPosition;
			
		}
		return super.GetProjectionEntityPosition(player);
	}
};
