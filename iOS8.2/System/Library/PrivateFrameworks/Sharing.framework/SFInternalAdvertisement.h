/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSDictionary;

@interface SFInternalAdvertisement : NSObject {

	NSData* _advertisementPayload;
	NSDictionary* _options;

}

@property (copy) NSData * advertisementPayload;              //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 ;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
@end
