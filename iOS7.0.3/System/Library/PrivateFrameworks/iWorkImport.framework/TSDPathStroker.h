/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUColor;

@interface TSDPathStroker : NSObject {

	TSUColor* mColor;
	float mWidth;
	TSDPathStroker* mPrecedingStroker;

}

@property (assign,nonatomic) float width; 
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 inColor:(id)arg3 ;
-(void)dealloc;
-(float)width;
-(void)setWidth:(float)arg1 ;
@end

