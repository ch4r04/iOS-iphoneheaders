/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISiriSessionLocalDelegate <NSObject>
@required
-(void)siriSession:(id)arg1 didChangeToState:(int)arg2;
-(void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(char)arg2 withCompletion:(/*^block*/id)arg3;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2;

@end

