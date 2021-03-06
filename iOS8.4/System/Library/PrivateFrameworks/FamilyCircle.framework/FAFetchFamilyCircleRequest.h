/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {

	BOOL _signedInAccountShouldBeApprover;
	BOOL _forceServerFetch;
	BOOL _doNotFetchFromServer;
	BOOL _promptUserToResolveAuthenticatonFailure;
	NSArray* _expectedDSIDs;
	NSDictionary* _serverResponse;

}

@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) BOOL promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
-(void)setForceServerFetch:(BOOL)arg1 ;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
-(NSArray *)expectedDSIDs;
-(BOOL)signedInAccountShouldBeApprover;
-(BOOL)forceServerFetch;
-(BOOL)doNotFetchFromServer;
-(BOOL)promptUserToResolveAuthenticatonFailure;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
-(void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1 ;
-(NSDictionary *)serverResponse;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)requestOptions;
@end

