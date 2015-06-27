/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentProvisioningServiceDelegate <NSObject>
@optional
-(char)hasDevelopmentSignedSE;
-(void)deleteCardWithAID:(id)arg1;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(/*^block*/id)arg1;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)provisioningDataWithCompletionHandler:(/*^block*/id)arg1;
-(int)paymentSupportedInCurrentRegion;
-(void)setNewAuthRandomIfNecessary:(/*^block*/id)arg1;
-(id)filterVerificationChannels:(id)arg1;
-(void)paymentWebServiceDidRegister:(id)arg1;

@required
-(void)shouldArchiveContext:(id)arg1;
-(void)shouldArchiveBackgroundContext:(id)arg1;

@end
