/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSDevice.h>
@class NSString, NSNumber;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
@required
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)appIdentifier;
-(id)capacity:(id)arg1;
-(BOOL)isInRetailDemoMode;
-(NSString *)vendorID;
-(NSString *)appVersion;
-(NSString *)productType;
-(NSNumber *)pixelRatio;

@end


@protocol IKAppDeviceConfig;
@class NSString, NSNumber;

@interface IKJSDevice : IKJSObject <IKJSDevice> {

	id _isNetworkTypeChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)appIdentifier;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(id)capacity:(id)arg1 ;
-(BOOL)isInRetailDemoMode;
-(NSString *)vendorID;
-(NSString *)appVersion;
-(NSString *)productType;
-(NSNumber *)pixelRatio;
@end
