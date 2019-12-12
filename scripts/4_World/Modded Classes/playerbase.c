modded class PlayerBase extends ManBase
{
    override void Init()
    {
        if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) 
		{
            DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
            toolsOneHanded.SetToolsOneHanded();

            DayzPlayerItemBehaviorCfg     twoHanded = new DayzPlayerItemBehaviorCfg;
            twoHanded.SetTwoHanded();

            DayzPlayerItemBehaviorCfg     fireArmsItemBehaviour = new DayzPlayerItemBehaviorCfg;
            fireArmsItemBehaviour.SetFirearms();

            DayzPlayerItemBehaviorCfg     heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
            heavyItemBehaviour.SetHeavyItems();

            GetDayZPlayerType().AddItemInHandsProfileIK("MD_Large_Kit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_TrashCan", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/generator.anm");           
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_Haybale", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_WoodBlock", "dz/anims/workspaces/player/player_main/player_main_2h.asi", twoHanded, "dz/anims/anm/player/ik/two_handed/pumpkin_fresh.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_Tent_Kit", "dz/anims/workspaces/player/player_main/player_main_2h.asi", twoHanded, "dz/anims/anm/player/ik/two_handed/camo_net.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_WhiteFridge", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("MD_DoubleFridge", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
		}
        super.Init();
    }
}
