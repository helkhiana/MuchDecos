class MD_CampBench : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_CampBench";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.2 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(1);
        recipeVals.Set_addQuantOne(-1);
        recipeVals.Set_addQuantTwo(-1);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Camp Bench");
		recipeVals.SetResult("MD_CampBench");  
        return recipeVals;
    } 
};

class MD_WornBench : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_WornBench";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.2 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(1);
        recipeVals.Set_addQuantOne(-1);
        recipeVals.Set_addQuantTwo(-1);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Worn Bench");
		recipeVals.SetResult("MD_WornBench");  
        return recipeVals;
    } 
};