/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewControllerBase, SBLockScreenClippedSlideController, UIView;

@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController {

	int _transitionStyle;
	SBLockScreenViewControllerBase* _lockscreenViewController;
	SBLockScreenClippedSlideController* _lockscreenClippedSlideController;
	UIView* _appView;
	double _animationDelay;
	double _animationDuration;
	BOOL _fromCC;
	BOOL _fromNC;
	BOOL _finishedSliding;
	BOOL _waitForAppActivationForContextHostView;
	BOOL _useContextHostView;

}
-(void)_prepareAnimation;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(BOOL)_isApplicationLaunchFinished;
-(id)initWithActivatingApp:(id)arg1 deactivatingLockscreen:(id)arg2 ;
-(id)initWithActivatingLockscreen:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_setup:(id)arg1 transitionStyle:(int)arg2 ;
-(void)_finishedSliding;
-(void)dealloc;
-(void)_startAnimation;
@end

