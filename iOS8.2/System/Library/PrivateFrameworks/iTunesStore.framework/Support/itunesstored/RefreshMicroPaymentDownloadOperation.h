/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface RefreshMicroPaymentDownloadOperation : ISOperation {

	long long _downloadID;

}

@property (readonly) long long downloadIdentifier; 
-(char)_refreshDownload:(id)arg1 error:(id*)arg2 ;
-(id)_newIdentityForPayment:(id)arg1 ;
-(id)_newRequestWithIdentity:(id)arg1 transactionID:(id)arg2 ;
-(char)_updateDownload:(id)arg1 withDictionary:(id)arg2 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)run;
@end
