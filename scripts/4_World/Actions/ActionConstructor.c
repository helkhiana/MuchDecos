modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionDismantle);

        actions.Insert(ActionCraftScarecrow);
        actions.Insert(ActionCraftHaybale);
        actions.Insert(ActionCraftHayStack);
        actions.Insert(ActionCraftBarbedWireFence);

        actions.Insert(ActionTrash);
        actions.Insert(ActionDigGrave);

        actions.Insert(ActionOpenBuildingDoors);
        actions.Insert(ActionCloseBuildingDoors);

        actions.Insert(ActionNextMD_PadlockDial);
        actions.Insert(ActionDialMD_Padlock);
        actions.Insert(ActionDialMD_PadlockOnMD_OpenableItem_Base);
        actions.Insert(ActionNextMD_PadlockDialOnMD_OpenableItem_Base);
    }
}