/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SURemoteNotificationController : NSObject

@property (nonatomic,readonly) unsigned enabledNotificationTypes; 
+(id)sharedInstance;
-(id)init;
-(unsigned)enabledNotificationTypes;
-(void)handleRegistrationFailureWithError:(id)arg1 ;
-(void)handleRegistrationSuccessWithToken:(id)arg1 ;
-(void)handleNotificationDictionary:(id)arg1 ;
@end

