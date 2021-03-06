/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:49 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIUserNotificationAction.h>

@class NSString;

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned activationMode; 
@property (assign,getter=isAuthenticationRequired,nonatomic) char authenticationRequired; 
@property (assign,getter=isDestructive,nonatomic) char destructive; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

