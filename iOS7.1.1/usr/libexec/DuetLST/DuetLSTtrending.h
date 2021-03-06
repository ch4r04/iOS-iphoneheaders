/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DuetLST/DuetLST-Structs.h>
@class DuetLST, NSObject, NSMutableArray;

@interface DuetLSTtrending : NSObject {

	DuetLST* lst;
	SCD_Struct_Du5* TT;
	NSObject<OS_dispatch_queue>* monitoredEventUpdateQueue;
	id* trendTimers;
	int* notificationTokens;
	NSMutableArray* monitoredEventIDs;

}

@property (nonatomic,retain) DuetLST * lst; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * monitoredEventUpdateQueue; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)dumpAll;
-(void)dumpLight;
-(id)monitoredEventUpdateQueue;
-(SCD_Struct_Du6*)readTrendTableEntryAtIndex:(int)arg1 ;
-(void)registerEvent:(const char*)arg1 ;
-(void)deregisterEvent:(const char*)arg1 ;
-(unsigned)findMonitoredEvent:(const char*)arg1 ;
-(void)updateStateWithEvent:(char*)arg1 updateType:(int)arg2 ;
-(int)findSlot:(int)arg1 ;
-(void)newTTEntry:(int)arg1 withEID:(char*)arg2 andTimeStamp:(unsigned long long)arg3 ;
-(void)setMonitoredEventUpdateQueue:(id)arg1 ;
-(void).cxx_destruct;
@end

