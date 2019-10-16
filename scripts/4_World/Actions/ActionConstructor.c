modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionDismantle);
        actions.Insert(ActionCraftScarecrow);
        actions.Insert(ActionCraftHaybale);
    }
}