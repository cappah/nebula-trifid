#pragma once
//------------------------------------------------------------------------------
/**
    @file coregraphics/shadersemantics.h
    
    Standard shader variable semantic names.
    
    (C) 2009 Radon Labs GmbH
    (C) 2013-2015 Individual contributors, see AUTHORS file
*/
#include "core/types.h"

//------------------------------------------------------------------------------
#if (__DX11__ || __OGL4__)
#define NEBULA3_SEMANTIC_CHARACTERINDEX             "CharacterIndex"
#define NEBULA3_SEMANTIC_JOINTPALETTE               "JointPalette"
#define NEBULA3_SEMANTIC_JOINTBUFFER				"JointBuffer"
#define NEBULA3_SEMANTIC_MODELVIEWPROJECTION        "ModelViewProjection"
#define NEBULA3_SEMANTIC_INVVIEWPROJECTION			"InvViewProjection"
#define NEBULA3_SEMANTIC_MODEL                      "Model"
#define NEBULA3_SEMANTIC_VIEW                       "View"
#define NEBULA3_SEMANTIC_MODELVIEW                  "ModelView"  
#define NEBULA3_SEMANTIC_INVMODEL					"InvModel"  
#define NEBULA3_SEMANTIC_INVVIEW                    "InvView"
#define NEBULA3_SEMANTIC_INVMODELVIEW               "InvModelView"
#define NEBULA3_SEMANTIC_VIEWPROJECTION             "ViewProjection"
#define NEBULA3_SEMANTIC_EYEPOS                     "EyePos"
#define NEBULA3_SEMANTIC_FOCALLENGTH                "FocalLength"
#define NEBULA3_SEMANTIC_PROJECTION                 "Projection"
#define NEBULA3_SEMANTIC_INVPROJECTION              "InvProjection"
#define NEBULA3_SEMANTIC_VIEWMATRIXARRAY			"ViewMatrixArray"
#define NEBULA3_SEMANTIC_PIXELSIZE                  "PixelSize"
#define NEBULA3_SEMANTIC_HALFPIXELSIZE              "HalfPixelSize"
#define NEBULA3_SEMANTIC_LIGHTPOSRANGE              "LightPosRange"
#define NEBULA3_SEMANTIC_LIGHTCOLOR                 "LightColor"
#define NEBULA3_SEMANTIC_LIGHTSHADOWBIAS			"LightShadowBias"
#define NEBULA3_SEMANTIC_GLOBALLIGHTDIR             "GlobalLightDir"
#define NEBULA3_SEMANTIC_GLOBALLIGHTCOLOR           "GlobalLightColor"
#define NEBULA3_SEMANTIC_GLOBALAMBIENTLIGHTCOLOR    "GlobalAmbientLightColor"
#define NEBULA3_SEMANTIC_GLOBALBACKLIGHTCOLOR       "GlobalBackLightColor"
#define NEBULA3_SEMANTIC_GLOBALBACKLIGHTOFFSET      "GlobalBackLightOffset"
#define NEBULA3_SEMANTIC_GLOBALLIGHTSHADOWBIAS		"GlobalLightShadowBias"
#define NEBULA3_SEMANTIC_LIGHTPROJTRANSFORM         "LightProjTransform"   
#define NEBULA3_SEMANTIC_SHADOWTRANSFORM            "ShadowTransform"
#define NEBULA3_SEMANTIC_SHADOWPROJTRANSFORM        "ShadowProjTransform"
#define NEBULA3_SEMANTIC_INVERSELIGHTPROJECTION     "InvLightProj"
#define NEBULA3_SEMANTIC_SHADOWOFFSETSCALE          "ShadowOffsetScale"
#define NEBULA3_SEMANTIC_SHADOWCONSTANTS            "ShadowConstants"
#define NEBULA3_SEMANTIC_SHADOWINTENSITY            "ShadowIntensity"
#define NEBULA3_SEMANTIC_CASTSHADOWS                "CastShadows"
#define NEBULA3_SEMANTIC_FADEVALUE                  "FadeValue"
#define NEBULA3_SEMANTIC_SATURATION                 "Saturation"
#define NEBULA3_SEMANTIC_BALANCE                    "Balance"
#define NEBULA3_SEMANTIC_MAXLUMINANCE				"MaxLuminance"
#define NEBULA3_SEMANTIC_FOGCOLOR                   "FogColor"
#define NEBULA3_SEMANTIC_FOGDISTANCES               "FogDistances"
#define NEBULA3_SEMANTIC_HDRBLOOMCOLOR              "HDRBloomColor"
#define NEBULA3_SEMANTIC_HDRBLOOMSCALE              "HDRBloomScale"
#define NEBULA3_SEMANTIC_HDRBRIGHTPASSTHRESHOLD     "HDRBrightPassThreshold"
#define NEBULA3_SEMANTIC_DOFDISTANCES               "DoFDistances"
#define NEBULA3_SEMANTIC_EMITTERTRANSFORM           "EmitterTransform"
#define NEBULA3_SEMANTIC_BILLBOARD                  "IsBillBoard"
#define NEBULA3_SEMANTIC_BBOXCENTER                 "BBoxCenter"
#define NEBULA3_SEMANTIC_BBOXSIZE                   "BBoxSize"
#define NEBULA3_SEMANTIC_TIME						"Time"
#define NEBULA3_SEMANTIC_TIMEDIFF					"TimeDiff"
#define NEBULA3_SEMANTIC_TIMEANDRANDOM				"TimeAndRandom"
#define NEBULA3_SEMANTIC_RANDOM						"Random"
#define NEBULA3_SEMANTIC_OBJECTID					"ObjectId"
#define NEBULA3_SEMANTIC_ANIMPHASES					"NumAnimPhases"
#define NEBULA3_SEMANTIC_ANIMSPERSEC				"AnimFramesPerSecond"
#define NEBULA3_SEMANTIC_UVTOVIEWA					"UVToViewA"
#define NEBULA3_SEMANTIC_UVTOVIEWB					"UVToViewB"
#define NEBULA3_SEMANTIC_R							"R"
#define NEBULA3_SEMANTIC_R2							"R2"
#define NEBULA3_SEMANTIC_NEGINVR2					"NegInvR2"
#define NEBULA3_SEMANTIC_PIXELFOCALLENGTH			"FocalLength"
#define NEBULA3_SEMANTIC_AORESOLUTION				"AOResolution"
#define NEBULA3_SEMANTIC_INVAORESOLUTION			"InvAOResolution"
#define NEBULA3_SEMANTIC_MAXRADIUSPIXELS			"MaxRadiusPixels"
#define NEBULA3_SEMANTIC_STRENGHT					"Strength"
#define NEBULA3_SEMANTIC_TANANGLEBIAS				"TanAngleBias"
#define NEBULA3_SEMANTIC_POWEREXPONENT				"PowerExponent"
#define NEBULA3_SEMANTIC_FALLOFF					"BlurFalloff"
#define NEBULA3_SEMANTIC_DEPTHTHRESHOLD				"BlurDepthThreshold"
#define NEBULA3_SEMANTIC_COLORSOURCE				"ColorSource"
#define NEBULA3_SEMANTIC_LIGHTPOS					"LightPos"
#define NEBULA3_SEMANTIC_DENSITY					"Density"
#define NEBULA3_SEMANTIC_DECAY						"Decay"
#define NEBULA3_SEMANTIC_WEIGHT						"Weight"
#define NEBULA3_SEMANTIC_EXPOSURE					"Exposure"
#define NEBULA3_SEMANTIC_LIGHTTEXTURE				"LightTexture"
#define NEBULA3_SEMANTIC_WORLDVIEWPROJ				"WorldViewProjection"
#define NEBULA3_SEMANTIC_WORLD						"World"
#define NEBULA3_SEMANTIC_WORLDVIEW					"WorldView"
#define NEBULA3_SEMANTIC_SHADOW						"CSMShadowMatrix"
#define NEBULA3_SEMANTIC_CASCADEOFFSET				"CascadeOffset"
#define NEBULA3_SEMANTIC_CASCADESCALE				"CascadeScale"
#define NEBULA3_SEMANTIC_CASCADELEVELS				"CascadeLevels"
#define NEBULA3_SEMANTIC_PCFBLURSTART				"PCFBlurForLoopStart"
#define NEBULA3_SEMANTIC_PCFBLUREND					"PCFBlurForLoopEnd"
#define NEBULA3_SEMANTIC_MINBORDERPADDING			"MinBorderPadding"
#define NEBULA3_SEMANTIC_MAXBORDERPADDING			"MaxBorderPadding"
#define NEBULA3_SEMANTIC_SHADOWPARTITIONSIZE		"ShadowPartitionSize"
#define NEBULA3_SEMANTIC_CASCADEBLENDAREA			"CascadeBlendArea"
#define NEBULA3_SEMANTIC_TEXELSIZE					"TexelSize"
#define NEBULA3_SEMANTIC_NATIVETEXELSIZEINX			"NativeTexelSizeInX"
#define NEBULA3_SEMANTIC_CASCADEFRUSTUMSEYE			"CascadeFrustumsEyeSpaceDepthsFloat"
#define NEBULA3_SEMANTIC_CASCADEFRUSTUMSEYE4		"CascadeFrustumsEyeSpaceDepthsFloat4"
#define NEBULA3_SEMANTIC_PIXELCAMERAPOSITION		"CameraPosition"
#define NEBULA3_SEMANTIC_VERTEXCAMERAPOSITION		"CameraPosition"
#define NEBULA3_SEMANTIC_LIGHTDIR					"LightDir"
#define NEBULA3_SEMANTIC_CONTRAST					"Contrast"
#define NEBULA3_SEMANTIC_BRIGHTNESS					"Brightness"
#define NEBULA3_SEMANTIC_SKYBLENDFACTOR				"SkyBlendFactor"
#define NEBULA3_SEMANTIC_SKY1						"SkyLayer1"
#define NEBULA3_SEMANTIC_SKY2						"SkyLayer2"
#define NEBULA3_SEMANTIC_ENVIRONMENT				"EnvironmentMap"
#define NEBULA3_SEMANTIC_IRRADIANCE					"IrradianceMap"
#define NEBULA3_SEMANTIC_ENVFALLOFF					"FalloffDistance"
#define NEBULA3_SEMANTIC_ENVFALLOFFDISTANCE			"FalloffDistance"
#define NEBULA3_SEMANTIC_ENVFALLOFFPOWER			"FalloffPower"
#define NEBULA3_SEMANTIC_NUMENVMIPS					"NumEnvMips"
#define NEBULA3_SEMANTIC_BBOXMIN					"BBoxMin"
#define NEBULA3_SEMANTIC_BBOXMAX					"BBoxMax"
#define NEBULA3_SEMANTIC_PEROBJECT					"PerObject"

// instancing
#define NEBULA3_SEMANTIC_MODELARRAY					"ModelArray"
#define NEBULA3_SEMANTIC_MODELVIEWARRAY				"ModelViewArray"
#define NEBULA3_SEMANTIC_MODELVIEWPROJECTIONARRAY	"ModelViewProjectionArray"
#define NEBULA3_SEMANTIC_OBJECTIDARRAY              "ObjectIdArray"
#else
#define NEBULA3_SEMANTIC_CHARACTERINDEX             "CharacterIndex"
#define NEBULA3_SEMANTIC_JOINTPALETTE               "JointPalette"
#define NEBULA3_SEMANTIC_MODELVIEWPROJECTION        "ModelViewProjection"
#define NEBULA3_SEMANTIC_MODEL                      "Model"
#define NEBULA3_SEMANTIC_VIEW                       "View"
#define NEBULA3_SEMANTIC_MODELVIEW                  "ModelView"  
#define NEBULA3_SEMANTIC_INVMODELVIEW               "InvModelView"
#define NEBULA3_SEMANTIC_INVVIEW                    "InvView"
#define NEBULA3_SEMANTIC_VIEWPROJECTION             "ViewProjection"
#define NEBULA3_SEMANTIC_EYEPOS                     "EyePos"
#define NEBULA3_SEMANTIC_FOCALLENGTH                "FocalLength"
#define NEBULA3_SEMANTIC_PROJECTION                 "Projection"
#define NEBULA3_SEMANTIC_INVPROJECTION              "InvProjection"
#define NEBULA3_SEMANTIC_PIXELSIZE                  "PixelSize"
#define NEBULA3_SEMANTIC_HALFPIXELSIZE              "HalfPixelSize"
#define NEBULA3_SEMANTIC_LIGHTPOSRANGE              "LightPosRange"
#define NEBULA3_SEMANTIC_LIGHTCOLOR                 "LightColor"
#define NEBULA3_SEMANTIC_GLOBALLIGHTDIR             "GlobalLightDir"
#define NEBULA3_SEMANTIC_GLOBALLIGHTCOLOR           "GlobalLightColor"
#define NEBULA3_SEMANTIC_GLOBALAMBIENTLIGHTCOLOR    "GlobalAmbientLightColor"
#define NEBULA3_SEMANTIC_GLOBALBACKLIGHTCOLOR       "GlobalBackLightColor"
#define NEBULA3_SEMANTIC_GLOBALBACKLIGHTOFFSET      "GlobalBackLightOffset"   
#define NEBULA3_SEMANTIC_LIGHTPROJTRANSFORM         "LightProjTransform"   
#define NEBULA3_SEMANTIC_SHADOWTRANSFORM            "ShadowTransform"
#define NEBULA3_SEMANTIC_SHADOWPROJTRANSFORM        "ShadowProjTransform"
#define NEBULA3_SEMANTIC_INVERSELIGHTPROJECTION     "InvLightProj"
#define NEBULA3_SEMANTIC_SHADOWOFFSETSCALE          "ShadowOffsetScale"
#define NEBULA3_SEMANTIC_SHADOWCONSTANTS            "ShadowConstants"
#define NEBULA3_SEMANTIC_SHADOWINTENSITY            "ShadowIntensity"
#define NEBULA3_SEMANTIC_CASTSHADOWS                "CastShadows"
#define NEBULA3_SEMANTIC_FADEVALUE                  "FadeValue"
#define NEBULA3_SEMANTIC_SATURATION                 "Saturation"
#define NEBULA3_SEMANTIC_BALANCE                    "Balance"
#define NEBULA3_SEMANTIC_FOGCOLOR                   "FogColor"
#define NEBULA3_SEMANTIC_FOGDISTANCES               "FogDistances"
#define NEBULA3_SEMANTIC_HDRBLOOMCOLOR              "HdrBloomColor"
#define NEBULA3_SEMANTIC_HDRBLOOMSCALE              "HdrBloomScale"
#define NEBULA3_SEMANTIC_HDRBRIGHTPASSTHRESHOLD     "HdrBrightPassThreshold"
#define NEBULA3_SEMANTIC_DOFDISTANCES               "DoFDistances"
#define NEBULA3_SEMANTIC_EMITTERTRANSFORM           "EmitterTransform"
#define NEBULA3_SEMANTIC_BILLBOARD                  "Billboard"
#define NEBULA3_SEMANTIC_BBOXCENTER                 "BBoxCenter"
#define NEBULA3_SEMANTIC_BBOXSIZE                   "BBoxSize"
#define NEBULA3_SEMANTIC_TIME                       "Time"
#endif

#define NEBULA3_SEMANTIC_MATDIFFUSE					"MatDiffuse"
#define NEBULA3_SEMANTIC_DEBUGSHADERLAYER           "DebugShaderLayer"
#define NEBULA3_SEMANTIC_DIFFMAP0                   "DiffMap0"
#define NEBULA3_SEMANTIC_DIFFMAP1                   "DiffMap1"
#define NEBULA3_SEMANTIC_INTENSITY0                 "Intensity0"
#define NEBULA3_SEMANTIC_INTENSITY1                 "Intensity1"
#define NEBULA3_SEMANTIC_INTENSITY2                 "Intensity2"     
#define NEBULA3_SEMANTIC_NORMALBUFFER               "NormalBuffer"
#define NEBULA3_SEMANTIC_DEPTHBUFFER				"DepthBuffer"
#define NEBULA3_SEMANTIC_LIGHTBUFFER                "LightBuffer"
#define NEBULA3_SEMANTIC_LIGHTPROJMAP               "LightProjMap" 
#define NEBULA3_SEMANTIC_LIGHTPROJCUBE              "LightProjCube" 
#define NEBULA3_SEMANTIC_SHADOWPROJMAP              "ShadowProjMap"
#define NEBULA3_SEMANTIC_SHADOWPROJCUBE             "ShadowProjCube"
#define NEBULA3_SEMANTIC_OBJECTID                   "ObjectId"
#define NEBULA3_SEMANTIC_REPEATINDEX                "RepeatIndex"
#define NEBULA3_SEMANTIC_OCCLUSIONCONSTANTS         "OcclusionConstants"
#define NEBULA3_SEMANTIC_SHADOWBUFFERSIZE           "ShadowBufferSize"
#define NEBULA3_SEMANTIC_RENDERTARGETDIMENSIONS     "RenderTargetDimensions"

//------------------------------------------------------------------------------
    