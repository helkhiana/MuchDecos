class MD_WoodTable_Indoor_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_WoodTable_Indoor";
	} 
	
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.30 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(20);
		recipeVals.Set_minQuantityIngredientTwo(50);
        recipeVals.Set_addQuantOne(-20);
        recipeVals.Set_addQuantTwo(-50);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Table Indoor");
		recipeVals.SetResult("MD_WoodTable_Indoor_Kit");  
        return recipeVals;
    }
};

class MD_WoodTable_Indoor : MD_Item
{
    override string Get_KitNameMD()
	{
		return "MD_WoodTable_Indoor_Kit";
	}   
};