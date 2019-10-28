class MD_GraveCross_One : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_GraveCross_One";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.5 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -5, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 5,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Cross Style 1");
		recipeVals.SetResult("MD_GraveCross_One");  
        return recipeVals;
    } 
}

class MD_GraveCross_Two : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_GraveCross_Two";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.6 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -5, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 5,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Cross Style 2");
		recipeVals.SetResult("MD_GraveCross_Two");  
        return recipeVals;
    } 
}

class MD_GraveCross_Three : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_GraveCross_Three";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.6 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -5, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 5,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Cross Style 3");
		recipeVals.SetResult("MD_GraveCross_Three");  
        return recipeVals;
    } 
}

class MD_GraveCross_Four : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_GraveCross_Four";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.6 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -5, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 5,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Cross Style 4");
		recipeVals.SetResult("MD_GraveCross_Four");  
        return recipeVals;
    } 
}

class MD_GraveCross_Five : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_GraveCross_Five";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.5 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -5, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 5,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Cross Style 5");
		recipeVals.SetResult("MD_GraveCross_Five");  
        return recipeVals;
    } 
}