/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBServiceSettingsContext, MBService, MBServiceCache, NSData, MBKeyBag;

@interface MBServiceEncryptionManager : NSObject {

	MBServiceSettingsContext* _settingsContext;
	MBService* _service;
	MBServiceCache* _cache;
	char _suppressAuthorization;
	NSData* _keybagUUID;

}

@property (nonatomic,readonly) MBKeyBag * keybag; 
@property (nonatomic,readonly) NSData * keybagUUID; 
@property (assign,nonatomic) char suppressAuthorization;              //@synthesize suppressAuthorization=_suppressAuthorization - In the implementation block
-(MBKeyBag *)keybag;
-(id)loadRestoreKeyBagsByIDWithError:(id*)arg1 ;
-(char)removeRestoreKeyBagsWithError:(id*)arg1 ;
-(char)setupBackupWithPasscode:(id)arg1 userInitiated:(char)arg2 keybagID:(unsigned*)arg3 error:(id*)arg4 ;
-(char)tearDownBackupWithError:(id*)arg1 ;
-(void)keybagIsLocking;
-(void)keybagIsUnlocked;
-(NSData *)keybagUUID;
-(void)setSuppressAuthorization:(char)arg1 ;
-(char)rollKeyBagWithKeyBagID:(unsigned*)arg1 forEngine:(id)arg2 error:(id*)arg3 ;
-(id)keysetForBackupUDID:(id)arg1 lastModified:(int*)arg2 userInitiated:(char)arg3 willVerifyCredentialsCallback:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)initWithEngine:(id)arg1 ;
-(id)keysetForBackupUDID:(id)arg1 lastModified:(int*)arg2 userInitiated:(char)arg3 error:(id*)arg4 ;
-(char)saveRestoreKeyBagDatasByID:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(char)suppressAuthorization;
-(char)_registerKeyBag:(id)arg1 withID:(unsigned)arg2 passcode:(id)arg3 error:(id*)arg4 ;
-(void)_findMissingEncryptionKeys;
-(void)_exportKeychain;
-(void)dealloc;
-(id)initWithSettingsContext:(id)arg1 ;
@end
