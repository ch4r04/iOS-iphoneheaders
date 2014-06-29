/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner;

@interface SearchResultResourceLoader : NSObject <NSURLConnectionDelegate> {

	NSMapTable* _requestsForURLs;
	NSMapTable* _connectionsForURLs;
	NSMapTable* _dataForConnections;
	BOOL _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) BOOL canPersonalizeYelpDetails; 
@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
+(id)sharedInstance;
-(void)cancelRequestsForSearchResult:(id)arg1 ;
-(void)sendImageRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)sendURLRequest:(id)arg1 ;
-(void)handleConnection:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(id)yelpAccountCredentials;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)sendDealRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)sendReviewsRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(BOOL)canPersonalizeYelpDetails;
-(id)accountStore;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void).cxx_destruct;
-(id)signer;
@end
