/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPEncoder.h>

@class TSPMemoryComponentWriteChannel, NSString;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {

	char _alwaysDefragmentData;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(char)arg1 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)metadataData;
-(id)rootObjectComponentData;
-(id)encodedData;
@end
