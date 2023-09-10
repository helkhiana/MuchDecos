class MD_Scarecrow : MD_StorageItem
{
    override vector Get_ItemPlacingPosMD()
	{
		return "0 0.75 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(6);
		recipeVals.Set_minQuantityIngredientTwo(1);
        recipeVals.Set_addQuantOne(-6);
        recipeVals.Set_addQuantTwo(-1);
		array<string> ingredientsOne =
        {"Rag"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Firewood"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Scarecrow");
		recipeVals.SetResult("MD_Scarecrow");  
        return recipeVals;
    } 
};