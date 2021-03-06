/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <profiled/MCXPCProtocol.h>

@class NSXPCConnection, NSString;

@interface MCProfileServicer : NSObject <MCXPCProtocol> {

	NSXPCConnection* _xpcConnection;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)remoteProcessHasEntitlement:(id)arg1 ;
-(id)lacksEntitlementError:(id)arg1 ;
-(id)remoteProcessBundleID;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)checkInWithCompletion:(/*^block*/id)arg1 ;
-(void)checkCarrierProfileAndForceReinstallation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAutoCorrectionAllowed:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPredictiveKeyboardAllowed:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSpellCheckAllowed:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowedURLStrings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAllowedURLString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBookmark:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyDeviceUnlockedWithCompletion:(/*^block*/id)arg1 ;
-(void)mayShareToMessagesAndOriginatingAccountIsManaged:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isProfileInstalledWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installProfileData:(id)arg1 interactive:(BOOL)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)updateProfileIdentifier:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOrphanedClientRestrictionsWithCompletion:(/*^block*/id)arg1 ;
-(void)managedSystemConfigurationServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)managedWiFiNetworkNamesWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 forceAllowHostPairing:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeBoolSetting:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeValueSetting:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSensitiveURL:(id)arg1 unlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProvisioningProfileWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyStartComplianceTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recomputeUserComplianceWarningWithCompletion:(/*^block*/id)arg1 ;
-(void)recomputePerClientUserComplianceWithCompletion:(/*^block*/id)arg1 ;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)managedAppIDsWithFlags:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpiredProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)profileDataStoredForPurpose:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)rereadManagedAppAttributesWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudConfigurationMachineInfoDataWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudConfigurationStoreDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createActivationLockBypassCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)storeActivationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserBookmarks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stashBlacklistURLStringsWithCompletion:(/*^block*/id)arg1 ;
-(void)unstashBlacklistURLStringsWithCompletion:(/*^block*/id)arg1 ;
-(void)stashWhitelistURLStringsWithCompletion:(/*^block*/id)arg1 ;
-(void)unstashWhitelistURLStringsWithCompletion:(/*^block*/id)arg1 ;
-(void)setupAssistantDidFinishCompletion:(/*^block*/id)arg1 ;
-(void)shutDownWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

