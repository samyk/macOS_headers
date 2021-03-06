//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginArchiving.h"
#import "KNBuild3DChartsOpenGLAnimator.h"
#import "KNBuildMetalAnimator.h"
#import "TSCH3DChartAnimationPlugin.h"

@class NSString, TSCH3DChartMetalAnimationAttributeContainer, TSDGLLayer, TSDMetalShader;

@interface KNChart3DBuild : KNAnimationEffect <KNBuild3DChartsOpenGLAnimator, KNAnimationPluginArchiving, TSCH3DChartAnimationPlugin, KNBuildMetalAnimator>
{
    struct CGRect _drawingFrame;
    TSDGLLayer *_GLLayer;
    TSCH3DChartMetalAnimationAttributeContainer *_allMetalAnimationAttributes;
    TSDMetalShader *_shader;
    BOOL _didSetupChunkStage;
    double _lastRenderPercent;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
+ (BOOL)requiresSingleTexturePerStage;
- (void).cxx_destruct;
- (struct CATransform3D)mvpMatrixForAnimatedBuildAttributes:(id)arg1 shouldScale:(BOOL)arg2 rep:(id)arg3;
- (void)p_renderMetalAnimationAttributes:(id)arg1 withContext:(id)arg2;
- (id)p_metalAnimationAttributesWithContext:(id)arg1;
- (void)metalTeardownAnimationsWithContext:(id)arg1;
- (void)metalAnimationDidEndWithContext:(id)arg1;
- (void)p_didEndChunkStageWithContext:(id)arg1;
- (void)metalRenderFrameWithContext:(id)arg1;
- (void)p_setupForBeginChunkStageWithContext:(id)arg1;
- (void)metalAnimationWillBeginWithContext:(id)arg1;
- (void)metalPrepareAnimationWithContext:(id)arg1;
- (BOOL)providesAnimatingTextures;
- (void)animationDidEndWithContext:(id)arg1;
- (double)animationFPS;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)GLLayer;
- (id)layerWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)p_repFromContext:(id)arg1;
- (double)p_alphaFromAttributes:(id)arg1;
- (double)p_scaleFromAttributes:(id)arg1;
- (double)p_rotationAngleFromAttributes:(id)arg1;
- (struct CGPoint)p_offsetFromAttributes:(id)arg1;
- (void)p_applyAttributes:(id)arg1 forRep:(id)arg2 animationLayer:(id)arg3;
- (struct CGAffineTransform)p_transformForAttributes:(id)arg1 rep:(id)arg2;
- (double)p_scaleForAttributes:(id)arg1;
- (struct CGAffineTransform)p_transformByApplyingTransform:(struct CGAffineTransform)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (unsigned long long)p_deliveryStyleFromAnimatedBuild:(id)arg1;
- (int)chartAnimationType;
- (id)animationInfoForAnimatedBuild:(id)arg1;
- (int)p_buildTypeForAnimatedBuild:(id)arg1;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

