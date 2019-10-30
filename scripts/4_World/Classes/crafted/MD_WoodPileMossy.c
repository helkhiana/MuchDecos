class MD_WoodPileMossy_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WoodPileMossy";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.40 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {  
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  3,	-1);
        recipeVals.SetIngredientItemOne("WoodAxe");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Pile Mossy");
		recipeVals.SetResult("MD_WoodPileMossy_Kit");  
        return recipeVals;
    }
}


class MD_WoodPileMossy : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_WoodPileMossy_Kit";
	}   
}