class MD_SquareTable_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_SquareTable";
	}
    override vector Get_MDItemPos()
	{
		return "0 0 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientTwo(7);
        recipeVals.Set_addHealthOne(-5);
        recipeVals.Set_addQuantTwo(-7);
		array<string> ingredientsOne =
        {"Hacksaw"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Square Table");
		recipeVals.SetResult("MD_SquareTable");  
        return recipeVals;
    } 
};

class MD_SquareTable : MD_Item
{	
    override string Get_KitName()
	{
		return "MD_SquareTable_Kit";
	}   
};