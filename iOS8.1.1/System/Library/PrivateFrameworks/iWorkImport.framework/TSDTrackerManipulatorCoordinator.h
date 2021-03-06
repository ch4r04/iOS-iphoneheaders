/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDTrackerManipulator;
@class NSMutableSet, NSObject;

@interface TSDTrackerManipulatorCoordinator : NSObject {

	NSMutableSet* mRegisteredTMs;
	NSObject*<TSDTrackerManipulator> mControllingTM;

}

@property (nonatomic,readonly) NSObject*<TSDTrackerManipulator> controllingTM; 
+(void)p_removeDynamicSubclass:(id)arg1 ;
+(void)p_dynamicallySubclassGRForNotification:(id)arg1 ;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg1 ;
-(void)p_notifyControlChange;
-(void)operationWillEnd;
-(void)operationDidEnd;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg1 ;
-(void)registerTrackerManipulator:(id)arg1 ;
-(void)unregisterTrackerManipulator:(id)arg1 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg1 ;
-(NSObject*<TSDTrackerManipulator>)controllingTM;
-(void)dealloc;
-(id)init;
@end

