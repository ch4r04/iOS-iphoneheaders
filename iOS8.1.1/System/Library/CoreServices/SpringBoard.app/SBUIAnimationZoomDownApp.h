/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBAppStatusBarTransitionInfo, FBWindowContextHostManager;

@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController {

	UIView* _viewToAnimate;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	FBWindowContextHostManager* _deactivatingContextHostManager;

}
-(void)prepareZoom;
-(double)animationDelay;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)animateFakeStatusBarWithParameters:(id)arg1 ;
-(void)cleanupZoom;
-(id)appSettings;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyleRequest:(id)arg2 endOrientation:(long long)arg3 ;
-(BOOL)prefersLayerHostSnapshot;
-(id)initWithDeactivatingApp:(id)arg1 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end

