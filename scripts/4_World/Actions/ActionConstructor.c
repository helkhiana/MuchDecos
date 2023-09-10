modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionDismantle);
        actions.Insert(ActionTrash);
        actions.Insert(ActionOpenBuildingDoors);
        actions.Insert(ActionCloseBuildingDoors);
    }
}