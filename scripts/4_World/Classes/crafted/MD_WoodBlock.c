class MD_WoodBlock : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_WoodBlock";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.40 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, -1, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  1,	-1);
        recipeVals.SetIngredientItemOne("Hacksaw");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Block");
		recipeVals.SetResult("MD_WoodBlock");  
        return recipeVals;
    } 
};