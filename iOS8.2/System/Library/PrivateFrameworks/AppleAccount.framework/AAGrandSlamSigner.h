/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	ACAccountStore* _store;
	NSString* _appTokenID;

}

@property (nonatomic,readonly) ACAccount * appleAccount;                   //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize store=_store - In the implementation block
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(ACAccount *)appleAccount;
-(char)signURLRequest:(id)arg1 isUserInitiated:(char)arg2 ;
-(char)signURLRequest:(id)arg1 ;
-(ACAccount *)grandSlamAccount;
-(ACAccountStore *)accountStore;
@end

