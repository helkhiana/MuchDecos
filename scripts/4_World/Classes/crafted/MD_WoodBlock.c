class MD_WoodBlock : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_WoodBlock";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.40 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
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