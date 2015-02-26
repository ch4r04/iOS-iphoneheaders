/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSDownloadMonitor : NSObject {

	SSXPCConnection* _connection;
	<SSDownloadMonitorDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (assign) <SSDownloadMonitorDelegate> * delegate; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_connection;
-(id)_copyItemsWithReply:(id)arg1 error:(id*)arg2 ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)pauseMonitorItem:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)prioritizeMonitorItem:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)resumeMonitorItem:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_reloadForChangeNotification;
@end
