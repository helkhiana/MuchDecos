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
        recipeVals.Set_destroyOne(true);
        recipeVals.Set_destroyTwo(true);
		array<string> ingredientsOne =
        {"MD_Bucket"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"PlantMaterial"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Snake Plant Flower Pot");
		recipeVals.SetResult("MD_SnakePlantFlowerPot");  
        return recipeVals;
    } 
};