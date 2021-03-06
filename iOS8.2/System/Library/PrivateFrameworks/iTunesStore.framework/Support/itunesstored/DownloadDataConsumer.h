/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DownloadDataConsumer : NSObject

@property (nonatomic,readonly) char hasConsumedData; 
@property (nonatomic,readonly) unsigned long long resumptionOffset; 
-(char)consumeData:(id)arg1 error:(id*)arg2 ;
-(char)finish:(id*)arg1 ;
-(char)hasConsumedData;
-(unsigned long long)resumptionOffset;
-(void)truncate;
-(void)suspend;
-(void)reset;
@end

