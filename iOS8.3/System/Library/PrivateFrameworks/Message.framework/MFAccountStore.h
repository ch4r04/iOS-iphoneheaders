/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore;

@interface MFAccountStore : NSObject {

	int _accountStoreLock;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * persistentStore; 
+(id)sharedAccountStore;
+(char)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(char)arg3 ;
-(ACAccountStore *)persistentStore;
-(void)dealloc;
-(id)init;
-(id)existingAccountWithPersistentAccount:(id)arg1 ;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1 ;
-(void)savePersistentAccountWithAccount:(id)arg1 ;
-(void)removePersistentAccountWithAccount:(id)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)setPersistentStore:(ACAccountStore *)arg1 ;
-(void)_accountsStoreChanged:(id)arg1 ;
-(id)_accountWithPersistentAccount:(id)arg1 useExisting:(char)arg2 ;
@end
