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
		AddAction(ActionHouseWaterSlot);
		super.SetActions();
	}

};

modded class WaterBottle
{
    override void SetActions()
	{
		AddAction(ActionHouseWaterSlot);
		super.SetActions();
	}
};

modded class GardenLime
{
	override void SetActions()
	{
		AddAction(ActionFertilizeHouseSlot);
		super.SetActions();
	}

};