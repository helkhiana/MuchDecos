class CraftMD_Item extends RecipeBase
{	
	string name = "Craft";

    ref static array<string> ingredientOne = new array<string>;
	float 	addHealthOne 				= 0;
	float 	setHealthOne				= -1;
	float 	addQuantOne 				= 0;
	bool 	destroyOne 					= false;
	bool 	useSoftSkillOne 			= false;
    float	minDamageIngredientOne 		= -1;
	float	maxDamageIngredientOne 		= -1;		
	float	minQuantityIngredientOne 	= -1;
	float	maxQuantityIngredientOne 	= -1;	

    ref static array<string> ingredientTwo = new array<string>;
	float 	addHealthTwo 				= 0;
	float 	setHealthTwo 				= -1;
	float 	addQuantTwo 				= 0;
	bool 	destroyTwo 					= false;
	bool 	useSoftSkillTwo 			= false;		
	float	minDamageIngredientTwo 		= -1;
	float	maxDamageIngredientTwo 		= -1;		
	float	minQuantityIngredientTwo 	= 1;
	float	maxQuantityIngredientTwo 	= -1;

	string result = "Item";
	bool    setFullQuantResult 	    	= false;
	float   setQuantResult		    	= -1;
	float   setHealthResult 	        = -1;
	float   inheritsHealthResult 	    = -1;
	float   inheritsColorResult 	    = -1;
	float   resultToInvResult       	= -2;
	bool    useSoftSkillResult	    	= false;
	float   replaceIngredientResult 	= -1;

	void CraftMD_Item(MD_ItemRecipeValues recipeValues)
	{		
		for(int i = 0; i < MAX_NUMBER_OF_INGREDIENTS; i++)
		{
			m_Ingredients[i] = new array<string>;
			m_IngredientsSorted[i] = NULL;
		}

		m_NumberOfResults = 0;
		m_AnywhereInInventory = true;		
		Setup(recipeValues);
		Init();
	}

	override void Init()
	{
		m_Name = name;
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = 0.02;

		m_MinDamageIngredient[0] = minDamageIngredientOne;
		m_MaxDamageIngredient[0] = minDamageIngredientOne;
		
		m_MinQuantityIngredient[0] = minQuantityIngredientOne;
		m_MaxQuantityIngredient[0] = maxQuantityIngredientOne;
		
		m_MinDamageIngredient[1] = minDamageIngredientTwo;
		m_MaxDamageIngredient[1] = maxDamageIngredientTwo;
		
		m_MinQuantityIngredient[1] = minQuantityIngredientTwo;
		m_MaxQuantityIngredient[1] = maxQuantityIngredientTwo;
		
		//INGREDIENTS
		//ingredient 1
		foreach( string ingredientOneItem : ingredientOne )
		{
			InsertIngredient(0,ingredientOneItem);
		}
		m_IngredientAddHealth[0] = addHealthOne;
		m_IngredientSetHealth[0] = setHealthOne;
		m_IngredientAddQuantity[0] = addQuantOne;
		m_IngredientDestroy[0] = destroyOne;
		m_IngredientUseSoftSkills[0] = useSoftSkillOne;
		
		//ingredient 2
		foreach( string ingredientTwoItem : ingredientTwo )
		{
			InsertIngredient(1,ingredientTwoItem);
		}
		
		m_IngredientAddHealth[1] = addHealthTwo;
		m_IngredientSetHealth[1] = setHealthTwo;
		m_IngredientAddQuantity[1] = addQuantTwo;
		m_IngredientDestroy[1] = destroyTwo;
		m_IngredientUseSoftSkills[1] = useSoftSkillTwo;
				
		//result1
		AddResult(result);//add results here
		m_ResultSetFullQuantity[0] = setFullQuantResult;
		m_ResultSetQuantity[0] = setQuantResult;
		m_ResultSetHealth[0] = setHealthResult;
		m_ResultInheritsHealth[0] = inheritsHealthResult;
		m_ResultInheritsColor[0] = inheritsColorResult;
		m_ResultToInventory[0] = resultToInvResult;
		m_ResultUseSoftSkills[0] = useSoftSkillResult;
		m_ResultReplacesIngredient[0] = replaceIngredientResult;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}

	void Setup(MD_ItemRecipeValues recipeValues)
	{
		name = recipeValues.g_name;
		ingredientOne = recipeValues.g_ingredientOne;
		addHealthOne = recipeValues.g_addHealthOne;
		setHealthOne = recipeValues.g_setHealthOne;
		addQuantOne	= recipeValues.g_addQuantOne;
		destroyOne = recipeValues.g_destroyOne;
		useSoftSkillOne	= recipeValues.g_useSoftSkillOne;	
		minDamageIngredientOne = recipeValues.g_minDamageIngredientOne;
        minDamageIngredientOne = recipeValues.g_minDamageIngredientOne;
        minQuantityIngredientOne = recipeValues.g_minQuantityIngredientOne;
        maxQuantityIngredientOne = recipeValues.g_maxQuantityIngredientOne;

		ingredientTwo = recipeValues.g_ingredientTwo;
		addHealthTwo = recipeValues.g_addHealthTwo;
		setHealthTwo = recipeValues.g_setHealthTwo;
		addQuantTwo	= recipeValues.g_addQuantTwo;
		destroyTwo = recipeValues.g_destroyTwo;
		useSoftSkillTwo = recipeValues.g_useSoftSkillTwo;
        minDamageIngredientTwo = recipeValues.g_minDamageIngredientTwo;
        maxDamageIngredientTwo = recipeValues.g_maxDamageIngredientTwo;
        minQuantityIngredientTwo = recipeValues.g_minQuantityIngredientTwo;
        maxQuantityIngredientTwo = recipeValues.g_maxQuantityIngredientTwo;
		
		result = recipeValues.g_result;
        setFullQuantResult = recipeValues.g_setFullQuantResult;
        setQuantResult = recipeValues.g_setQuantResult;
        setHealthResult = recipeValues.g_setHealthResult;
        inheritsHealthResult = recipeValues.g_inheritsHealthResult;
        inheritsColorResult = recipeValues.g_inheritsColorResult;
        resultToInvResult = recipeValues.g_resultToInvResult;
        useSoftSkillResult = recipeValues.g_useSoftSkillResult;
        replaceIngredientResult = recipeValues.g_replaceIngredientResult;
	}
};