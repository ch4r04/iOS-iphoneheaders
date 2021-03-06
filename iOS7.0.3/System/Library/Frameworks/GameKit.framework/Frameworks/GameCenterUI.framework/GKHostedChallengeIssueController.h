/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKHostedViewController.h>

@class NSArray, NSString, GKChallenge;

@interface GKHostedChallengeIssueController : GKHostedViewController {

	BOOL _forcePicker;
	NSArray* _playerIDs;
	NSString* _defaultMessage;
	GKChallenge* _challenge;
	/*^block*/ id _completionHandler;
	/*^block*/ id _dismissCompletionHandler;

}

@property (nonatomic,retain) NSArray * playerIDs;                    //@synthesize playerIDs=_playerIDs - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage;                //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) GKChallenge * challenge;                //@synthesize challenge=_challenge - In the implementation block
@property (assign,nonatomic) BOOL forcePicker;                       //@synthesize forcePicker=_forcePicker - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
+(id)presentationQueue;
+(id)hostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
+(void)presentHostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 ;
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)setDefaultMessage:(id)arg1 ;
-(id)serviceSideViewControllerClassName;
-(id)hostSideViewControllerClassName;
-(id)defaultMessage;
-(id)_remote;
-(id)initWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)setForcePicker:(BOOL)arg1 ;
-(void)setPlayerIDs:(id)arg1 ;
-(void)doneWithPlayers:(id)arg1 message:(id)arg2 ;
-(id)playerIDs;
-(BOOL)forcePicker;
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(/*^block*/ id)arg1 ;
-(id)challenge;
-(void)setChallenge:(id)arg1 ;
@end

