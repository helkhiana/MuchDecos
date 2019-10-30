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
modded class SeedBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionHousePlantSeed);
	}
};

modded class Bottle_Base
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionWaterGardenSlot);
		AddAction(ActionHouseWaterSlot);
	}

};

modded class WaterBottle
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionWaterGardenSlot);
		AddAction(ActionHouseWaterSlot);
	}
};