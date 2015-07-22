/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSAcquireAssertionAction : BSAction

@property (nonatomic,readonly) NSString * assertionName; 
@property (nonatomic,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned port; 
+(id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(NSString *)reason;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(unsigned)port;
-(NSString *)assertionName;
@end
