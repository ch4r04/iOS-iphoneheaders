/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCSecureDataChannelDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCSecureDataChannel : NSObject {

	tagCONNRESULT* connectionResult;
	tls_record_sRef tlsRecord;
	id<VCSecureDataChannelDelegate> _delegate;

}

@property (assign) id<VCSecureDataChannelDelegate> delegate; 
@property (readonly) int maxEncryptedDataSize; 
@property (readonly) int maxUnencryptedDataSize; 
-(void)dealloc;
-(void)setDelegate:(id<VCSecureDataChannelDelegate>)arg1 ;
-(id<VCSecureDataChannelDelegate>)delegate;
-(long)sendData:(id)arg1 encrypted:(char)arg2 ;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 sharedSecret:(id)arg2 error:(id*)arg3 ;
-(long)setupWithSharedSecret:(id)arg1 error:(id*)arg2 ;
-(long)verifyAndDecryptData:(id)arg1 decryptedData:(id*)arg2 ;
-(int)maxEncryptedDataSize;
-(int)maxUnencryptedDataSize;
@end

