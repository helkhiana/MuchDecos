class MD_Workbench_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Workbench";
	} 
	
	override vector Get_MDItemPos()
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
		recipeVals.SetName("Craft Craftbench");
		recipeVals.SetResult("MD_Workbench_Kit");  
        return recipeVals;
    }
};

class MD_Workbench : MD_Item
{    
    ItemBase MD_Firewood_Slot;
    ItemBase MD_Body_Slot;
    ItemBase MD_Headgear_Slot;
    ItemBase MD_ShortSticks_Slot;
    ItemBase MD_Material_Nails_Slot;
    ItemBase MD_Material_WoodenPlanks_Slot;
    ItemBase MD_Material_L1_WoodenPlanks_Slot;
    ItemBase MD_Material_L1_WoodenLogs_Slot;
    ItemBase MD_Material_L2_WoodenLogs_Slot;
    ItemBase MD_Material_MetalSheets_Slot;
    ItemBase MD_MetalWire_Slot;
    ItemBase MD_Material_MetalWire_Slot;
    ItemBase MD_Wall_Barbedwire_1_Slot;
    ItemBase MD_Wall_Barbedwire_2_Slot;
    ItemBase MD_Stones_Slot;

    void Get_Slots()
    {
        int slot_id;
		slot_id = InventorySlots.GetSlotIdFromString("Firewood");       
		MD_Firewood_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Body");
		MD_Body_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Headgear");
		MD_Headgear_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("WoodenStick");
		MD_ShortSticks_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_Nails");
		MD_Material_Nails_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_WoodenPlanks");
		MD_Material_WoodenPlanks_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_L1_WoodenPlanks");
		MD_Material_L1_WoodenPlanks_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_L2_WoodenLogs");
		MD_Material_L2_WoodenLogs_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_L1_WoodenLogs");
		MD_Material_L1_WoodenLogs_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_MetalSheets");
		MD_Material_MetalSheets_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("MetalWire");
		MD_MetalWire_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Material_MetalWire");
		MD_Material_MetalWire_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Wall_Barbedwire_1");
		MD_Wall_Barbedwire_1_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Wall_Barbedwire_2");
		MD_Wall_Barbedwire_2_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) );
		slot_id = InventorySlots.GetSlotIdFromString("Stones");
		MD_Stones_Slot = ItemBase.Cast( GetInventory().FindAttachment(slot_id) ); 
    } 

    override string Get_KitName()
	{
		return "MD_Workbench_Kit";
	} 

    bool IsInvEmpty()
	{   
		if (GetNumberOfItems() < 1 )
		{
			return true;
		}
		return false;
	}
	
	bool HasWires(bool metalwire1,  bool metalwire2, bool barbedwire1, bool barbedwire2)
	{   
        Get_Slots();

        if(metalwire1 && !MD_MetalWire_Slot)
        {
            return false;
        }
        if(metalwire2 && !MD_Material_MetalWire_Slot)
        {
            return false;
        }
        if(barbedwire1 && !MD_Wall_Barbedwire_1_Slot)
        {
            return false;
        }
        if(barbedwire2 && !MD_Wall_Barbedwire_2_Slot)
        {
            return false;
        }

        return true;
	}

    bool HasClothing(bool headgear, bool body)
	{   
        Get_Slots();

        if(headgear && !MD_Headgear_Slot)
        {
            return false;
        }
        if(body && !MD_Body_Slot)
        {
            return false;
        }

        return true;
	}
    
    bool HasWoodMaterials(int firewood, int shortsticks, int planks, int logs)
    {  
        Get_Slots();

        if(firewood > 0)
        {
            if(!MD_Firewood_Slot)
                return false;
            if(MD_Firewood_Slot.GetQuantity() < firewood)
                return false;
        }
        if(shortsticks > 0)
        {
            if(!MD_ShortSticks_Slot)
                return false;
            if(MD_ShortSticks_Slot.GetQuantity() < shortsticks)
                return false;
        }        
        
        if(planks > 0)
        {
            if(!MD_Material_WoodenPlanks_Slot || !MD_Material_L1_WoodenPlanks_Slot)
                return false;
            if(MD_Material_WoodenPlanks_Slot.GetQuantity() < planks || MD_Material_L1_WoodenPlanks_Slot.GetQuantity() < planks)
                return false;
        }
        if(logs > 0)
        {
            if(!MD_Material_L1_WoodenLogs_Slot || !MD_Material_L2_WoodenLogs_Slot)
                return false;
            if(MD_Material_L1_WoodenLogs_Slot.GetQuantity() < logs || MD_Material_L2_WoodenLogs_Slot.GetQuantity() < logs)
                return false;
        }

        return true;
	}

    bool HasOtherMaterials(int nails, int metalsheets, int stones)
	{   
        Get_Slots();
        if(nails > 0)
        {
            if(!MD_Material_Nails_Slot)
                return false;
            if(MD_Material_Nails_Slot.GetQuantity() < nails)
                return false;
        }
        if(metalsheets > 0)
        {
            if(!MD_Material_MetalSheets_Slot)
                return false;
            if(MD_Material_MetalSheets_Slot.GetQuantity() < metalsheets)
                return false;
        }
        if(stones > 0)
        {
            if(!MD_Stones_Slot)
                return false;
            if(MD_Stones_Slot.GetQuantity() < stones)
                return false;
        }       

        return true;
	}

    void RemoveWires(bool metalwire1,  bool metalwire2, bool barbedwire1, bool barbedwire2)
    {
        if(metalwire1){
            InventoryLocation md_wire_slot_il = new InventoryLocation;
            if (MD_MetalWire_Slot.GetInventory().GetCurrentInventoryLocation(md_wire_slot_il))
            {
                GetGame().ObjectDelete(md_wire_slot_il.GetItem());		
            }
        }
        if(metalwire2){
            InventoryLocation md_wire2_slot_il = new InventoryLocation;
            if (MD_Material_MetalWire_Slot.GetInventory().GetCurrentInventoryLocation(md_wire2_slot_il))
            {
                GetGame().ObjectDelete(md_wire2_slot_il.GetItem());		
            }
        }
        if(barbedwire1){
            InventoryLocation md_bwire_slot_il = new InventoryLocation;
            if (MD_Wall_Barbedwire_1_Slot.GetInventory().GetCurrentInventoryLocation(md_bwire_slot_il))
            {
                GetGame().ObjectDelete(md_bwire_slot_il.GetItem());		
            }
        }
        if(barbedwire2){
            InventoryLocation md_bwire2_slot_il = new InventoryLocation;
            if (MD_Wall_Barbedwire_2_Slot.GetInventory().GetCurrentInventoryLocation(md_bwire2_slot_il))
            {
                GetGame().ObjectDelete(md_bwire2_slot_il.GetItem());		
            }
        }

    }

    void RemoveClothing(bool headgear, bool body)
    {
        if(body){
            InventoryLocation md_body_slot_il = new InventoryLocation;
            if (MD_Body_Slot.GetInventory().GetCurrentInventoryLocation(md_body_slot_il))
            {
                GetGame().ObjectDelete(md_body_slot_il.GetItem());		
            }
        }
        if(headgear){
            InventoryLocation md_headgear_slot_il = new InventoryLocation;
            if (MD_Headgear_Slot.GetInventory().GetCurrentInventoryLocation(md_headgear_slot_il))
            {
                GetGame().ObjectDelete(md_headgear_slot_il.GetItem());		
            }
        }
    }

    void RemoveWoodMaterials(int firewood, int shortsticks, int planks, int logs)
    {
        if(MD_Firewood_Slot)
            MD_Firewood_Slot.SetQuantity(MD_Firewood_Slot.GetQuantity() - firewood);
        if(MD_ShortSticks_Slot)
            MD_ShortSticks_Slot.SetQuantity(MD_ShortSticks_Slot.GetQuantity() - shortsticks);

        if(planks > 0 && planks <= MD_Material_WoodenPlanks_Slot.GetQuantity())
        {
            MD_Material_WoodenPlanks_Slot.SetQuantity(MD_Material_WoodenPlanks_Slot.GetQuantity() - planks);
        }else if(planks > 0 && planks <= MD_Material_L1_WoodenPlanks_Slot.GetQuantity())
        {
            MD_Material_L1_WoodenPlanks_Slot.SetQuantity(MD_Material_L1_WoodenPlanks_Slot.GetQuantity() - planks);
        }

        if(logs > 0 && logs <= MD_Material_L1_WoodenLogs_Slot.GetQuantity())
        {
            MD_Material_L1_WoodenLogs_Slot.SetQuantity(MD_Material_L1_WoodenLogs_Slot.GetQuantity() - logs);
        }else if(logs > 0 && logs <= MD_Material_L2_WoodenLogs_Slot.GetQuantity())
        {
            MD_Material_L2_WoodenLogs_Slot.SetQuantity(MD_Material_L2_WoodenLogs_Slot.GetQuantity() - logs);
        }        	
    }

    void RemoveOtherMaterials(int nails, int metalsheets, int stones)
	{
        if(MD_Material_Nails_Slot)
            MD_Material_Nails_Slot.SetQuantity(MD_Material_Nails_Slot.GetQuantity() - nails);	
        if(MD_Material_MetalSheets_Slot)
            MD_Material_MetalSheets_Slot.SetQuantity(MD_Material_MetalSheets_Slot.GetQuantity() - metalsheets);
        if(MD_Stones_Slot)
            MD_Stones_Slot.SetQuantity(MD_Stones_Slot.GetQuantity() - stones);        
	}    
};