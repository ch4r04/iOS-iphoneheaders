/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIButton.h>

@interface MPButton : UIButton {

	UIEdgeInsets _hitRectInsets;
	double _holdDelayInterval;
	unsigned _holding : 1;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) double holdDelayInterval;                      //@synthesize holdDelayInterval=_holdDelayInterval - In the implementation block
+(id)easyTouchButtonWithType:(long long)arg1 ;
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
+(double)easyTouchDefaultCharge;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)_handleTouchDown;
-(void)_handleTouchCancel;
-(void)_handleTouchUp;
-(void)_delayedTriggerHold;
-(double)holdDelayInterval;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)setHoldDelayInterval:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGRect)hitRect;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

