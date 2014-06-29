/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MTStopwatchController, UIView, StopwatchTimeView;

@interface MTStopwatchControlsView : UIView {

	MTStopwatchController* _controller;
	UIView* _buttonsBackgroundView;
	UIView* _topKeylineView;
	UIView* _bottomKeylineView;
	StopwatchTimeView* _timeView;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) <StopWatchControlsTarget> * target; 
@property (nonatomic,readonly) StopwatchTimeView * timeView;                    //@synthesize timeView=_timeView - In the implementation block
+(float)timeViewHeight;
+(float)defaultHeight;
-(void)handleLocaleChange;
-(id)timeView;
-(void)_configureAndAddButton:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end
