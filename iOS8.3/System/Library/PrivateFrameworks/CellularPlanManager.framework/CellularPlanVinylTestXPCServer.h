/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:57:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <CellularPlanManager/NSXPCListenerDelegate.h>

@protocol CellularPlanVinylTest;
@class NSXPCListener, NSMutableArray, NSString;

@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fXpcConnections;
	id<CellularPlanVinylTest> fDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 andDelegate:(id)arg2 ;
@end

