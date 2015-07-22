/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Media/Media-Structs.h>
@class NSString;

@interface MPAssistantPlaybackQueue : NSObject {

	BOOL _shouldOverrideManuallyCuratedQueue;
	NSString* _contextID;

}

@property (nonatomic,readonly) NSString * contextID;                               //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;              //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(NSString *)contextID;
@end
