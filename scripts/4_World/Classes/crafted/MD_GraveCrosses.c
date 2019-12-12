class MD_GraveCross_One : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_GraveCross_One";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(5);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-5);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Cross Style 1");
		recipeVals.SetResult("MD_GraveCross_One");  
        return recipeVals;
    } 
};

class MD_GraveCross_Two : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_GraveCross_Two";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(5);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-5);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Cross Style 2");
		recipeVals.SetResult("MD_GraveCross_Two");  
        return recipeVals;
    } 
};

class MD_GraveCross_Three : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_GraveCross_Three";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(5);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-5);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Cross Style 3");
		recipeVals.SetResult("MD_GraveCross_Three");  
        return recipeVals;
    } 
};

class MD_GraveCross_Four : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_GraveCross_Four";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.6 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(5);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-5);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Cross Style 4");
		recipeVals.SetResult("MD_GraveCross_Four");  
        return recipeVals;
    } 
};

class MD_GraveCross_Five : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_GraveCross_Five";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(5);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-5);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Cross Style 5");
		recipeVals.SetResult("MD_GraveCross_Five");  
        return recipeVals;
    } 
};