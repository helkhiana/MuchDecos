modded class ActionConstructor 
{

    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionDismantle);
        actions.Insert(ActionCraftScarecrow);
        actions.Insert(ActionCraftHaybale);
        actions.Insert(ActionCloseMd_Item);
        actions.Insert(ActionOpenMd_Item);
        actions.Insert(ActionSitChair);
        actions.Insert(ActionMdDialCombinationLock);
        actions.Insert(ActionMdNextCombinationLock);
        actions.Insert(ActionTrash);
    }
}