class MD_LobbyTable_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_LobbyTable";
	} 
	
	override vector Get_ItemPlacingPosMD()
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
    override string Get_KitNameMD()
	{
		return "MD_LobbyTable_Kit";
	}   
};


//MD_WornTable_Kit
class MD_WornTable_Kit : MD_Item_Kit
{	
	override string Get_ItemNameMD()
	{
		return "MD_WornTable";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.43 0";
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
		recipeVals.SetName("Craft Worn Table");
		recipeVals.SetResult("MD_WornTable_Kit");  
        return recipeVals;
    } 
};
class MD_WornTable : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_WornTable_Kit";
	}
};

class MD_SquareTable_Kit : MD_Item_Kit
{	
	override string Get_ItemNameMD()
	{
		return "MD_SquareTable";
	}
    override vector Get_ItemPlacingPosMD()
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
    override string Get_KitNameMD()
	{
		return "MD_SquareTable_Kit";
	}   
};