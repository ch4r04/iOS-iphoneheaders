/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TUCallServicesIDSMessengerDelegate;
@class IDSService;

@interface TUCallServicesIDSMessenger : NSObject {

	id<TUCallServicesIDSMessengerDelegate> _delegate;
	IDSService* _idsService;

}

@property (assign,nonatomic,__weak) id<TUCallServicesIDSMessengerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                             //@synthesize idsService=_idsService - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<TUCallServicesIDSMessengerDelegate>)arg1 ;
-(id<TUCallServicesIDSMessengerDelegate>)delegate;
-(id)initWithService:(id)arg1 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end

