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
		recipeVals.Set_minQuantityIngredientTwo(1);
        recipeVals.Set_addHealthOne(-5);
        recipeVals.Set_addQuantTwo(-1);
		array<string> ingredientsOne =
        {"Hacksaw"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Block");
		recipeVals.SetResult("MD_WoodBlock");  
        return recipeVals;
    } 
};