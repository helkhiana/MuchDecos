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
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, -7, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  7,	-1);
        recipeVals.SetIngredientItemOne("Hacksaw");
        recipeVals.SetIngredientItemTwo("WoodenPlank");
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