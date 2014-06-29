/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SSItemLookupRequestDelegate.h>
#import <StoreServices/SSURLConnectionRequestDelegate.h>

@protocol TransitAppSuggestionProviderDelegate;
@class SSRequest, NSArray, NSDictionary;

@interface TransitAppSuggestionProvider : NSObject <SSItemLookupRequestDelegate, SSURLConnectionRequestDelegate> {

	<TransitAppSuggestionProviderDelegate>* _delegate;
	SSRequest* _currentRequest;
	BOOL _loadedStoreSuggestions;
	BOOL _suggestedLocalApps;
	BOOL _suggestedStoreApps;
	BOOL _appInstallationDisallowed;
	NSArray* _storeSuggestionIds;
	NSDictionary* _storeSuggestionsDataDictionary;
	NSArray* _allRoutingApps;

}

@property (assign,nonatomic,__weak) <TransitAppSuggestionProviderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL appInstallationDisallowed;                                      //@synthesize appInstallationDisallowed=_appInstallationDisallowed - In the implementation block
@property (nonatomic,retain) SSRequest * currentRequest;                                            //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSArray * storeSuggestionIds;                                          //@synthesize storeSuggestionIds=_storeSuggestionIds - In the implementation block
@property (nonatomic,retain) NSDictionary * storeSuggestionsDataDictionary;                         //@synthesize storeSuggestionsDataDictionary=_storeSuggestionsDataDictionary - In the implementation block
@property (nonatomic,retain) NSArray * allRoutingApps;                                              //@synthesize allRoutingApps=_allRoutingApps - In the implementation block
-(void)requestSuggestionsForSource:(SCD_Struct_Si13)arg1 destination:(SCD_Struct_Si13)arg2 ;
-(BOOL)appInstallationDisallowed;
-(void)_requestAppDataForIds:(id)arg1 ;
-(void)setAllRoutingApps:(id)arg1 ;
-(void)_suggestFilteredStoreAppsIfReady;
-(void)setStoreSuggestionIds:(id)arg1 ;
-(void)setStoreSuggestionsDataDictionary:(id)arg1 ;
-(void)_removeInstalledAppsFromStoreSuggestions;
-(id)storeSuggestionIds;
-(id)storeSuggestionsDataDictionary;
-(id)allRoutingApps;
-(void)setCurrentRequest:(id)arg1 ;
-(id)currentRequest;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)reset;
-(void).cxx_destruct;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
@end
