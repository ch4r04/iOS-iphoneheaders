/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:23:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/mapspushd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IDSDevice, NSData, NSString;

@interface MapsPushDevice : NSObject {

	IDSDevice* _device;
	NSData* pushToken;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * model; 
@property (copy,readonly) NSString * colorName; 
@property (copy,readonly) NSString * enclosureColorName; 
@property (nonatomic,readonly) IDSDevice * device;                    //@synthesize device=_device - In the implementation block
@property (getter=isFake,readonly) char fake; 
-(id)initWithIDSDevice:(id)arg1 ;
-(NSString *)colorName;
-(NSString *)enclosureColorName;
-(char)isFake;
-(NSString *)name;
-(NSString *)model;
-(IDSDevice *)device;
@end

