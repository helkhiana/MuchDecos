modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionDismantle);
        actions.Insert(ActionCraftScarecrow);
        actions.Insert(ActionCraftHaybale);
        actions.Insert(ActionSitChair);
        actions.Insert(ActionTrash);
        actions.Insert(ActionDigGrave);
        actions.Insert(ActionCraftHayStack);
        actions.Insert(ActionOpenBuildingDoors);
        actions.Insert(ActionCloseBuildingDoors);
        actions.Insert(ActionHousePlantSeed);
    }
}