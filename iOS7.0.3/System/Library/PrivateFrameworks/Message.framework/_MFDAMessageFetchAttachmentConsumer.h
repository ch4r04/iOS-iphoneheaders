/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageFetchAttachmentConsumer.h>

@class MFProgressFilterDataConsumer, MFActivityMonitor;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {

	MFProgressFilterDataConsumer* _progressFilter;
	unsigned _expectedLength;
	unsigned _accumulatedLength;
	MFActivityMonitor* _monitor;
	BOOL _dataWasBase64;
	BOOL _fetchSucceeded;

}

@property (nonatomic,retain) MFProgressFilterDataConsumer * progressFilter;              //@synthesize progressFilter=_progressFilter - In the implementation block
@property (assign,nonatomic) unsigned expectedLength;                                    //@synthesize expectedLength=_expectedLength - In the implementation block
@property (readonly) BOOL dataWasBase64;                                                 //@synthesize dataWasBase64=_dataWasBase64 - In the implementation block
@property (readonly) BOOL fetchSucceeded;                                                //@synthesize fetchSucceeded=_fetchSucceeded - In the implementation block
-(void)dealloc;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)setExpectedLength:(unsigned)arg1 ;
-(unsigned)expectedLength;
-(void)setProgressFilter:(id)arg1 ;
-(BOOL)fetchSucceeded;
-(BOOL)dataWasBase64;
-(id)progressFilter;
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4 ;
-(void)attachmentFetchCompletedWithStatus:(int)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 ;
@end
