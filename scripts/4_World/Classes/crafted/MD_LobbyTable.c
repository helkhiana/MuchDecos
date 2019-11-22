class MD_LobbyTable_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_LobbyTable";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -5, false, false);
		recipeVals.SetIngredientTwo(0, -1, -10, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 5,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 10,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlanks");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Lobby Table");
		recipeVals.SetResult("MD_LobbyTable_Kit");  
        return recipeVals;
    } 
};

class MD_LobbyTable : MD_Item
{
    override string Get_KitName()
	{
		return "MD_LobbyTable_Kit";
	}   
};