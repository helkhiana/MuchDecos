class MD_WoodTable_Indoor_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WoodTable_Indoor";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.30 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {  
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -20, false, false);
		recipeVals.SetIngredientTwo(0, -1, -50, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 20,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 50,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Table Indoor");
		recipeVals.SetResult("MD_WoodTable_Indoor_Kit");  
        return recipeVals;
    }
};

class MD_WoodTable_Indoor : MD_Item
{
    override string Get_KitName()
	{
		return "MD_WoodTable_Indoor_Kit";
	}   
};