/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextMagnifier.h>

@interface UITextMagnifierCaret : UITextMagnifier {

	CGPoint _offset;
	float _yOffset;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) float yOffset;               //@synthesize yOffset=_yOffset - In the implementation block
+(id)sharedCaretMagnifier;
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(BOOL)terminalPointPlacedCarefully;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(float)yOffset;
-(id)initWithFrame;
-(void)updateFrameAndOffset;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(void)zoomUpAnimation;
-(CGPoint)animationPoint;
-(void)zoomDownAnimation;
-(void)setYOffset:(float)arg1 ;
@end
