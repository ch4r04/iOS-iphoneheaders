/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/PQLNameInjectionBase.h>
#import <CloudDocsDaemon/PQLInjecting.h>

@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)nameWithString:(id)arg1 ;
+(id)nameWithPrefix:(id)arg1 suffix:(id)arg2 ;
+(id)_appendString:(id)arg1 toInjection:(id)arg2 ;
-(NSString *)description;
-(id)initWithString:(id)arg1 ;
-(id)nameByAddingSuffix:(id)arg1 ;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
@end
