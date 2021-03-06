/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

@class TSCH3DShaderVariable;

@interface TSCH3DChartBarGrowClipShaderEffect : TSCH3DChartClippingShaderEffect {

	TSCH3DShaderVariable* mTimingValue;
	BOOL mPositiveOnly;
	BOOL mUseXAxis;
	float mCapFudge;
	float mClipFudge;
	float mClipInitialCapFudge;
	BOOL mDisableClippingInitialCap;
	BOOL mDisableClipping;
	BOOL mUseDiscard;
	BOOL mUseCapScaling;

}

@property (assign,nonatomic) BOOL positiveOnly; 
@property (assign,nonatomic) BOOL useXAxis; 
@property (assign,nonatomic) BOOL useDiscard; 
@property (assign,nonatomic) BOOL useCapScaling; 
@property (assign,nonatomic) float capFudge; 
@property (assign,nonatomic) float clipFudge; 
+(id)variableElementRange;
+(id)variableClipVertex;
+(id)variableIsCap;
+(id)variableInverseBevelInfo;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(unsigned long long)numberOfClippingValues;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableElementRange;
-(id)variableClipVertex;
-(id)variableIsCap;
-(id)variableInverseBevelInfo;
-(void)p_injectFunctions:(id)arg1 ;
-(BOOL)positiveOnly;
-(void)setPositiveOnly:(BOOL)arg1 ;
-(BOOL)useXAxis;
-(void)setUseXAxis:(BOOL)arg1 ;
-(BOOL)useDiscard;
-(void)setUseDiscard:(BOOL)arg1 ;
-(float)capFudge;
-(void)setCapFudge:(float)arg1 ;
-(float)clipFudge;
-(void)setClipFudge:(float)arg1 ;
-(BOOL)useCapScaling;
-(void)setUseCapScaling:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
@end

