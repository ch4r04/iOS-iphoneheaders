/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBBannerContextView, UIView;

@interface SBBannerContainerView : UIView {

	BOOL _modal;
	SBBannerContextView* _bannerView;
	UIView* _backgroundView;
	UIView* _inlayView;
	double _maximumHeight;
	UIView* _inlayContainerView;

}

@property (assign,getter=isModal,nonatomic) BOOL modal;                     //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) SBBannerContextView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) UIView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) UIView * inlayView;                            //@synthesize inlayView=_inlayView - In the implementation block
@property (assign,nonatomic) double maximumHeight;                          //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) UIView * inlayContainerView;                   //@synthesize inlayContainerView=_inlayContainerView - In the implementation block
-(void)setInlayView:(UIView *)arg1 ;
-(void)_layoutInlayContainerView;
-(void)_layoutBackgroundView;
-(CGRect)_inlineContainerFrame;
-(CGRect)_backgroundFrame;
-(double)_bannerBottomY;
-(UIView *)inlayView;
-(UIView *)inlayContainerView;
-(void)setInlayContainerView:(UIView *)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(void)setModal:(BOOL)arg1 ;
-(BOOL)isModal;
-(SBBannerContextView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(double)maximumHeight;
-(void)setBannerView:(SBBannerContextView *)arg1 ;
@end
