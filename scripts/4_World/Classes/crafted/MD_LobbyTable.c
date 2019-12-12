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

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(5);
		recipeVals.Set_minQuantityIngredientTwo(10);
        recipeVals.Set_addQuantOne(-5);
        recipeVals.Set_addQuantTwo(-10);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
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