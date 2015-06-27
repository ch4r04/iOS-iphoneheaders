/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject {

	SBRemoteAlertAdapter* _currentActiveInCallAlert;
	char _endingCallForLockButtonPress;

}

@property (nonatomic,retain) SBRemoteAlertAdapter * currentActiveInCallAlert;                                      //@synthesize currentActiveInCallAlert=_currentActiveInCallAlert - In the implementation block
@property (assign,getter=isEndingCallForLockButtonPress,nonatomic) char endingCallForLockButtonPress;              //@synthesize endingCallForLockButtonPress=_endingCallForLockButtonPress - In the implementation block
+(id)sharedInstance;
-(char)isEndingCallForLockButtonPress;
-(void)maybeLockUIAfterCallEnded;
-(void)setEndingCallForLockButtonPress:(char)arg1 ;
-(SBRemoteAlertAdapter *)currentActiveInCallAlert;
-(void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1 fromAppSwitcher:(char)arg2 ;
-(void)setCurrentActiveInCallAlert:(SBRemoteAlertAdapter *)arg1 ;
-(void)reactivateAlertFromStatusBarTap;
-(void)reactivateAlertFromLockScreenWithUIUnlock:(char)arg1 disableAnimatedTransition:(char)arg2 ;
-(void)reactivateAlertForLockButtonPress;
-(id)init;
@end
