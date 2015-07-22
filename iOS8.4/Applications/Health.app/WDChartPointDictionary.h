/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDChartPoint.h>

@class NSDate, WDChartPointAnnotation, NSDictionary, NSString;

@interface WDChartPointDictionary : NSObject <WDChartPoint> {

	NSDate* _xValue;
	WDChartPointAnnotation* _annotation;
	NSDictionary* _yValue;
	int _averageStyle;

}

@property (nonatomic,retain) NSDictionary * yValue;                            //@synthesize yValue=_yValue - In the implementation block
@property (assign,nonatomic) int averageStyle;                                 //@synthesize averageStyle=_averageStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * xValue;                                  //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) WDChartPointAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(id)averageYValue;
-(char)isEqualToChartPointDictionary:(id)arg1 ;
-(int)averageStyle;
-(void)setAverageStyle:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(WDChartPointAnnotation *)annotation;
-(void)setAnnotation:(WDChartPointAnnotation *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)allYValues;
-(NSDate *)xValue;
-(NSDictionary *)yValue;
-(id)yValueForKey:(id)arg1 ;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(float)yValueFloatRepresentation;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSDictionary *)arg1 ;
@end
