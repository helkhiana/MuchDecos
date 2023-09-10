class MD_WoodReserve_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_WoodReserve";
	} 
	
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.90 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(4);
        recipeVals.Set_addQuantOne(-1);
        recipeVals.Set_addQuantTwo(-4);
		array<string> ingredientsOne =
        {"MetalPlate"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Reserve");
		recipeVals.SetResult("MD_WoodReserve_Kit");  
        return recipeVals;
    }
};

class MD_WoodReserve : MD_Item
{
    override string Get_KitNameMD()
	{
		return "MD_WoodReserve_Kit";
	}   
};