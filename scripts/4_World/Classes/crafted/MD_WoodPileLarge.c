class MD_WoodPileLarge : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_WoodPileLarge";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.60 0";
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
		recipeVals.SetIngredientOne(0, -1, -4, false, false);
		recipeVals.SetIngredientTwo(0, -1, -4, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 4,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  4,	-1);
        recipeVals.SetIngredientItemOne("WoodenLog");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Pile Large");
		recipeVals.SetResult("MD_WoodPileLarge");  
        return recipeVals;
    } 
}