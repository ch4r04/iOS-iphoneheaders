/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MessageSupport.framework/MessageSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFDebugTimer : NSObject {

	double _timer_base;
	unsigned long long _timer_start;
	unsigned long long _timer_end;
	unsigned long long _timer_tics;
	double _timer_nsecs;
	NSString* name;

}

@property (retain) NSString * name; 
+(id)timerWithName:(id)arg1 ;
+(id)sharedTimer;
-(id)rebase;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)measure;
@end
