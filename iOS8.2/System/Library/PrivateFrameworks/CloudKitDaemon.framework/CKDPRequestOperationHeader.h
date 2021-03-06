/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData, CKDPIdentifier, CKDPLocale;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {

	unsigned long long _applicationConfigVersion;
	unsigned long long _deviceFlowControlBudget;
	unsigned long long _deviceFlowControlBudgetCap;
	unsigned long long _deviceProtocolVersion;
	unsigned long long _globalConfigVersion;
	NSString* _applicationBundle;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	NSString* _applicationVersion;
	NSData* _clientChangeToken;
	NSString* _deviceAssignedName;
	NSString* _deviceFlowControlKey;
	float _deviceFlowControlRegeneration;
	NSString* _deviceHardwareID;
	NSString* _deviceHardwareVersion;
	CKDPIdentifier* _deviceIdentifier;
	NSString* _deviceLibraryName;
	NSString* _deviceLibraryVersion;
	NSString* _deviceSoftwareVersion;
	int _isolationLevel;
	CKDPLocale* _locale;
	NSString* _mmcsProtocolVersion;
	int _targetDatabase;
	NSString* _userIDContainerID;
	NSString* _userToken;
	SCD_Struct_CK10 _has;

}

@property (nonatomic,readonly) char hasUserToken; 
@property (nonatomic,retain) NSString * userToken;                                       //@synthesize userToken=_userToken - In the implementation block
@property (nonatomic,readonly) char hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                            //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (nonatomic,readonly) char hasApplicationBundle; 
@property (nonatomic,retain) NSString * applicationBundle;                               //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) char hasApplicationVersion; 
@property (nonatomic,retain) NSString * applicationVersion;                              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) char hasApplicationConfigVersion; 
@property (assign,nonatomic) unsigned long long applicationConfigVersion;                //@synthesize applicationConfigVersion=_applicationConfigVersion - In the implementation block
@property (assign,nonatomic) char hasGlobalConfigVersion; 
@property (assign,nonatomic) unsigned long long globalConfigVersion;                     //@synthesize globalConfigVersion=_globalConfigVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasDeviceSoftwareVersion; 
@property (nonatomic,retain) NSString * deviceSoftwareVersion;                           //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceHardwareVersion; 
@property (nonatomic,retain) NSString * deviceHardwareVersion;                           //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceLibraryName; 
@property (nonatomic,retain) NSString * deviceLibraryName;                               //@synthesize deviceLibraryName=_deviceLibraryName - In the implementation block
@property (nonatomic,readonly) char hasDeviceLibraryVersion; 
@property (nonatomic,retain) NSString * deviceLibraryVersion;                            //@synthesize deviceLibraryVersion=_deviceLibraryVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceFlowControlKey; 
@property (nonatomic,retain) NSString * deviceFlowControlKey;                            //@synthesize deviceFlowControlKey=_deviceFlowControlKey - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlBudget; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudget;                 //@synthesize deviceFlowControlBudget=_deviceFlowControlBudget - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlBudgetCap; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudgetCap;              //@synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlRegeneration; 
@property (assign,nonatomic) float deviceFlowControlRegeneration;                        //@synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration - In the implementation block
@property (assign,nonatomic) char hasDeviceProtocolVersion; 
@property (assign,nonatomic) unsigned long long deviceProtocolVersion;                   //@synthesize deviceProtocolVersion=_deviceProtocolVersion - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) CKDPLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) char hasMmcsProtocolVersion; 
@property (nonatomic,retain) NSString * mmcsProtocolVersion;                             //@synthesize mmcsProtocolVersion=_mmcsProtocolVersion - In the implementation block
@property (assign,nonatomic) char hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                        //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) char hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                                 //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,readonly) char hasDeviceAssignedName; 
@property (nonatomic,retain) NSString * deviceAssignedName;                              //@synthesize deviceAssignedName=_deviceAssignedName - In the implementation block
@property (nonatomic,readonly) char hasDeviceHardwareID; 
@property (nonatomic,retain) NSString * deviceHardwareID;                                //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (assign,nonatomic) char hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                                         //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) char hasUserIDContainerID; 
@property (nonatomic,retain) NSString * userIDContainerID;                               //@synthesize userIDContainerID=_userIDContainerID - In the implementation block
@property (assign,nonatomic) char hasIsolationLevel; 
@property (assign,nonatomic) int isolationLevel;                                         //@synthesize isolationLevel=_isolationLevel - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(CKDPLocale *)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPLocale *)locale;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)applicationBundle;
-(NSString *)applicationVersion;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(char)hasApplicationContainer;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setHasApplicationContainerEnvironment:(char)arg1 ;
-(char)hasApplicationContainerEnvironment;
-(NSString *)applicationContainer;
-(CKDPIdentifier *)deviceIdentifier;
-(void)setDeviceIdentifier:(CKDPIdentifier *)arg1 ;
-(void)setApplicationBundle:(NSString *)arg1 ;
-(void)setTargetDatabase:(int)arg1 ;
-(void)setDeviceHardwareVersion:(NSString *)arg1 ;
-(void)setDeviceSoftwareVersion:(NSString *)arg1 ;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(void)setDeviceAssignedName:(NSString *)arg1 ;
-(int)isolationLevel;
-(void)setIsolationLevel:(int)arg1 ;
-(void)setDeviceLibraryName:(NSString *)arg1 ;
-(void)setDeviceLibraryVersion:(NSString *)arg1 ;
-(void)setDeviceFlowControlKey:(NSString *)arg1 ;
-(void)setDeviceFlowControlBudget:(unsigned long long)arg1 ;
-(void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1 ;
-(void)setDeviceFlowControlRegeneration:(float)arg1 ;
-(void)setMmcsProtocolVersion:(NSString *)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(char)hasClientChangeToken;
-(NSData *)clientChangeToken;
-(void)setUserToken:(NSString *)arg1 ;
-(void)setUserIDContainerID:(NSString *)arg1 ;
-(char)hasUserToken;
-(char)hasApplicationBundle;
-(char)hasApplicationVersion;
-(void)setApplicationConfigVersion:(unsigned long long)arg1 ;
-(void)setHasApplicationConfigVersion:(char)arg1 ;
-(char)hasApplicationConfigVersion;
-(void)setGlobalConfigVersion:(unsigned long long)arg1 ;
-(void)setHasGlobalConfigVersion:(char)arg1 ;
-(char)hasGlobalConfigVersion;
-(char)hasDeviceIdentifier;
-(char)hasDeviceSoftwareVersion;
-(char)hasDeviceHardwareVersion;
-(char)hasDeviceLibraryName;
-(char)hasDeviceLibraryVersion;
-(char)hasDeviceFlowControlKey;
-(void)setHasDeviceFlowControlBudget:(char)arg1 ;
-(char)hasDeviceFlowControlBudget;
-(void)setHasDeviceFlowControlBudgetCap:(char)arg1 ;
-(char)hasDeviceFlowControlBudgetCap;
-(void)setHasDeviceFlowControlRegeneration:(char)arg1 ;
-(char)hasDeviceFlowControlRegeneration;
-(void)setDeviceProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasDeviceProtocolVersion:(char)arg1 ;
-(char)hasDeviceProtocolVersion;
-(char)hasLocale;
-(char)hasMmcsProtocolVersion;
-(char)hasDeviceAssignedName;
-(char)hasDeviceHardwareID;
-(int)targetDatabase;
-(void)setHasTargetDatabase:(char)arg1 ;
-(char)hasTargetDatabase;
-(char)hasUserIDContainerID;
-(void)setHasIsolationLevel:(char)arg1 ;
-(char)hasIsolationLevel;
-(NSString *)userToken;
-(unsigned long long)applicationConfigVersion;
-(unsigned long long)globalConfigVersion;
-(NSString *)deviceSoftwareVersion;
-(NSString *)deviceHardwareVersion;
-(NSString *)deviceLibraryName;
-(NSString *)deviceLibraryVersion;
-(NSString *)deviceFlowControlKey;
-(unsigned long long)deviceFlowControlBudget;
-(unsigned long long)deviceFlowControlBudgetCap;
-(float)deviceFlowControlRegeneration;
-(unsigned long long)deviceProtocolVersion;
-(NSString *)mmcsProtocolVersion;
-(NSString *)deviceAssignedName;
-(NSString *)deviceHardwareID;
-(NSString *)userIDContainerID;
-(id)_prettyDictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

