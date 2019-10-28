class MD_WoodPileMossy : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_WoodPileMossy";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.40 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  3,	-1);
        recipeVals.SetIngredientItemOne("WoodAxe");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Pile Mossy");
		recipeVals.SetResult("MD_WoodPileMossy");  
        return recipeVals;
    } 
}