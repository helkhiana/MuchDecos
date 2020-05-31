class MD_Double_Gate : MD_OpenableItem_Base
{
    override protected void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("DoorsTwin1",1);
        }
        else
        {
            SetAnimationPhase("DoorsTwin1",0);
        }
    }
	override bool IsWallOrGate()
	{
		return true;
	}
	
};

//MD_Fence_Forest_Kit
class MD_Fence_Gate_Forest_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_Fence_Gate_Forest";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.8 0";
	} 
};
class MD_Fence_Gate_Forest : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorWoodGateSmallOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorWoodGateSmallClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Fence_Gate_Forest_Kit";}
	override bool IsWallOrGate()
	{
		return true;
	}
};

//MD_Gate_TallSliding_Kit
class MD_Gate_TallSliding_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Gate_TallSliding";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.91 0";
	} 
};
class MD_Gate_TallSliding : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorMetalSlideLargeOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalSlideLargeClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Gate_TallSliding_Kit"; }
	override bool IsWallOrGate()
	{
		return true;
	}
};

//MD_Gate_ShortSliding_Kit
class MD_Gate_ShortSliding_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Gate_ShortSliding";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.45 0";
	} 
};
class MD_Gate_ShortSliding : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorMetalSlideLargeOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalSlideLargeClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Gate_ShortSliding_Kit"; }
	override bool IsWallOrGate()
	{
		return true;
	}
};
//MD_Double_Gate_MetalFence1_Kit
class MD_Double_Gate_MetalFence1_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Double_Gate_MetalFence1";
	}
	override vector Get_MDItemPos()
	{
		return "0 1.18 0";
	} 
};
class MD_Double_Gate_MetalFence1 : MD_Double_Gate
{
	override string GetOpenSoundSet(){ return "MD_doorMetalGateMeshOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalGateMeshClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Double_Gate_MetalFence1_Kit"; }
};

//MD_Double_Gate_MetalFence2_Kit
class MD_Double_Gate_MetalFence2_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Double_Gate_MetalFence2";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.73 0";
	} 
};
class MD_Double_Gate_MetalFence2 : MD_Double_Gate
{
	override string GetOpenSoundSet(){ return "MD_doorMetalGateMeshOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalGateMeshClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Double_Gate_MetalFence2_Kit"; }
};

//MD_Double_Gate_TinFence1_Kit
class MD_Double_Gate_TinFence1_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Double_Gate_TinFence1";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.73 0";
	} 
};
class MD_Double_Gate_TinFence1 : MD_Double_Gate
{
	override string GetOpenSoundSet(){ return "MD_doorMetalGateOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalGateClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Double_Gate_TinFence1_Kit"; }
};

//MD_Double_Gate_TinFence2_Kit
class MD_Double_Gate_TinFence2_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_Double_Gate_TinFence2";
	}
	override vector Get_MDItemPos()
	{
		return "0 0.88 0";
	} 
};
class MD_Double_Gate_TinFence2 : MD_Double_Gate
{
	override string GetOpenSoundSet(){ return "MD_doorMetalGateOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalGateClose_SoundSet"; }
	override string Get_MDKitName(){ return "MD_Double_Gate_TinFence2_Kit"; }
};