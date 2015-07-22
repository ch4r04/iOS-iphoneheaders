/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol OS_dispatch_queue;
@class CallHistoryDBHandle, NSObject;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;
	BOOL _dataStoreCreated;
	NSObject*<OS_dispatch_queue> _recentCallQueue;

}

@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
@property (assign,nonatomic) BOOL dataStoreCreated;                                     //@synthesize dataStoreCreated=_dataStoreCreated - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recentCallQueue;              //@synthesize recentCallQueue=_recentCallQueue - In the implementation block
+(id)createForClient;
+(id)createForServer;
-(id)init:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)deleteAll:(id*)arg1 ;
-(void)createDataStore;
-(void)unRegisterForNotifications;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(void)resetTimers;
-(BOOL)createCallRecord:(id)arg1 ;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)fetchAll;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(id)updateCallRecords:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)timerLastReset;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)recentCallQueue;
-(void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2 ;
-(CallHistoryDBHandle *)dbStoreHandle;
-(void)setDataStoreCreated:(BOOL)arg1 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(BOOL)dataStoreCreated;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(void)setRecentCallQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)manager;
-(void)registerForNotifications;
-(BOOL)deleteAll;
@end
