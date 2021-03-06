/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;                     //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) NSString * messageID; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3 ;
@end

