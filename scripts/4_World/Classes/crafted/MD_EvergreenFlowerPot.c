class MD_EvergreenFlowerPot : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_EvergreenFlowerPot";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0 0";
	}
    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, 0, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, -1,	-1);
        recipeVals.SetIngredientItemOne("MD_Bucket");
        recipeVals.SetIngredientItemTwo("PlantMaterial");
		recipeVals.SetName("Craft Evergreen Flower Pot");
		recipeVals.SetResult("MD_EvergreenFlowerPot");  
        return recipeVals;
    } 
};