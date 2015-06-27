/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, PLAccountingGroup;

@interface PLWatchKitAgent : PLAgent {

	PLXPCListenerOperatorComposition* _xpcHandler;
	PLAccountingGroup* _watchkitAccountingGroup;

}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;              //@synthesize xpcHandler=_xpcHandler - In the implementation block
@property (readonly) PLAccountingGroup * watchkitAccountingGroup;              //@synthesize watchkitAccountingGroup=_watchkitAccountingGroup - In the implementation block
+(void)load;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
-(void)initOperatorDependancies;
-(PLXPCListenerOperatorComposition *)xpcHandler;
-(void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)createWatchKitAccountingEventsWithTransportEntries:(id)arg1 ;
-(PLAccountingGroup *)watchkitAccountingGroup;
-(id)appNameForWatchAppExtension:(id)arg1 ;
@end
