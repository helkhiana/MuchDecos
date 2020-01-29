class CfgPatches
{
	class MuchDecos_Sounds_Doors
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};


class CfgSoundShaders
{
	class base_SoundShaderFlies
	{
		range=20;
		rangeCurve="defaultLFECurve";
		volume=3;
	};

    class MD_doorMetalSlideLargeOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_4",
				1
			}
		};
	};

	
    class MD_doorMetalSlideLargeClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_4",
				1
			}
		};
	};

	class MD_doorWoodGateSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallOpen_2",
				1
			}
		};
	};

	class MD_doorWoodGateSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallClose_2",
				1
			}
		};
	};

	class MD_doorMetalGateMeshOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshOpen_1",
				1
			}
		};
	};

	class MD_doorMetalGateMeshClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshClose_1",
				1
			}
		};
	};

	class MD_doorMetalGateOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateOpen_2",
				1
			}
		};
	};

	class MD_doorMetalGateClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateClose_2",
				1
			}
		};
	};

	
	class MD_doorWoodSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_4",
				1
			}
		};
	};

	class MD_doorWoodSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_4",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_5",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_6",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_7",
				1
			}
		};
	};
	
	class MD_doorWoodGreenhouseOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_2",
				1
			}
		};
	};

	class MD_doorWoodGreenhouseClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_2",
				1
			}
		};
	};
	
	class MD_doorMetalSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalSmall\doorMetalSmallOpen_1",
				1
			}
		};
	};

	class MD_doorMetalSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalSmall\doorMetalSmallClose_1",
				1
			}
		};
	};
	
	class MD_doorWoodNolatchOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_4",
				1
			}
		};
	};

	class MD_doorWoodNolatchClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_4",
				1
			}
		};
	};
};
class CfgSoundSets
{
	class base_SoundSet
	{
		sound3DProcessingType="defaultLFECurve";
		spatial=1;
		doppler=0;
		loop=0;
		volume=30;
	};

    class base_SoundSetLoop
	{
		sound3DProcessingType="defaultLFECurve";
		spatial=1;
		doppler=0;
		loop=1;
	};
    
	class MD_doorMetalSlideLargeOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalSlideLargeOpen_SoundShader"
		};
	};
	class MD_doorMetalSlideLargeClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalSlideLargeClose_SoundShader"
		};
	};
	class MD_doorWoodGateSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodGateSmallOpen_SoundShader"
		};
	};
	
	class MD_doorWoodGateSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodGateSmallClose_SoundShader"
		};
	};

	
	class MD_doorMetalGateMeshOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalGateMeshOpen_SoundShader"
		};
	};
	
	class MD_doorMetalGateMeshClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalGateMeshClose_SoundShader"
		};
	};
	
	class MD_doorMetalGateOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalGateOpen_SoundShader"
		};
	};
	
	class MD_doorMetalGateClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalGateClose_SoundShader"
		};
	};
	
	class MD_doorWoodSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodSmallOpen_SoundShader"
		};
	};
	
	class MD_doorWoodSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodSmallClose_SoundShader"
		};
	};
	
	class MD_doorWoodGreenhouseOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodGreenhouseOpen_SoundShader"
		};
	};
	
	class MD_doorWoodGreenhouseClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodGreenhouseClose_SoundShader"
		};
	};
	
	class MD_doorMetalSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalSmallOpen_SoundShader"
		};
	};
	
	class MD_doorMetalSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorMetalSmallClose_SoundShader"
		};
	};
	
	class MD_doorWoodNolatchOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodNolatchOpen_SoundShader"
		};
	};
	
	class MD_doorWoodNolatchClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MD_doorWoodNolatchClose_SoundShader"
		};
	};
};