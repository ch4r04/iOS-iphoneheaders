/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCOperationMultiplexer.h>

@class NSArray;

@interface BRCDownloadOperationMultiplexer : BRCOperationMultiplexer {

	NSArray* _desiredKeys;

}
-(id)initWithName:(id)arg1 container:(id)arg2 desiredKeys:(id)arg3 ;
-(id)operationFromBatch:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

