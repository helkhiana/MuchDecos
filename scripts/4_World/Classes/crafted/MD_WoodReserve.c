class MD_WoodReserve_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WoodReserve";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.90 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {  
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -1, false, false);
		recipeVals.SetIngredientTwo(0, -1, -4, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  4,	-1);
        recipeVals.SetIngredientItemOne("MetalPlate");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Reserve");
		recipeVals.SetResult("MD_WoodReserve_Kit");  
        return recipeVals;
    }
}

class MD_WoodReserve : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_WoodReserve_Kit";
	}   
}