/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PSDActivityDelegate, OS_dispatch_queue;
@class PSYActivityInfo, NSObject, NSXPCConnection, PSDServiceProgressDelegate;

@interface PSDActivity : NSObject {

	id<PSDActivityDelegate> _delegate;
	PSYActivityInfo* _activityInfo;
	unsigned long long _interruptionCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	PSDServiceProgressDelegate* _progressDelegate;

}

@property (assign,nonatomic,__weak) id<PSDActivityDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PSYActivityInfo * activityInfo;                           //@synthesize activityInfo=_activityInfo - In the implementation block
@property (assign) unsigned long long interruptionCount;                                 //@synthesize interruptionCount=_interruptionCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PSDServiceProgressDelegate * progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
-(PSYActivityInfo *)activityInfo;
-(id)initWithActivityInfo:(id)arg1 queue:(id)arg2 ;
-(void)beginSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)interruptionCount;
-(BOOL)_shouldPrelaunchWithBackboard;
-(id)_prelaunchBundleIdentifier;
-(void)_handleInterruptionWithError:(id)arg1 interruptionHandler:(/*^block*/id)arg2 ;
-(void)_beginSyncJustDoItWithOptions:(id)arg1 completion:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)_preloadAppWithBundleID:(id)arg1 inBackboardWithCompletion:(/*^block*/id)arg2 ;
-(void)setInterruptionCount:(unsigned long long)arg1 ;
-(void)_startConnectionIfNeeded;
-(id)_remoteServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)progressDelegateDidCompleteSending;
-(void)progressDelegateDidUpdateProgress:(float)arg1 ;
-(void)setDelegate:(id<PSDActivityDelegate>)arg1 ;
-(id)description;
-(id<PSDActivityDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(PSDServiceProgressDelegate *)progressDelegate;
-(void)setProgressDelegate:(PSDServiceProgressDelegate *)arg1 ;
@end

