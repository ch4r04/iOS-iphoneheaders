/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/MCProfileConnectionObserver.h>
#import <BulletinDistributorCompanion/BLTSettingSyncing.h>

@class BLTSectionConfiguration, BBObserver, BBSettingsGateway, BLTSettingSyncServer, NPSManager, NSString;

@interface BLTSettingSyncInternal : NSObject <MCProfileConnectionObserver, BLTSettingSyncing> {

	BOOL _dndEnabled;
	BOOL _dndStateUpdatedAtLeastOnce;
	BLTSectionConfiguration* _sectionConfiguration;
	BOOL _isDNDMirrorEnabled;
	BOOL _isWristDetectDisabled;
	BBObserver* _observer;
	BBSettingsGateway* _settingsGateway;
	BLTSettingSyncServer* _connection;
	NPSManager* _npsManager;

}

@property (nonatomic,retain) BBObserver * observer;                            //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) BBSettingsGateway * settingsGateway;              //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) BLTSettingSyncServer * connection;                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isDNDMirrorEnabled;                          //@synthesize isDNDMirrorEnabled=_isDNDMirrorEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isWristDetectDisabled;                     //@synthesize isWristDetectDisabled=_isWristDetectDisabled - In the implementation block
@property (nonatomic,retain) NPSManager * npsManager;                          //@synthesize npsManager=_npsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BBObserver *)observer;
-(void)setObserver:(BBObserver *)arg1 ;
-(BLTSettingSyncServer *)connection;
-(void)setConnection:(BLTSettingSyncServer *)arg1 ;
-(void)setSectionInfo:(id)arg1 ;
-(void)setBehaviorOverrideStatus:(long long)arg1 ;
-(void)updateDNDMirrorState;
-(void)updateDNDState;
-(void)_updateWristDetectSetting;
-(BOOL)isDNDMirrorEnabled;
-(void)setIsDNDMirrorEnabled:(BOOL)arg1 ;
-(void)setDNDHandlers;
-(void)removeDNDHandlers;
-(void)setBehaviorOverrideTypes:(unsigned long long)arg1 ;
-(BOOL)_wristDetectionEnabledRestriction;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_isWristDetectionDisabled;
-(void)setDoNotDisturb:(BOOL)arg1 updateSettings:(BOOL)arg2 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(unsigned long long)getSettingsWillPresentBlockedByReasonForSectionInfo:(id)arg1 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 ;
-(BOOL)isWristDetectDisabled;
-(NPSManager *)npsManager;
-(void)setNpsManager:(NPSManager *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 ;
-(void)setBehaviorOverrides:(id)arg1 ;
@end
