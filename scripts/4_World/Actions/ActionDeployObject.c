modded class ActionDeployObject
{
    override void OnEndServer(ActionData action_data)
    {
        if (action_data.m_MainItem.IsInherited(MD_Item_Kit) || action_data.m_MainItem.IsInherited(MD_CraftedItemBase))
        {
            PlaceObjectActionData poActionData;
            poActionData = PlaceObjectActionData.Cast(action_data);
            if (!poActionData.m_AlreadyPlaced)
            {
                GetGame().ClearJuncture(action_data.m_Player, action_data.m_MainItem);
                action_data.m_MainItem.SetIsBeingPlaced(false);
            
                if (GetGame().IsMultiplayer())
                {
                    action_data.m_Player.PlacingCancelServer();
                    action_data.m_MainItem.SoundSynchRemoteReset();
                }
                else
                {
                    action_data.m_Player.PlacingCancelLocal();
                    action_data.m_Player.LocalTakeEntityToHands(action_data.m_MainItem);
                }
            }
            else
            {
                GetGame().ObjectDelete(action_data.m_MainItem);
                action_data.m_MainItem.SetIsDeploySound(false);
                action_data.m_MainItem.SetIsPlaceSound(false);
                action_data.m_MainItem.SoundSynchRemoteReset();
            }
        }
        else
        {
            super.OnEndServer(action_data);
        }
    }
};