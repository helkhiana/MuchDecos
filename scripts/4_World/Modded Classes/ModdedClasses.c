modded class Screwdriver
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDismantle);
    }
};

modded class ItemBase
{
    bool CanMakeMD_Grave()
    {
        return false;
    }
};