/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class CALayer;

@interface AEHighlightLine : NSObject {

	CALayer* mLayer;
	CGRect mFullLineRect;
	CGRect mCurrentLineRect;
	float mUnderlinePosition;
	CGImageRef mMultiplyImage;
	char mLightenBlend;
	char mIncludesCapSpace;
	char mIsSingleWord;
	CALayer* mContentLayer;
	int mUnderlineDirection;

}

@property (nonatomic,retain) CALayer * contentLayer; 
@property (assign,nonatomic) CGRect fullLineRect; 
@property (assign,nonatomic) CGRect currentLineRect; 
@property (assign,nonatomic) float underlinePosition; 
@property (assign,nonatomic) int underlineDirection; 
@property (assign,nonatomic) CGImageRef multiplyImage; 
@property (assign,nonatomic) char lightenBlend; 
@property (assign,nonatomic) char includesCapSpace; 
@property (assign,nonatomic) char isSingleWord; 
-(void)setContentLayer:(CALayer *)arg1 ;
-(void)setMultiplyImage:(CGImageRef)arg1 ;
-(CGRect)fullLineRect;
-(void)setFullLineRect:(CGRect)arg1 ;
-(CGRect)currentLineRect;
-(void)setCurrentLineRect:(CGRect)arg1 ;
-(void)setUnderlinePosition:(float)arg1 ;
-(int)underlineDirection;
-(void)setUnderlineDirection:(int)arg1 ;
-(CGImageRef)multiplyImage;
-(char)lightenBlend;
-(void)setLightenBlend:(char)arg1 ;
-(char)includesCapSpace;
-(void)setIncludesCapSpace:(char)arg1 ;
-(char)isSingleWord;
-(void)setIsSingleWord:(char)arg1 ;
-(void)dealloc;
-(CALayer *)contentLayer;
-(float)underlinePosition;
@end

