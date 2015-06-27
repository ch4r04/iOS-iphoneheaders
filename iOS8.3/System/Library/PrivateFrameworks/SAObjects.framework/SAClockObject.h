/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * cityName; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * countryName; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryName;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)cityName;
-(void)setCityName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(NSString *)unlocalizedCityName;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(NSString *)countryCode;
@end
