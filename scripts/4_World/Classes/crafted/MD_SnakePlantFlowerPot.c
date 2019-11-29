class MD_SnakePlantFlowerPot : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_SnakePlantFlowerPot";
	}
    override vector Get_MDItemPos()
	{
		return "0 0 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.SetIngredientOne(0, -1, 0, true, false);
		recipeVals.SetIngredientTwo(0, -1, 0, true, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, -1,	-1);
        recipeVals.SetIngredientItemOne("MD_Bucket");
        recipeVals.SetIngredientItemTwo("PlantMaterial");
		recipeVals.SetName("Craft Snake Plant Flower Pot");
		recipeVals.SetResult("MD_SnakePlantFlowerPot");  
        return recipeVals;
    } 
};