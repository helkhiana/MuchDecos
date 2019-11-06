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

        actions.Insert(ActionSitChair);
        actions.Insert(ActionTrash);
        actions.Insert(ActionDigGrave);

        actions.Insert(ActionOpenBuildingDoors);
        actions.Insert(ActionCloseBuildingDoors);
        
        actions.Insert(ActionHousePlantSeed);
        actions.Insert(ActionHouseWaterSlot);
        actions.Insert(ActionFertilizeHouseSlot);
    }
}