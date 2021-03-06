/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSString, NSTimer;

@interface iAP2EAClient : NSObject {

	unsigned _clientID;
	unsigned _capabilities;
	BOOL _legacyLingoAccessoriesEnabled;
	BOOL _supportsAccessibility;
	BOOL _clientRequiresAccReset;
	int _processId;
	SCD_Struct_iA14 _auditToken;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long _processAssertionStartTime;
	NSTimer* _processAssertionTimer;
	int _iapSessionRefCount;

}

@property (assign,nonatomic) unsigned clientID;                               //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) SCD_Struct_iA14 auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                         //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL locationSupportedByClient; 
@property (assign,nonatomic) BOOL legacyLingoAccessoriesEnabled;              //@synthesize legacyLingoAccessoriesEnabled=_legacyLingoAccessoriesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsAccessibility;                    //@synthesize supportsAccessibility=_supportsAccessibility - In the implementation block
@property (assign,nonatomic) BOOL clientRequiresAccReset;                     //@synthesize clientRequiresAccReset=_clientRequiresAccReset - In the implementation block
+(unsigned)clientIDForLocationClient;
-(int)_getProcessId;
-(BOOL)locationSupportedByClient;
-(void)_processAssertionTimerExpired;
-(id)initWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_iA14)arg2 andBundleId:(id)arg3 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)increaseSessionRefCount;
-(void)decreaseSessionRefCount;
-(void)setLocationSupportedByClient:(BOOL)arg1 ;
-(void)setClientRequiresAccReset:(BOOL)arg1 ;
-(BOOL)legacyLingoAccessoriesEnabled;
-(void)setLegacyLingoAccessoriesEnabled:(BOOL)arg1 ;
-(BOOL)clientRequiresAccReset;
-(BOOL)supportsAccessibility;
-(id)bundleId;
-(void)dealloc;
-(SCD_Struct_iA14)auditToken;
-(unsigned)capabilities;
-(void)setClientID:(unsigned)arg1 ;
-(unsigned)clientID;
@end

