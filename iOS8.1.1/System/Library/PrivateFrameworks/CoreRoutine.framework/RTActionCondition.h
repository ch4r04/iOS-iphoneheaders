/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutine/NSSecureCoding.h>

@class RTLocationOfInterest, NSDate, NSString;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;
	long long _locationOfInterestState;
	NSDate* _date;
	NSString* _depiction;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) long long locationOfInterestState;                      //@synthesize locationOfInterestState=_locationOfInterestState - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * depiction;                                   //@synthesize depiction=_depiction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationOfInterestStateToString:(long long)arg1 ;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(long long)locationOfInterestState;
-(NSString *)depiction;
-(id)initWithLoi:(id)arg1 loiState:(long long)arg2 date:(id)arg3 depiction:(id)arg4 ;
@end
