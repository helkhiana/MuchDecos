class MD_WoodPileSmall : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_WoodPileSmall";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.30 0";
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
		recipeVals.SetName("Craft Wood Pile Small");
		recipeVals.SetResult("MD_WoodPileSmall");  
        return recipeVals;
    } 
}