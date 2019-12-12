class MD_ItemRecipeValues
{
    string g_name = "Craft";

    ref array<string> g_ingredientOne = {"Item",};
	float g_addHealthOne 		= 0;
	float g_setHealthOne		= -1;
	float g_addQuantOne 		= 0;
	bool g_destroyOne 		= false;
	bool g_useSoftSkillOne 	= false;	

    ref array<string> g_ingredientTwo = {"Item",};
	float g_addHealthTwo 		= 0;
	float g_setHealthTwo 		= -1;
	float g_addQuantTwo 		= 0;
	bool g_destroyTwo 		= false;
	bool g_useSoftSkillTwo 	= false;

    
    string g_result = "Item";
	bool    g_setFullQuantResult 	    = false;
	float   g_setQuantResult		    = -1;
	float   g_setHealthResult 	        = -1;
	float   g_inheritsHealthResult 	    = -1;
	float   g_inheritsColorResult 	    = -1;
	float   g_resultToInvResult       	= -2;
	bool    g_useSoftSkillResult	    = false;
	float   g_replaceIngredientResult 	= -1;

    float	g_minDamageIngredientOne = -1;
	float	g_maxDamageIngredientOne = -1;
		
	float	g_minQuantityIngredientOne = -1;
	float	g_maxQuantityIngredientOne = -1;
		
	float	g_minDamageIngredientTwo = -1;
	float	g_maxDamageIngredientTwo = -1;
		
	float	g_minQuantityIngredientTwo = -1;
	float	g_maxQuantityIngredientTwo = -1;

	void SetIngredientOne(float addHealth, float setHealth, float addQuant, bool destroy, bool useSoftSkill)
	{		
		g_addHealthOne      = addHealth;
		g_setHealthOne      = setHealth;
		g_addQuantOne       = addQuant;
		g_destroyOne        = destroy;
		g_useSoftSkillOne   = useSoftSkill;
	}

    void Set_addHealthOne(float addHealth)
	{		
		g_addHealthOne = addHealth;
	}
    void Set_setHealthOne(float setHealth)
	{		
		g_setHealthOne = setHealth;
	}

    void Set_addQuantOne(float addQuant)
	{		
		g_addQuantOne = addQuant;
	}
    void Set_destroyOne(bool destroy)
	{		
		g_destroyOne = destroy;
	}
    void Set_useSoftSkillOne(bool useSoftSkill)
	{		
		g_useSoftSkillOne = useSoftSkill;
	}

    void SetMinMaxIngredientOne(float minDamageIngredientOne, float	maxDamageIngredientOne,	float minQuantityIngredientOne,	float maxQuantityIngredientOne)
    {
        g_minDamageIngredientOne = minDamageIngredientOne;
        g_maxDamageIngredientOne = maxDamageIngredientOne;

        g_minQuantityIngredientOne = minQuantityIngredientOne;
        g_maxQuantityIngredientOne = maxQuantityIngredientOne;
    }

    void Set_minDamageIngredientOne(float minDamageIngredientOne)
	{		
		g_minDamageIngredientOne = minDamageIngredientOne;
	}
    void Set_maxDamageIngredientOne(float maxDamageIngredientOne)
	{		
		g_maxDamageIngredientOne = maxDamageIngredientOne;
	}

    void Set_minQuantityIngredientOne(float minQuantityIngredientOne)
	{		
		g_minQuantityIngredientOne = minQuantityIngredientOne;
	}
    void Set_maxQuantityIngredientOne(float maxQuantityIngredientOne)
	{		
		g_maxQuantityIngredientOne = maxQuantityIngredientOne;
	}

	void SetIngredientTwo(float addHealth, float setHealth, float addQuant, bool destroy, bool useSoftSkill){
		
		g_addHealthTwo      = addHealth;
		g_setHealthTwo      = setHealth;
		g_addQuantTwo       = addQuant;
		g_destroyTwo        = destroy;
		g_useSoftSkillTwo   = useSoftSkill;
	}

    void Set_addHealthTwo(float addHealth)
	{		
		g_addHealthTwo = addHealth;
	}
    void Set_setHealthTwo(float setHealth)
	{		
		g_setHealthTwo = setHealth;
	}

    void Set_addQuantTwo(float addQuant)
	{		
		g_addQuantTwo = addQuant;
	}
    void Set_destroyTwo(bool destroy)
	{		
		g_destroyTwo = destroy;
	}
    void Set_useSoftSkillTwo(bool useSoftSkill)
	{		
		g_useSoftSkillTwo = useSoftSkill;
	}

    void SetMinMaxIngredientTwo(float minDamageIngredientTwo, float	maxDamageIngredientTwo,	float minQuantityIngredientTwo,	float maxQuantityIngredientTwo)
    {
        g_minDamageIngredientTwo = minDamageIngredientTwo;
        g_maxDamageIngredientTwo = maxDamageIngredientTwo;

        g_minQuantityIngredientTwo = minQuantityIngredientTwo;
        g_maxQuantityIngredientTwo = maxQuantityIngredientTwo;
    }

    void Set_minDamageIngredientTwo(float minDamageIngredientTwo)
	{		
		g_minDamageIngredientTwo = minDamageIngredientTwo;
	}
    void Set_maxDamageIngredientTwo(float maxDamageIngredientTwo)
	{		
		g_maxDamageIngredientTwo = maxDamageIngredientTwo;
	}

    void Set_minQuantityIngredientTwo(float minQuantityIngredientTwo)
	{		
		g_minQuantityIngredientTwo = minQuantityIngredientTwo;
	}
    void Set_maxQuantityIngredientTwo(float maxQuantityIngredientTwo)
	{		
		g_maxQuantityIngredientTwo = maxQuantityIngredientTwo;
	}


    void SetResultDetails(bool setFullQuantResult, float setQuantResult, float setHealthResult, float inheritsHealthResult, float inheritsColorResult,	float resultToInvResult, bool useSoftSkillResult, float replaceIngredientResult)
    {
        g_setFullQuantResult 	    = setFullQuantResult;
        g_setQuantResult		    = setQuantResult;
        g_setHealthResult 	        = setHealthResult;
        g_inheritsHealthResult 	    = inheritsHealthResult;
        g_inheritsColorResult 	    = inheritsColorResult;
        g_resultToInvResult       	= resultToInvResult;
        g_useSoftSkillResult	    = useSoftSkillResult;
        g_replaceIngredientResult 	= replaceIngredientResult;
    }

    void SetName(string name){
        g_name = name;
    }

    void SetResult(string result){
        g_result = result;
    }
    
    void SetIngredientItemOne(array<string> items){       
        g_ingredientOne = items;
    }

    void SetIngredientItemTwo(array<string> items){
        g_ingredientTwo = items;
    }

    void SetQuantResult(float setQuantResult){
         g_setQuantResult		    = setQuantResult;
    }
    void Set_useSoftSkillResult(bool useSoftSkillResult){
        g_useSoftSkillResult	    = useSoftSkillResult;
    }
}