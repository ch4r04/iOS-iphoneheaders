/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNMagicMoveTransitionAnimator.h>
#import <iWorkImport/KNMagicMoveFrameAnimator.h>

@class KNMotionBlurWrapper, KNMagicMoveWrapper, NSString;

@interface KNContentAwareShimmer : KNAnimationEffect <KNMagicMoveTransitionAnimator, KNMagicMoveFrameAnimator> {

	/*^block*/id _motionBlurWrapperTextureDrawOptionsBlock;
	/*^block*/id _motionBlurWrapperSetupShaderBlock;
	KNMotionBlurWrapper* _motionBlurWrapper;
	KNMagicMoveWrapper* _magicMoveWrapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(int)rendererTypeForCapabilities:(id)arg1 ;
+(BOOL)isCharacterAwareEffect;
+(BOOL)requiresBullets;
+(BOOL)requiresPerspectiveTransform;
+(BOOL)shouldDisableMagicMoveOnText;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)p_setupMagicMoveWrapperWithContext:(id)arg1 ;
-(void)dealloc;
-(void)teardown;
@end

