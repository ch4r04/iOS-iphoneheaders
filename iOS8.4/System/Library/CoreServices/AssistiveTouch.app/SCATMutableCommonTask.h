/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATCommonTask.h>

@class NSString, NSArray;

@interface SCATMutableCommonTask : SCATCommonTask

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * steps; 
@property (nonatomic,copy) NSString * startingAppBundleIdentifier; 
@property (nonatomic,copy) NSString * startingAppName; 
+(id)commonTask;
-(void)setStartingAppBundleIdentifier:(NSString *)arg1 ;
-(void)setStartingAppName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(void)addStep:(id)arg1 ;
@end

