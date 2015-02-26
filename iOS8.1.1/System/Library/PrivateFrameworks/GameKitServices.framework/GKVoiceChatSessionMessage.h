/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage {

	NSData* _data;
	unsigned _conferenceID;
	unsigned _subtype;

}
-(void)dealloc;
-(id)init;
-(id)payload;
-(unsigned)subtype;
-(id)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_checkType:(unsigned short)arg1 ;
-(BOOL)_checkSize:(unsigned long long)arg1 ;
-(unsigned)conferenceID;
-(id)initWithPayload:(id)arg1 conferenceID:(unsigned)arg2 subtype:(unsigned)arg3 ;
@end
