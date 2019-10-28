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
modded class SeedBase : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionHousePlantSeed);
		AddAction(ActionPlantSeed);
	}
};