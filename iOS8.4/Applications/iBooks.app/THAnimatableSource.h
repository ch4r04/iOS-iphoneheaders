/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THAnimatableSource <NSObject>
@optional
-(CGAffineTransform*)shadowAnimationLayerDestinationTransform:(id)arg1 uniformTargetScale:(float)arg2;
-(id)sourceShadowLayer;
-(id)sourceReflectionLayer;
-(id)sourceOverlayLayer;
-(char)enforceAnimationLayer;
-(void)reparentAnimationLayerIfBackedByView:(id)arg1;
-(double)animationDuration;

@required
-(id)animationLayer;
-(char)shouldAnimateTargetLayer:(id)arg1;
-(char)shouldFadeOutAnimationLayer:(id)arg1;
-(id)shadowAnimationLayer;
-(CGAffineTransform*)freeTransform;

@end
