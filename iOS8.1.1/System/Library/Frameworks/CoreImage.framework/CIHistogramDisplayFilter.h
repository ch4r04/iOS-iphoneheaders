/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIHistogramDisplayFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputHeight;
	NSNumber* inputHighLimit;
	NSNumber* inputLowLimit;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputHeight; 
@property (nonatomic,retain) NSNumber * inputHighLimit; 
@property (nonatomic,retain) NSNumber * inputLowLimit; 
+(id)customAttributes;
-(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(void)setInputLowLimit:(NSNumber *)arg1 ;
-(void)setInputHighLimit:(NSNumber *)arg1 ;
-(NSNumber *)inputHeight;
-(NSNumber *)inputHighLimit;
-(NSNumber *)inputLowLimit;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end
