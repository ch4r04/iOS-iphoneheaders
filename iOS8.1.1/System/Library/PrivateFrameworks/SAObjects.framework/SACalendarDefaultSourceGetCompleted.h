/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SACalendarSource * aceCalendarSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)defaultSourceGetCompleted;
+(id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithAceCalendarSource:(id)arg1 ;
-(void)setAceCalendarSource:(SACalendarSource *)arg1 ;
-(SACalendarSource *)aceCalendarSource;
@end

