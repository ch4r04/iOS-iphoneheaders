/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCatherineData : CMLogItem {

	double _catherine;
	double _confidence;

}

@property (nonatomic,readonly) double catherine;               //@synthesize catherine=_catherine - In the implementation block
@property (nonatomic,readonly) double confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(double)catherine;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)confidence;
@end

