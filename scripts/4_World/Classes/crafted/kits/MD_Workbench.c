class MD_Workbench_Kit : MD_Item_Kit
{	
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.5 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(10);
		recipeVals.Set_minQuantityIngredientTwo(30);
        recipeVals.Set_addQuantOne(-10);
        recipeVals.Set_addQuantTwo(-30);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Nail"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Workbench");
		recipeVals.SetResult("MD_Workbench_Kit");  
        return recipeVals;
    }
};

class MD_Workbench : MD_Item
{
	bool HasWires(bool metalwire1,  bool metalwire2, bool barbedwire1, bool barbedwire2)
	{   
        return true;
	}
    bool HasClothing(bool headgear, bool body)
	{   
        return true;
	}    
    bool HasWoodMaterials(int firewood, int shortsticks, int planks, int logs)
    {  
        return true;
	}
    bool HasOtherMaterials(int nails, int metalsheets, int stones)
	{       

        return true;
	}    
};